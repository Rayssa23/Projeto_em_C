

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
    char* nome;

    nome = telaConsultaEntradas();
    ent = pesquisaDeEntradas(nome);
    exibeEntradas(ent);
    free(ent);
    free(nome);
}

//// EXCLUSÃO
void excluiEntrada(void){
    Entrada* ent;
	char* nome;

	nome = telaExcluiEntradas();
	ent = (Entrada*) malloc(sizeof(Entrada));
	ent = pesquisaDeEntradas(nome);
	    if (ent == NULL) {
    	    printf("\n\nEntrada não encontrado!\n\n");
  	    } else {
		    ent->status = False;
		    regravarEntradas(ent);
		    free(ent);
	    }
        free(nome);
}

//// ATUALIZAÇÃO
void atualizaEntrada(void) {
    Entrada* ent;
    char* nome;

	nome = telaAtualizaEntradas();
	ent = pesquisaDeEntradas(nome);
    
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
          exibeEntradas(ent);
          ent = telaCadastroEntradas();
          strcpy(ent->nome, nome);
		  regravarEntradas(ent);
		  free(ent);
          
	}
    free(nome);
}


//////////////////////////////////////////
///////////////// TELAS //////////////////
/////////////////////////////////////////

Entrada* telaCadastroEntradas(void){
    Entrada* ent;
    ent = (Entrada*) malloc(sizeof(Entrada));

        system("clear");
        printf("\n");
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
        }
        while (!validaTipo(ent->tipo));
        getchar();
        printf("|////            Data de Registro (dd/mm/aaaa)  \n");
        printf("|////            Dia(dd): "   );
	        scanf("%[0-9/]", ent->dia);
	        getchar();
        printf("|////            Mes(mm): "   );
	        scanf("%[0-9/]", ent->mes);
	        getchar();
        printf("|////            Ano(aa): "   );
	        scanf("%[0-9/]", ent->ano);
	        getchar();

        ent->status = True;        
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        delay(1); 
            return ent;
}

char* telaConsultaEntradas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");    
        delay(1); 
        return nome;  
}

char* telaExcluiEntradas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");    
        delay(1); 
        return nome;  
}

char* telaAtualizaEntradas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));

        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");    
        delay(1); 
        return nome;  
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
        fwrite(ent, sizeof(Entrada), 1, fp);
        fclose(fp);
}

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Entrada* pesquisaDeEntradas(char* nome) {
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
        if ((strcmp(ent->nome, nome) == 0) && (ent->status == True)){
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
    printf("Data de Registro: %s/%s/%s\n", ent->dia,ent->mes,ent->ano);
    delay(1);
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
		if ((strcmp(entLido->nome, ent->nome)==0)) {
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
