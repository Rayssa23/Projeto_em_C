//Módulo Contribuinte
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "validacoes.h"
#include "contribuinte.h"

typedef struct contribuinte Contribuinte;


void menuContribuinte(void) {
	char opcao;
	    do {
		    opcao = moduloContribuinte();
		    switch (opcao) {
			    case '1' : 	cadastroDeContribuinte();
						    break;
			    case '2' : 	consultaDeContribuinte();
						    break;
			    case '3' : 	excluiContribuinte();
						    break;
			    case '4' : 	atualizaContribuinte();
						    break;
		    }
	    } while (opcao != '0');
}

//// CADASTRO
void cadastroDeContribuinte(void){
    Contribuinte* contr; 
    contr = telaCadastroContribuinte();
    gravaContribuinte(contr);
    free(contr);
}

//// PESQUISA
void consultaDeContribuinte(void){
    Contribuinte* contr;
    char* nome;
    nome = telaConsultaContribuinte();
    contr = pesquisaContribuinte(nome);
    exibeContribuinte(contr);
    free(contr);
    free(nome);
}

//// EXCLUSÃO
    void excluiContribuinte(void){
        Contribuinte* contr;
        char *nome;

        nome = telaExcluiContribuinte();
        contr = (Contribuinte*) malloc(sizeof(Contribuinte));
        contr = pesquisaContribuinte(nome);
            if (contr == NULL){
                printf("\n\nContribuinte não encontrado!!!\n\n");
            }else{
                contr->status = False;
                regravarContribuinte(contr);
                free(contr);
            }
        free(nome);
}

//// ATUALIZAÇÃO
    void atualizaContribuinte(void) {
        Contribuinte* contr;
        char* nome;

	    nome = telaAtualizaContribuinte();
        contr = pesquisaContribuinte(nome);
        
        if (contr == NULL) {
            printf("\n\nContribuinte não encontrado!\n\n");
        } else {
            contr = telaCadastroContribuinte();
            strcpy(contr->nome, nome);
            regravarContribuinte(contr);
            free(contr);
  }
        free(nome);
}



Contribuinte* telaCadastroContribuinte(void){
    Contribuinte* contr;
    contr = (Contribuinte*) malloc(sizeof(Contribuinte));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        do{
            printf("|/////            Nome (Nome completo): ");
            scanf(" %50[^\n]", contr->nome);
	            getchar();
            }while (!validarNomes(contr->nome));
        do{    
            printf("|/////            Valor(apenas numeros): ");
                scanf("%f", &contr->valor);
            }while(!validaValor(&contr->valor));
        do{
            printf("|/////            Profissao: ");
                scanf(" %50[^\n]", contr->profissao);
	            getchar();
           }while (!validarNomes(contr->profissao));
             contr->status = True;
        printf("///                                                                        /////|\n");        
        getchar();      
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
	    printf("\n");
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return contr;
        delay(1);
}


char* telaConsultaContribuinte(void){
    char *nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);        
	    getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
        delay(1);        
}

char* telaExcluiContribuinte(void){
    char* nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Conribuinte                         /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
        delay(1);
}

char *telaAtualizaContribuinte(void){
   char* nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
        delay(1);
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo CONTRIBUINTE ////////////////////
////////////////////////////////////////////////////////////
void gravaContribuinte(Contribuinte* contr) {
  FILE* fp;
  fp = fopen("contribuinte.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(contr, sizeof(Contribuinte), 1, fp);
  fclose(fp);
}


////////////////////////////////////////////////////////////
//////////Consultar Arquivo CONTRIBUINTE ///////////////////
////////////////////////////////////////////////////////////

    Contribuinte* pesquisaContribuinte(char* nome) {
        FILE* fp;
        Contribuinte* contr;

        contr = (Contribuinte*) malloc(sizeof(Contribuinte));
        fp = fopen("contribuintes.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
        while(fread(contr, sizeof(Contribuinte), 1, fp)) {
		if ((strcmp(contr->nome, nome) == 0) && (contr->status == True)) {
			fclose(fp);
			return contr;
		}
	}
	fclose(fp);
	return NULL;
}



////////////////////////////////////////////////////////////
//////////Exibir Arquivo CONTRIBUINTE  /////////////////////
////////////////////////////////////////////////////////////


void exibeContribuinte(Contribuinte* contr) {

  if ((contr = NULL)) {
    printf("\n= = = Contribuinte Inexistente = = =\n");
  } else {
    printf("\n= = = CONTRIBUINTE Cadastrado = = =\n");
    printf("Nome: %s\n", contr->nome);
    printf("Destino: %s\n", contr->profissao);
    printf("Valor: %5.2f\n", contr->valor);
    delay(1);

  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo CONTRIBUINTE ////////////////////
////////////////////////////////////////////////////////////

void regravarContribuinte(Contribuinte* contr) {
    int achou;
	FILE* fp;
	Contribuinte* contLido;

	contLido = (Contribuinte*) malloc(sizeof(Contribuinte));
	fp = fopen("contribuintes.dat", "r+b");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
	}
	achou = False;
	while(fread(contLido, sizeof(Contribuinte), 1, fp) && !achou) {
		if (strcmp(contLido->nome, contr->nome) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Contribuinte), SEEK_CUR);
        	fwrite(contr, sizeof(Contribuinte), 1, fp);
		}
	}
	fclose(fp);
	free(contLido);

}

char moduloContribuinte(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Contribuintes                               /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Cadastrar Contribuinte                               /////|\n");
        printf("|/////            2 - Consultar Contribuintes                              /////|\n");
        printf("|/////            3 - Excluir Contribuinte                                 /////|\n");
        printf("|/////            4 - Atualizar Contribuinte                               /////|\n");
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

