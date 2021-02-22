///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///           Projeto Sistema de Gestão de Finanças Domésticas              ///
///                Developed by  @AlmeidaRayssa - Jan, 2021                 ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

///
///Assinatura das funções
///

void telaInicial(void);
char menuPrincipal(void);
    //Módulo de Entradas
void menuEntradas(void);
char moduloEntradas(void);
void cadastroEntradas(void);
void consultaEntradas(void);
void excluiEntradas(void);
void atualizaEntradas(void);
    //Módulo de Saídas
void menuSaidas(void);
char moduloSaidas(void);
void cadastroSaidas(void);
void consultaSaidas(void);
void excluiSaidas(void);
void atualizaSaidas(void);
    //Módulo Contribuinte
void menuContribuinte(void);
char moduloContribuinte(void);
void cadastroContribuinte(void);
void consultaContribuinte(void);
void excluiContribuinte(void);
void atualizaContribuinte(void);
    //Módulo Dpendente
void menuDependente(void);
char moduloDependente(void);
void cadastroDependente(void);
void consultaDependente(void);
void excluiDependente(void);
void atualizaDependente(void);
char menuSobre(void);

    //Módulo Relatório
void menuRelatorio(void);
char moduloRelatorio(void);
void semanal (void);
void mensal (void);
void anual (void);

    //Módulo de Informações do Sistema
char menuSobre(void);    
void delay (int);
///
///Programa Principal
///

int main(void) {
        char opcao;

    telaInicial();

    do{
        opcao = menuPrincipal();
        switch (opcao){
        case '1':     menuEntradas();
                                break;
        case '2':     menuSaidas();
                                break;
        case '3':     menuContribuinte();
                                break;
        case '4':     menuDependente();
                                break;
        case '5':     menuRelatorio();
                                break;
        case '6':     menuSobre();
                                break;                
        }
        } while (opcao != '0');

    return 0;

}

// Menu e Tela inicial
char menuSobre(void) {
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///             Projeto Sistema de Gestao de Financas Domesticas            ///\n");
    printf("///                Developed by  @AlmeidaRayssa - Jan, 2021                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///          = = = = = Sistema de Financas Domesticas = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///  Sabe-se que gerenciar as financas de uma residencia e trabalhoso,      ///\n");
    printf("///  controlar os gastos e organizar as prioridades, e um desafio para      ///\n");
    printf("///  para algumas familias. Pensando nisso, apresentamos o MoneyDomestic    ///\n");
    printf("///  um software projetado para facilitar essa gerencia e acompanhar o      ///\n");
    printf("///  fluxo financeiro de uma residencia.                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
   printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); 
}
void telaInicial(void) {
    printf("\n");
    printf("----------------------------------------------------------------------------\n");
    printf("|                                                                          |\n");
    printf("|               = = = = =  $MoneyDomestic$  = = = = =                      |\n");
    printf("|                                                                          |\n");
    printf("| Organizacao financeira? Fugir do aperto? Nada de gastos excessivos?      |\n");
    printf("| Conheca o MoneyDomestic, o mais novo software de organizacao financeira. |\n");
    printf("| Se organize com a gente e alcance a tao sonhada                          |\n");
    printf("| BOA VIDA FINANCEIRA                                                      |\n");
    printf("|                                                                          |\n");
    printf("---------------------------------------------------------------------------|\n");
    printf("\n");
  printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

//Módulos e telas CRUD

char menuPrincipal(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".---------------    Developed for AlmeidaRayssa jan, 2021    -------------------.\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                       Menu Principal                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Modulo Entradas                                      /////|\n");
        printf("|/////            2 - Modulo Saidas                                        /////|\n");
        printf("|/////            3 - Modulo Contribuintes                                 /////|\n");
        printf("|/////            4 - Modulo Dependentes                                   /////|\n");
        printf("|/////            5 - Modulo Relatorio                                     /////|\n");
        printf("|/////            6 - Informacoes sobre o sistema                          /////|\n");
        printf("|/////            0 - Sair                                                 /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
        return resp;
}

void delay(int segundos) {
    int tempo = 500000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo) {
        // não faz nada, apenas gasta tempo
  }
}


char moduloEntradas(void){
     char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Entradas                                    /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Registrar Entradas                                   /////|\n");
        printf("|/////            2 - Consultar Entradas                                   /////|\n");
        printf("|/////            3 - Excluir Entradas                                     /////|\n");
        printf("|/////            4 - Atualizar Entradas                                   /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
}
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

void menuEntradas(void) {
	char opcao;
	    do {
		    opcao = moduloEntradas();
		    switch (opcao) {
			    case '1' : 	cadastroEntradas();
						    break;
			    case '2' : 	consultaEntradas();
						    break;
			    case '3' : 	excluiEntradas();
						    break;
			    case '4' : 	atualizaEntradas();
						    break;
	    	}
	    } while (opcao != '0');
}

char moduloSaidas(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Saidas                                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Registrar Saidas                                     /////|\n");
        printf("|/////            2 - Consultar Saidas                                     /////|\n");
        printf("|/////            3 - Excluir Saidas                                       /////|\n");
        printf("|/////            4 - Atualizar Saidas                                     /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
}
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
        delay(1);
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
        delay(1);
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
        delay(1);
}

void menuSaidas(void) {
	char opcao ;
	    do {
		    opcao = moduloSaidas();
		    switch (opcao) {
			    case '1' : 	cadastroSaidas();
						    break;
			    case '2' : 	consultaSaidas();
						    break;
			    case '3' : 	excluiSaidas();
						    break;
			    case '4' : 	atualizaSaidas();
						    break;
		    }
	    } while (opcao != '0');
}


char moduloContribuinte(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Contribuintes                               /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Cadastrar Contribuinte                               /////|\n");
        printf("|/////            2 - Consultar Contribuintes                              /////|\n");
        printf("|/////            3 - Excluir Contribuinte                                 /////|\n");
        printf("|/////            4 - Atualizar Contribuinte                               /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
}
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

void menuContribuinte(void) {
	char opcao;
	    do {
		    opcao = moduloContribuinte();
		    switch (opcao) {
			    case '1' : 	cadastroContribuinte();
						    break;
			    case '2' : 	consultaContribuinte();
						    break;
			    case '3' : 	excluiContribuinte();
						    break;
			    case '4' : 	atualizaContribuinte();
						    break;
		    }
	    } while (opcao != '0');
}



char moduloDependente(void){
    char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Dependentes                                 /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Cadastrar Dependente                                 /////|\n");
        printf("|/////            2 - Consultar Dependentes                                /////|\n");
        printf("|/////            3 - Excluir Dependente                                   /////|\n");
        printf("|/////            4 - Atualizar Dependente                                 /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
}
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

void menuDependente(void) {
	char opcao;
	    do {
		opcao = moduloDependente();
		    switch (opcao) {
			    case '1' : 	cadastroDependente();
						    break;
			    case '2' : 	consultaDependente();
						    break;
			    case '3' : 	excluiDependente();
						    break;
			    case '4' : 	atualizaDependente();
						    break;
	    	}
	    } while (opcao != '0');
}

void menuRelatorio(void) {
	char opcao;
	    do {
		opcao = moduloRelatorio();
		    switch (opcao) {
			    case '1' : 	semanal();
						    break;
			    case '2' : 	mensal();
						    break;
			    case '3' : 	anual();
						    break;
	        } 
        }while (opcao != '0');
}

char moduloRelatorio(void){
    char resp;
    system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                       Modulo Relatorio                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Semanal                                              /////|\n");
        printf("|/////            2 - Mensal                                               /////|\n");
        printf("|/////            3 - Anual                                                /////|\n");
        printf("|/////            0 - Sair                                                 /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
}
void semanal(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
    printf("                                Em construcao                                      ");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
      printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
}
void mensal (void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
    printf("                                Em construcao                                      ");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
     printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}
void anual (void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
    printf("                                Em construcao                                      ");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
     printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar(); 
}


