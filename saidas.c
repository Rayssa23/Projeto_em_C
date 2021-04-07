//Modulo saidas
//Subprograma
#include <stdio.h>
#include "validacoes.h"
#include "saidas.h"

typedef struct saida Saida;

struct saida {
   char nome[51];
   float valor;
   char tipo;
   char dest[51];
};

void cadastroSaidas(void){
    Saida* sai;
    int valida;
    int valida2;
    int valida3;
    int valida4;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf(" %50[^\n]", sai->nome);
	        getchar();
            valida = validarNomes(sai->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf(" %50[^\n]",sai->nome );
	            getchar();
                valida = validarNomes(sai->nome);
            }    
        printf("|/////            Valor(apenas numeros): ");
        scanf("%f", &sai->valor);
            valida2 = validaValor(sai->valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("\n|/////            Valor (apenas numeros): ");
                scanf("%f", &sai->valor);
                valida2 = validaValor(sai->valor);
             }
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
        scanf("%c", &sai->tipo);
	        getchar();
             valida3 = validaTipo(sai->tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%c", &sai->tipo);
                getchar();
                valida3 = validaTipo(sai->tipo);
            }     
        printf("|/////            Destino: ");
        scanf(" %50[^\n]", sai->dest);
	        getchar();
            valida4 = validarNomes(sai->dest);
            while (valida4 == 1){
                printf("\n Destino Invalido! Tente novamente!\n");
                printf("\n|/////            Destino: ");
                scanf(" %50[^\n]", sai->dest);
	            getchar();
                valida4 = validarNomes(sai->dest);
            }    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("Responsavel: %s\n", sai->nome);
    printf("Valor: %f\n", sai->valor);
    printf("Tipo: %c\n", sai->tipo);
    printf("Destino: %s\n", sai->dest);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}

void consultaSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
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

void excluiSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
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

void atualizaSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
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
