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
#include "entradas.h"
#include "saidas.h"
#include "contribuinte.h"
#include "dependente.h"
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

    //Módulo Relatório
void menuRelatorio(void);
char moduloRelatorio(void);
void semanal (void);
void mensal (void);
void anual (void);

    //Módulo de Informações do Sistema
void menuSobre(void);    
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
void menuSobre(void) {
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
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
        getchar();
        delay(1);
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return resp;
        getchar();
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        return resp;
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        return resp;
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
        return resp;
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
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


