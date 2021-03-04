//Módulo Contribuinte
//Subprograma

#include <stdio.h>
#include "passaTempo.h"
void cadastroContribuinte(void){
    char nome[51];
    char profissao[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("///                                                                        /////|\n");        
	    getchar();
        printf("|/////        Profissao: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", profissao);
        printf("///                                                                        /////|\n");        
        getchar();        
        printf("|/////        Valor(apenas numeros): ");
        scanf("%[0-9]", valor);
        printf("///                                                                        /////|\n");        
        getchar();        
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", nome);
    printf("Profissao: %s\n", profissao);
    printf("Valor: %s\n", valor);
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
        //delay(1);        
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
