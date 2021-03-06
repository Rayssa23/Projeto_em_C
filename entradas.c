//Modulo entradas
//Subprograma
#include "validacoes.h"
#include <stdio.h>
#include "passaTempo.h"
#include "entradas.h"

void cadastroEntradas(void){
    char nome[51];
    int valor;
    char tipo[20];            
    int valida;
    int valida2;
    int valida3;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome Completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &nome);
	        getchar();
            valida = validaNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Responsavel(Nome Completo): ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &nome);
	            getchar();
            }   
        printf("|/////            Valor(apenas numeros): ");
        scanf("%d", &valor);
        getchar();
            valida2 = validaValor(valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
                scanf("%d", &valor);
                getchar();
             }
        printf("|/////            Tipo (Salario - S/Extras - E): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &tipo);
	        getchar();
            valida3 = validaTipo(tipo);
            while (valida3 == 1){
                printf("|/////            Tipo (Salario - S/Extras - E): ");
                printf("\n Tipo Invalido! Tente novamente!\n");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", &tipo);
                getchar();
            } 
        printf("|/////                                                                     /////|\n");   
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n",nome);
    printf("Valor: %s\n", valor);
    printf("Tipo: %s\n", tipo);
            delay(1);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}

void consultaEntradas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|/////            Informe o Valor:                                         /////|\n");
        scanf("%[0-9]", valor);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
}

void excluiEntradas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");

        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|/////            Informe o Valor:                                         /////|\n");
        scanf("%[0-9]", valor);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
}

void atualizaEntradas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|/////            Informe o Valor:                                         /////|\n");
        scanf("%[0-9]", valor);
            getchar();
        printf("|/////                                                                     /////|\n"); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}

