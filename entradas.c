//Modulo entradas
//Subprograma
#include "validacoes.h"
#include <stdio.h>
#include "entradas.h"
#include <time.h>
void cadastroEntradas(void){
    char nome[51];
    float valor;
    char tipo;            
    int valida;
    int valida2;
    int valida3;
    int data;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome Completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	        getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf(" %50[^\n]", nome);
	            getchar();
                valida = validarNomes(nome);
            }  
        printf("|/////            Valor(apenas numeros): ");
            scanf("%f", &valor);
            valida2 = validaValor(valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("\n|/////            Valor (apenas numeros): ");
                scanf("%f", &valor);
                getchar();
                valida2 = validaValor(valor);
             }
        

        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%c", &tipo);
	        getchar();
            valida3 = validaTipo(tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Salario - 1 / Extras - 2): ");
                scanf("%c", &tipo);
                getchar();
                valida3 = validaTipo(tipo);

            }
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n",nome);
    printf("Valor: %f\n", valor);
    printf("Tipo: %c\n", tipo);
    printf("Data/Hora: %c\n", data);
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

