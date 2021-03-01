//Módulo Dependente
//Subprograma

void cadastroDependente(void){
    char nome[51];
    char idade[2];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%[0-9]", idade);
        printf("|/////                                                                     /////|\n");
        getchar();                                                  
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("Nome: %s\n", nome);
    printf("Idade: %s\n", idade);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
}


void consultaDependente(void){
    char nome[51];
    char idade[2];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%[0-9]", idade);
        printf("|/////                                                                     /////|\n");
        getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);                                                 
}

void excluiDependente(void){
    char nome[51];
    char idade[2];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Dependente                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%[0-9]", idade);
        printf("|/////                                                                     /////|\n");
        getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1); 
}

void atualizaDependente(void){
    char nome[51];
    char idade[2];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%[0-9]", idade);
        printf("|/////                                                                     /////|\n");
        getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1); 
}