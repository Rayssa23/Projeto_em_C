

  //======== MÓDULO ENTRADAS ===========
//=========== Subprograma ===============


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "validacoes.h"
#include "entradas.h"

typedef struct entrada Entrada;

void menuEntradas(void) {	
	char opcao;
	    do {
		    opcao = moduloEntradas();
		    switch (opcao) {
			    case '1' : 	cadastroDeEntradas();
						    break;
			    case '2' : 	consultaDeEntradas();
						    break;
			    case '3' : 	excluiEntrada();
						    break;
			    case '4' : 	atualizaEntrada();
						    break;
	    	}
	    } while (opcao != '0');
}

//// CADASTRO
void cadastroDeEntradas(void){
    Entrada* ent;

    ent = telaCadastroEntradas();
    gravaEntradas(ent);
    free(ent);
}

//// PESQUISA
void consultaDeEntradas(void){
    Entrada* ent;
    int tipo;

    tipo = telaConsultaEntradas();
    ent = pesquisaDeEntradas(tipo);
    exibeEntradas(ent);
    free(ent);
}

//// EXCLUSÃO
void excluiEntrada(void){
    Entrada* ent;
	int tipo;

	tipo = telaExcluiEntradas();
	ent = (Entrada*) malloc(sizeof(Entrada));
	ent = pesquisaDeEntradas(tipo);
	    if (ent == NULL) {
    	    printf("\n\nEntrada não encontrado!\n\n");
  	    } else {
            exibeEntradas(ent);
		    ent->status = False;
		    regravarEntradas(ent);
		    free(ent);
	    }
}

//// ATUALIZAÇÃO
void atualizaEntrada(void) {
    Entrada* ent;
    int tipo;

	tipo = telaAtualizaEntradas();
	ent = pesquisaDeEntradas(tipo);
// Se houver varias entradas do mesmo tipo, vai atualizar todas??? Pesquisar pelonome e depois escolher qual atualizar???
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
          exibeEntradas(ent);
          ent = telaCadastroEntradas();
		  regravarEntradas(ent);
		  free(ent);
          
	}
}


Entrada* telaCadastroEntradas(void){
    Entrada* ent;
    ent = (Entrada*) malloc(sizeof(Entrada));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        do {
        printf("|/////            Responsavel(Nome Completo): ");
        scanf(" %50[^\n]", ent->nome);
	        getchar();
        } 
        while (!validarNomes(ent->nome));

        do {
        printf("|/////            Valor(apenas numeros): ");
            scanf("%f", &ent->valor);
            } while (!validaValor(&ent->valor));
        
        do {
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%d", &ent->tipo);
        }while (!validaTipo(ent->tipo));

        printf("///           Data de Registro (dd/mm/aaaa):  ");
	        scanf("%[0-9/]", ent->data);
	            getchar();

        ent->status = True;
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        delay(1); 
            return ent;
}

int telaConsultaEntradas(void){
    int tipo;
    tipo = (int) malloc(sizeof(int));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%d",&tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
            return tipo;
}

int telaExcluiEntradas(void){
    int tipo;
    tipo = (int) malloc(sizeof(int));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
            printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%d", &tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
            return tipo;
}

int telaAtualizaEntradas(void){
    int tipo;
    tipo = (int) malloc(sizeof(int));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf(" %d", &tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        delay(1);
            return tipo;
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo ENTRADAS ////////////////////////
////////////////////////////////////////////////////////////
    void gravaEntradas(Entrada* ent) {
    FILE* fp;
    
    fp = fopen("entradas.dat", "ab");
    if (fp == NULL) {
            printf("======== ERRO NO ARQUIVO ========= ");
            printf("======= Lamentamos Informar ======= ");
        exit(1);
    }
    else{
        fwrite(ent, sizeof(Entrada), 1, fp);
        fclose(fp);
    }
}

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Entrada* pesquisaDeEntradas(int tipo) {
        FILE* fp;
        Entrada* ent;

        ent = (Entrada*) malloc(sizeof(Entrada));
        fp = fopen("entradas.dat", "rb");
        if (fp == NULL) {
            printf("======== ERRO NO ARQUIVO ========= ");
            printf("======= Lamentamos Informar ======= ");
            exit(1);
        }
        while(fread(ent, sizeof(Entrada), 1, fp)) {
        if ((ent->tipo == tipo) && (ent->status == True)) {
            fclose(fp);
            return ent;
        }
    }
    fclose(fp);
    return NULL; 
   
}

////////////////////////////////////////////////////////////
////////// Atualizando ENTRADAS ////////////////////////////
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//////////Exibir Arquivo ENTRADAS    ///////////////////////
////////////////////////////////////////////////////////////

void exibeEntradas(Entrada* ent) {

  if ((ent == NULL)) {
    printf("\n= = = Entrada Inexistente = = =\n");
  } else {
    printf("\n= = = Entrada Cadastrada = = =\n");
    printf("Nome: %s\n", ent->nome);
    printf("Valor: %5.2f\n", ent->valor);
    printf("Tipo (Salario - 1 / Extras - 2): %d\n", ent->tipo);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo ENTRADAS  ///////////////////////
////////////////////////////////////////////////////////////

void regravarEntradas(Entrada* ent) {
    int achou;
	FILE* fp;
	Entrada* entLido;

	entLido = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("entradas.dat", "r+b");
	if (fp == NULL) {
		printf("======== ERRO NO ARQUIVO ========= ");
        printf("======= Lamentamos Informar ======= ");
        exit(1);
	}
	achou = False;
	while(fread(entLido, sizeof(Entrada), 1, fp) && !achou) {
		if ((entLido->tipo == ent->tipo)) {
			achou = True;
			fseek(fp, -1*sizeof(Entrada), SEEK_CUR);
        	fwrite(ent, sizeof(Entrada), 1, fp);
		}
	}
	fclose(fp);
	free(entLido);

}


char moduloEntradas(void){
     char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Entradas                                    /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Registrar Entradas                                   /////|\n");
        printf("|/////            2 - Consultar Entradas                                   /////|\n");
        printf("|/////            3 - Excluir Entradas                                     /////|\n");
        printf("|/////            4 - Atualizar Entradas                                   /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
        delay(1);
}
