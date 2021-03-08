//Módulo Contribuinte
//Subprograma

#include <stdio.h>
#include "passaTempo.h"
#include "validacoes.h"
void cadastroContribuinte(void){
    char nome[51];
    char profissao[51];
    float valor;
    int valida;
    int valida2;
    int valida3;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	    getchar();
            valida = validarNomes(nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("|/////            Nome Completo: ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	            getchar();
                valida = validarNomes(nome);
            } 
        printf("|/////        Profissao: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
        getchar();
        valida2 = validarNomes(profissao);
            while (valida2 == 1){
                printf("\n Profissao Invalida! Tente novamente!\n");
                printf("|/////        Profissao: ");
                scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
	            getchar();
                valida2 = validarNomes(profissao);
            }        
        printf("|/////        Valor(apenas numeros): ");
        scanf("%f", &valor);        
        valida3 = validaValor(valor);
            while (valida3 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("|/////            Valor (apenas numeros): ");
                scanf("%f", &valor);
                valida3 = validaValor(valor);
             }
        printf("///                                                                        /////|\n");        
        getchar();      
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", nome);
    printf("Profissao: %s\n", profissao);
    printf("Valor: %f\n", valor);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void consultaContribuinte(void){
    char nome[51];
    char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);        
}

void excluiContribuinte(void){
    char nome[51];
    char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluirr Contribuinte                       /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);     
}

void atualizaContribuinte(void){
   char nome[51];
   char profissao[51];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);     
}
