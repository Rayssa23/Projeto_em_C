
                        ///////////////////////////////////////////////////////////
                        /////////////////////Modulo entradas///////////////////////
                        ///////////////////////////////////////////////////////////


//Subprograma

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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


//struct tm {
    //int tm_mday;
    //int tm_mon;
    //int tm_year;
    //struct tm *data;

//};



//// CADASTRO
void cadastroDeEntradas(void){
    Entrada* ent; 
    //Ler dados de Entradas com a função telaCadastroEntradas()
        ent = telaCadastroEntradas();
    /// Gravar registro do arquivo Entradas
       gravaEntradas(ent);
    //Liberando o esáço da memória
        free(ent);
}

//// PESQUISA
void consultaDeEntradas(void){
    Entrada* ent;
    char tipo;
    //Exibir a tela
    tipo = telaConsultaEntradas();
    //Pesquisar no arquivo
    ent = pesquisaDeEntradas(tipo);
    // Exibir resultado da pesquisa de entradas
    exibeEntradas(ent);
    free(ent);
}

//// EXCLUSÃO
void excluiEntrada(void){
    Entrada* ent;
	char tipo;

	tipo = telaExcluiEntradas();
	ent = (Entrada*) malloc(sizeof(Entrada));
	ent = pesquisaDeEntradas(tipo);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrado!\n\n");
  	} else {
		  ent->status = False;
		  regravarEntradas(ent);
		  free(ent);
	}
}

//// ATUALIZAÇÃO
void atualizaEntrada(void) {
    Entrada* ent;
    char tipo;

	tipo = telaAtualizaEntradas();
	ent = pesquisaDeEntradas(tipo);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
		  ent = telaCadastroEntradas();
		  if(ent->tipo == tipo){
		  regravarEntradas(ent);
		  free(ent);
          }
	}
}


Entrada* telaCadastroEntradas(void){
    Entrada* ent;
    ent = (Entrada*) malloc(sizeof(Entrada));
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
        scanf("%c", &ent->tipo);
	        getchar();
        }while (!validaTipo(ent->tipo));
        ent->status = True;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        getchar();
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
            return ent;
            delay(1); 
}

char telaConsultaEntradas(void){
    char tipo;
    	printf("\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%c",&tipo);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return tipo;
        delay(1);
}

char telaExcluiEntradas(void){
    char tipo;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
            printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%c", &tipo);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return tipo;
        delay(1);
}

char telaAtualizaEntradas(void){
    char tipo;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf(" %c", &tipo);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        return tipo;
        delay(1);
}

////////////////////////////////////////////////////////////
//////////Gravando Arquivo ENTRADAS ////////////////////////
////////////////////////////////////////////////////////////
    void gravaEntradas(Entrada* ent) {
    FILE* fp;
    
    fp = fopen("entradas.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    fwrite(ent, sizeof(Entrada), 1, fp);
    fclose(fp);
    }

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Entrada* pesquisaDeEntradas(char tipo) {
        FILE* fp;
        Entrada* ent;

        ent = (Entrada*) malloc(sizeof(Entrada));
        fp = fopen("entradas.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
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
//////////Exibir Arquivo ENTRADAS    ///////////////////////
////////////////////////////////////////////////////////////

void exibeEntradas(Entrada* ent) {

  if ((ent == NULL)&& (ent->status == False)) {
    printf("\n= = = Entrada Inexistente = = =\n");
  } else {
    printf("\n= = = Entrada Cadastrada = = =\n");
    printf("Nome: %s\n", ent->nome);
    printf("Valor: %f\n", ent->valor);
    printf("Tipo (Salario - 1 / Extras - 2): %c\n", ent->tipo);
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
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
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
