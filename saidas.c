//Modulo saidas
//Subprograma
#include <stdio.h>
#include "passaTempo.h"
#include "validacoes.h"
#include "saidas.h"

void cadastroSaidas(void){
    char nome[51];
    int valor;
    char tipo[2];
    char dest[51];
    int valida;
    int valida2;
    int valida3;
    int valida4;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	        getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Responsavel(Nome Completo): ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	            getchar();
            }    
        printf("|/////            Valor(apenas numeros): ");
        scanf("%d", &valor);
            valida2 = validaValor(valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
                scanf("%d", &valor);
             }
        printf("|/////                                                                     /////|\n");
        printf("|/////            Tipo (Despesas Extras - DE/ Despesas Fixas - DF): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
	        getchar();
             valida3 = validaTipo(tipo);
            while (valida3 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Tipo (Despesas Extras - DE/ Despesas Fixas - DF): ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
                getchar();
            }     
        printf("|/////                                                                     /////|\n");
        printf("|/////            Destino: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", dest);
	        getchar();
            valida4 = validarNomes(dest);
            while (valida4 == 1){
                printf("\n Destino Invalido! Tente novamente!\n");
                printf("|/////            Destino: ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", dest);
	            getchar();
            }    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %d\n", valor);
    printf("Tipo: %s\n", tipo);
    printf("Destino: %s\n", dest);
            delay(1);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
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
