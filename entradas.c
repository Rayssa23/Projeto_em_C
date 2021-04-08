//Modulo entradas
//Subprograma
#include "validacoes.h"
#include <stdio.h>
#include "entradas.h"
#include <time.h>

typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor;
   char tipo;
   struct tm *data;
};

struct tm {
    int tm_mday;
    int tm_mon;
    int tm_year;
    struct tm *data;

};

void cadastroEntradas(void){
    Entrada* ent;
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
            ent->data = localtime(&d);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n",ent->nome);
    printf("Valor: %f\n", ent->valor);
    printf("Tipo: %c\n", ent->tipo);
    printf("%d/%d/%d", data->mday, data->mon, data->year);
            delay(1);
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

