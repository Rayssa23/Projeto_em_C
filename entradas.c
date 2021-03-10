//Modulo entradas
//Subprograma
#include "validacoes.h"
#include <stdio.h>
#include "passaTempo.h"
#include "entradas.h"

void cadastroEntradas(void){
    char nome[51];
    float valor;
    char tipo;            
    int valida;
    int valida2;
    int valida3;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome Completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	        getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Responsavel(Nome Completo): ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	            getchar();
                valida = validarNomes(nome);
            }   
        printf("|/////            Valor(apenas numeros): ");
        scanf("%f", &valor);
        getchar();
        printf("%0.2f", valor);
            valida2 = validaValor(valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
                scanf("%f", &valor);
                getchar();
                valida2 = validaValor(valor);
             }
        printf("|/////            Tipo (Salario - S/Extras - E): ");
        scanf("%c", &tipo);
	        getchar();
            valida3 = validaTipo(tipo);
            while (valida3 == 1){
                printf("|/////            Tipo (Salario - S/Extras - E): ");
                printf("\n Tipo Invalido! Tente novamente!\n");
                scanf("%c", &tipo);
                getchar();
                valida3 = validaTipo(tipo);

            }   
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n",nome);
    printf("Valor: %f\n", valor);
    printf("Tipo: %c\n", tipo);
            delay(1);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    
}

void consultaEntradas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar();
        printf("|/////            Informe o Valor:                                         /////|\n");
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

        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar(); 
        printf("|/////            Informe o Valor:                                         /////|\n");
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
        printf("|/////            Informe o Responsavel(nome completo):                    /////|\n");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
            getchar();
        printf("|/////            Informe o Valor:                                         /////|\n");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}

