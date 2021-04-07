//Módulo Dependente
//Subprograma
#include <stdio.h>
#include "dependente.h"
#include "validacoes.h"

void cadastroDependente(void){
    char nome[51];
    int idade;
    int valida;
    int valida2;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Nome Completo: ");
                scanf(" %50[^\n]", nome);
                getchar();
                valida = validarNomes(nome);                                                
            }    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);                                            
        valida2 = validaValor(idade);
            while (valida2 == 1){
                printf("\n Idade Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
               scanf("%d", &idade);
                valida2 = validaValor(idade);
             }
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
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