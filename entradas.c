//Modulo entradas
//Subprograma


void cadastroEntradas(void){
    char nome[51];
    char valor[12];
    char tipo[20];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	        getchar();
        printf("|/////                                                                     /////|\n");    
        printf("|/////            Valor(apenas numeros): ");
        scanf("%[0-9]", valor);
        getchar(); 
        printf("|/////                                                                     /////|\n");           
        printf("|/////            Tipo (Salario/Extras): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
	        getchar(); 
        printf("|/////                                                                     /////|\n");   
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %s\n", valor);
    printf("Tipo: %s\n", tipo);
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
        printf("|/////                  Modulo Aturalizar Entradas                         /////|\n");
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

