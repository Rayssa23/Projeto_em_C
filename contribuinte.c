//Módulo Contribuinte
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include "validacoes.h"
#include "contribuinte.h"

typedef struct contribuinte Contribuinte;

struct contribuinte {
   char nome[51];
   char profissao[51];
   float valor;
};


//Gravar Arquivo
void gravaContribuinte(Contribuinte*);

void cadastroContribuinte(void){
    Contribuinte* cont;
    cont = (Contribuinte*) malloc(sizeof(Contribuinte));
    int valida;
    int valida2;
    int valida3;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", cont->nome);
	    getchar();
            valida = validarNomes(cont->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Nome Completo: ");
                scanf("%s", cont->nome);
	            getchar();
                valida = validarNomes(cont->nome);
            } 
        printf("|/////        Profissao: ");
        scanf("%s", cont->profissao);
        getchar();
        valida2 = validarNomes(cont->profissao);
            while (valida2 == 1){
                printf("\n Profissao Invalida! Tente novamente!\n");
                printf("|/////        Profissao: ");
                scanf("%s",cont->profissao);
	            getchar();
                valida = 0;
                valida2 = validarNomes(cont->profissao);
            }        
        printf("|/////        Valor(apenas numeros): ");
        scanf("%f", &cont->valor);        
        valida3 = validaValor(cont->valor);
            while (valida3 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
                scanf("%f", &cont->valor);
                valida3 = validaValor(cont->valor);
             }
        printf("///                                                                        /////|\n");        
        getchar();      
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", cont->nome);
    printf("Profissao: %s\n", cont->profissao);
    printf("Valor: %f\n", cont->valor);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void consultaContribuinte(void){
    char nome[51];
    char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf(" %50[^\n]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);        
}

void excluiContribuinte(void){
    char nome[51];
    char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluirr Contribuinte                       /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf(" %50[^\n]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);     
}

void atualizaContribuinte(void){
   char nome[51];
   char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf(" %50[^\n]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);     
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo Contribuinte ////////////////////
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
