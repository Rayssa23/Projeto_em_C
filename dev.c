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

///
///Assinatura das funções
///

void menuSobre(void);
void telaInicial(void);
char menuPrincipal(void);
    //Módulo de Entradas
char moduloEntradas(void);
void cadastroEntradas(void);
void consultaEntradas(void);
void excluiEntradas(void);
void atualizaEntradas(void);
    //Módulo de Saídas
char moduloSaidas(void);
void cadastroSaidas(void);
void consultaSaidas(void);
void excluiSaidas(void);
void atualizaSaidas(void);
    //Módulo Contribuinte
char moduloContribuinte(void);
void cadastroContribuinte(void);
void consultaContribuinte(void);
void excluiContribuinte(void);
void atualizaContribuinte(void);
    //Módulo Dpendente
char moduloDependente(void);
void cadastroDependente(void);
void consultaDependente(void);
void excluiDependente(void);
void atualizaDependente(void);
    //Módulo Relatório
char moduloRelatorio(void);
    //Módulo de Informações do Sistema
char infoSistema(void);

///
///Programa Principal
///

int main(void) {
        char opcao;

    menuSobre();
    telaInicial();
    opcao = menuPrincipal();

    opcao = moduloEntradas();
    cadastroEntradas();
    consultaEntradas();
    excluiEntradas();
    atualizaEntradas();

    opcao = moduloSaidas();
    cadastroSaidas();
    consultaSaidas();
    excluiSaidas();
    atualizaSaidas();

    opcao = moduloContribuinte();
    cadastroContribuinte();
    consultaContribuinte();
    excluiContribuinte();
    atualizaContribuinte();

    opcao = moduloDependente();
    cadastroDependente();
    consultaDependente();
    excluiDependente();
    atualizaDependente();

    opcao = moduloRelatorio();

    opcao = infoSistema();
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
    printf("|               = = = = =  MoneyDomestic  = = = = =                        |\n");
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
        getchar();
        return resp;
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
        getchar();
        return resp;
}
void cadastroEntradas(void){
    char nome[51];
    int valor[12];
    char tipo[20];
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	        getchar();
        printf("|/////            Valor(apenas numeros): ");
        scanf("%[0-9]", valor);
        printf("|/////                                                                     /////|\n");
        getchar();            
        printf("|/////            Tipo (Salario/Extras): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
        printf("|/////                                                                     /////|\n");
	        getchar();    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %d\n", valor);
    printf("Tipo: %s\n", tipo);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar(); 
    
}

void consultaEntradas(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Responsavel                                          /////|\n");
        printf("|/////            2 - Valor                                                /////|\n");
        printf("|/////            3 - Tipo (Salario/Extras)                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao de consulta: ");
        scanf("%c", &resp);
        printf("|/////                                                                     /////|\n");
            getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void excluiEntradas(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Responsavel                                          /////|\n");
        printf("|/////            2 - Valor                                                /////|\n");
        printf("|/////            3 - Tipo (Salario/Extras)                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha sua opcao de exclusao: ");
        scanf("%c", &resp);
        printf("|/////                                                                     /////|\n");
            getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void atualizaEntradas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Aualizar Entradas                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|/////            3 - Tipo (Salario/Extras)                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha o que deseja Atualizar:                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



char moduloSaidas(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("..........................   MoneyDomestic  .....................................\n");
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
        getchar();
        return resp;
}
void cadastroSaidas(void){
    char nome[51];
    int valor[12];
    char tipo[20];
    char dest[51];

    system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
        printf("|/////                                                                     /////|\n");
	        getchar();
        printf("|/////            Valor(apenas numeros): ");
        scanf("%[0-9]", valor);
        printf("|/////                                                                     /////|\n");
        getchar();            
        printf("|/////            Tipo (Despesas Extras/ Despesas Fixas): ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", tipo);
        printf("|/////                                                                     /////|\n");
	        getchar();
        printf("|/////              Destino: ");
        scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", dest);
        printf("|/////                                                                     /////|\n");
	        getchar();    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("Responsavel: %s\n", nome);
    printf("Valor: %d\n", valor);
    printf("Tipo: %s\n", tipo);
    printf("Destino: %s\n", dest);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();  
}

void consultaSaidas(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Responsavel                                          /////|\n");
        printf("|/////            2 - Valor                                                /////|\n");
        printf("|/////            3 - Tipo(Despesas Extras/Despesas Fixas)                 /////|\n");
        printf("|/////            4 - Destino                                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao de consulta: ");
        scanf("%c", &resp);
        printf("|/////                                                                     /////|\n");
            getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void excluiSaidas(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Responsavel                                          /////|\n");
        printf("|/////            2 - Valor                                                /////|\n");
        printf("|/////            3 - Tipo(Despesas Extras/Despesas Fixas)                 /////|\n");
        printf("|/////            4 - Destino                                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao de exclusao: ");
        scanf("%c", &resp);
        printf("|/////                                                                     /////|\n");
            getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void atualizaSaidas(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Aualizar Saidas                             /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Responsavel                                          /////|\n");
        printf("|/////            2 - Valor                                                /////|\n");
        printf("|/////            3 - Tipo(Despesas Extras/Despesas Fixas)                 /////|\n");
        printf("|/////            4 - Destino                                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha o que deseja atualizar: ");
        scanf("%c", &resp);
        printf("|/////                                                                     /////|\n");
            getchar(); 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

char moduloContribuinte(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("..........................   MoneyDomestic  .....................................\n");
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
        getchar();
        return resp;
}
void cadastroContribuinte(void){
    char nome[51];
    char profissao[51];
    int valor[12];
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
    printf("Valor: %d\n", valor);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar(); 
}

void consultaContribuinte(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Contribuintes                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Profissao                                            /////|\n");
        printf("|/////            3 - Valor                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void excluiContribuinte(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Profissao                                            /////|\n");
        printf("|/////            3 - Valor                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha sua opcao de exclusao: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void atualizaContribuinte(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Aualizar Contribuinte                       /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Profissao                                            /////|\n");
        printf("|/////            3 - Valor                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha o que deseja Atualizar: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}


char moduloDependente(void){
    char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("..........................   MoneyDomestic  .....................................\n");
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
        getchar();
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
    printf("Idade: %d\n", idade);
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
            getchar();
}

void consultaDependente(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Idade                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("|/////            Escolha sua opcao de consulta: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void excluiDependente(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Idade                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha sua opcao de exclusao: ");
       scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
}

void atualizaDependente(void){
    char resp;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Aualizar Dependente                         /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Nome                                                 /////|\n");
        printf("|/////            2 - Idade                                                /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Escolha o que deseja Atualizar: ");
        scanf("%c", &resp);
        getchar(); 
        printf("|/////                                                                     /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
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
        getchar();
        return resp;
}

char infoSistema(void){
    system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                Modulo Informacoes sobre o Sistema                   /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///// MoneyDomestic um software projetado para facilitar a gerencia e     /////|\n");                                                   
        printf("|///// o fluxo de uma residencia.                                          /////|\n");
        printf("|///// Desenvolvido por @AlmeidaRayssa                                     /////|\n");
        printf("|///// Jan 2021                                                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	    getchar();
}

// Para utilizar nos cadastros
//printf("///           Matrícula (apenas números): ");
	//scanf("%[0-9]", matr);
	//getchar();
	//printf("///           Nome completo: ");
	//scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
	//getchar();
	//printf("///           E-mail: ");
	//scanf("%[a-z@.]", email);
	//getchar();
	//printf("///           Data de Nascimento (dd/mm/aaaa):  ");
	//scanf("%[0-9/]", nasc);
	//getchar();
	//printf("///           Celular  (apenas números): ");
	//scanf("%[0-9]", celular);
	//getchar();
	//printf("///                                                                       ///\n");