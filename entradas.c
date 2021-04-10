//Modulo entradas
//Subprograma
#include <stdlib.h>
#include "validacoes.h"
#include <stdio.h>
#include "entradas.h"
#include <time.h>





typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor;
   char tipo[2];
   struct tm *data;
};

//struct tm {
    //int tm_mday;
    //int tm_mon;
    //int tm_year;
    //struct tm *data;

//};

//Gravar Arquivo
void gravaEntradas(Entrada*);

void cadastroEntradas(void){
    Entrada* ent;
    ent = (Entrada*) malloc(sizeof(Entrada));
    int valida;
    int valida2;
    int valida3;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome Completo): ");
        scanf(" %50[^\n]", ent->nome);
	        getchar();
            valida = validarNomes(ent->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf(" %50[^\n]", ent->nome);
	            getchar();
                valida = validarNomes(ent->nome);
            }  
        printf("|/////            Valor(apenas numeros): ");
            scanf("%f", &ent->valor);
            valida2 = validaValor(ent->valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("\n|/////            Valor (apenas numeros): ");
                scanf("%f", &ent->valor);
                getchar();
                valida2 = validaValor(ent->valor);
             }
        

        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%c", ent->tipo);
	        getchar();
            valida3 = validaTipo(ent->tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Salario - 1 / Extras - 2): ");
                scanf("%c", ent->tipo);
                getchar();
                valida3 = validaTipo(ent->tipo);
            }
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n",ent->nome);
    printf("Valor: %f\n", ent->valor);
    printf("Tipo: %c\n", ent->tipo);
            delay(1);
            return ent;
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}

void consultaEntradas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
}

void excluiEntradas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");

        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar(); 
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
}

void atualizaEntradas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}

////////////////////////////////////////////////////////////
//////////Gravando Arquivo ENTRADAS ////////////////////////
////////////////////////////////////////////////////////////
void gravaEntradas(Entrada* entre) {
  FILE* fp;
  fp = fopen("entradas.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(entre, sizeof(Entrada), 1, fp);
  fclose(fp);
}