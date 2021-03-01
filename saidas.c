//Modulo saidas
//Subprograma

void cadastroSaidas(void){
    char nome[51];
    char valor[12];
    char tipo[20];
    char dest[51];

    system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	        getchar();    
        printf("|/////                                                                     /////|\n");
        printf("|/////            Valor(apenas numeros): ");
        scanf("%[0-9]", valor);
	        getchar();    
        printf("|/////                                                                     /////|\n");
        printf("|/////            Tipo (Despesas Extras/ Despesas Fixas): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
	        getchar();    
        printf("|/////                                                                     /////|\n");
        printf("|/////            Destino: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", dest);
	        getchar();    
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %s\n", valor);
    printf("Tipo: %s\n", tipo);
    printf("Destino: %s\n", dest);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}

void consultaSaidas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
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
        //delay(1);
}

void excluiSaidas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
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
        //delay(1);
}

void atualizaSaidas(void){
    char nome[51];
    char valor[12];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
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
        //delay(1);
}
