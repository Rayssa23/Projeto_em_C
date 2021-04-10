//Módulo Dependente
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include "dependente.h"
#include "validacoes.h"

typedef struct dependente Dependente;

struct dependente{
    char nome[51];
    int idade;
};

//Gravar Arquivo
void gravaDependente(Dependente*);

void cadastroDependente(void){
    Dependente* depen;
    depen = (Dependente*) malloc(sizeof(Dependente));
    int valida;
    int valida2;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", depen->nome);
	    getchar();
            valida = validarNomes(depen->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Nome Completo: ");
                scanf(" %50[^\n]", depen->nome);
                getchar();
                valida = validarNomes(depen->nome);                                                
            }    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &depen->idade);                                            
        valida2 = validaValor(depen->idade);
            while (valida2 == 1){
                printf("\n Idade Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
               scanf("%d", &depen->idade);
                valida2 = validaValor(depen->idade);
             }
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", depen->nome);
    printf("Idade: %d\n", depen->idade);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}


void consultaDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);                                                 
}

void excluiDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Dependente                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1); 
}

void atualizaDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo DEPENDENTE //////////////////////
////////////////////////////////////////////////////////////
void gravaDependente(Dependente* depend) {
  FILE* fp;
  fp = fopen("dependente.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(depend, sizeof(Dependente), 1, fp);
  fclose(fp);
}