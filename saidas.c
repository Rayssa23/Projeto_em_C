//Modulo saidas
//Subprograma
#include <stdio.h>
#include "validacoes.h"
#include "saidas.h"

void cadastroSaidas(void){
    char nome[51];
    float valor;
    char tipo;
    char dest[51];
    int valida;
    int valida2;
    int valida3;
    int valida4;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf("%s", nome);
	        getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf("%s", nome);
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
                valida2 = validaValor(valor);
             }
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
        scanf("%c", &tipo);
	        getchar();
             valida3 = validaTipo(tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%c", &tipo);
                getchar();
                valida3 = validaTipo(tipo);
            }     
        printf("|/////                                                                     /////|\n");
        printf("|/////            Destino: ");
        scanf("%s", dest);
	        getchar();
            valida4 = validarNomes(dest);
            while (valida4 == 1){
                printf("\n Destino Invalido! Tente novamente!\n");
                printf("\n|/////            Destino: ");
                scanf("%s", dest);
	            getchar();
                valida4 = validarNomes(dest);
            }    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %f\n", valor);
    printf("Tipo: %c\n", tipo);
    printf("Destino: %s\n", dest);
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

void excluiSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
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

void atualizaSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
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
