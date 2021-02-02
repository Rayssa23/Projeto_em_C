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



void menuSobre(void);
void telaInicial(void);
void menuPrincipal(void);
void moduloEntradas(void);
void cadastroEntradas(void);
void consultaEntradas(void);
void excluiEntradas(void);
void atualizaEntradas(void);
void moduloSaidas(void);
void cadastroSaidas(void);
void consultaSaidas(void);
void excluiSaidas(void);
void atualizaSaidas(void);
void moduloInvestimentos(void);
void cadastroInvest(void);
void consultaInvest(void);
void excluiInvest(void);
void atualizaInvest(void);
void moduloContribuinte(void);
void cadastroContribuinte(void);
void consultaContribuinte(void);
void excluiContribuinte(void);
void atualizaContribuinte(void);
void moduloDependente(void);
void cadastroDependente(void);
void consultaDependente(void);
void excluiDependente(void);
void atualizaDependente(void);
void moduloRelatorio(void);
void infoSistema(void);


int main(void) {
    menuSobre();
    telaInicial();
    menuPrincipal();
    moduloEntradas();   
    cadastroEntradas();
    consultaEntradas();
    excluiEntradas();
    atualizaEntradas();
    moduloSaidas();
    cadastroSaidas();
    consultaSaidas();
    excluiSaidas();
    atualizaSaidas();
    moduloInvestimentos();
    cadastroInvest();
    consultaInvest();
    excluiInvest();
    atualizaInvest();
    moduloContribuinte();
    cadastroContribuinte();
    consultaContribuinte();
    excluiContribuinte();
    atualizaContribuinte();
    moduloDependente();
    cadastroDependente();
    consultaDependente();
    excluiDependente();
    atualizaDependente();
    moduloRelatorio();
    infoSistema();
    return 0;

}


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

void menuPrincipal(void){
    printf(".................................................................................\n");
    printf(".................................................................................\n");
    printf("..........................   MoneyDomestic  .....................................\n");
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
    printf("|/////            5 - Modulo Investimentos                                 /////|\n");
    printf("|/////            6 - Modulo Relatorio                                     /////|\n");
    printf("|/////            7 - Informacoes sobre o sistema                          /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void moduloEntradas(void){
    printf(".................................................................................\n");
    printf(".................................................................................\n");
    printf("..........................   MoneyDomestic  .....................................\n");
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
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void cadastroEntradas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel:                                         /////|\n");
    printf("|/////            2 - Valor:                                               /////|\n");
    printf("|/////            3 - Tipo (Salario/Extras):                               /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void consultaEntradas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Consultar Entradas                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|/////            3 - Tipo (Salario/Extras)                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao de consulta:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void excluiEntradas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Excluir Entradas                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|/////            3 - Tipo (Salario/Extras)                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha sua opcao de exclusao:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
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



void moduloSaidas(void){
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
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void cadastroSaidas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel:                                         /////|\n");
    printf("|/////            2 - Valor:                                               /////|\n");
    printf("|/////            3 - Tipo (Despesas Extras/ Despesas Fixas):              /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void consultaSaidas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Consultar Saidas                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao de consulta:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void excluiSaidas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Excluir Saidas                              /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha sua opcao de exclusao:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void atualizaSaidas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Aualizar Saidas                             /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Responsavel                                          /////|\n");
    printf("|/////            2 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha o que deseja Atualizar:                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloContribuinte(void){
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
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void cadastroContribuinte(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome:                                                /////|\n");
    printf("|/////            2 - Profissao:                                           /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void consultaContribuinte(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Consultar Contribuintes                     /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Profissao                                            /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void excluiContribuinte(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Profissao                                            /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha sua opcao de exclusao:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void atualizaContribuinte(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Aualizar Contribuinte                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Profissao                                            /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha o que deseja Atualizar:                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void moduloDependente(void){
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
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void cadastroDependente(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Dependente                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome:                                                /////|\n");
    printf("|/////            2 - Idade:                                               /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void consultaDependente(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Consultar Dependente                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Idade                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao de consulta:                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void excluiDependente(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Idade                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha sua opcao de exclusao:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void atualizaDependente(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Aualizar Dependente                         /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Idade                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha o que deseja Atualizar:                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloInvestimentos(void){
    printf(".................................................................................\n");
    printf(".................................................................................\n");
    printf("..........................   MoneyDomestic  .....................................\n");
    printf(".................................................................................\n");
    printf(".................................................................................\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Investimentos                               /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Cadastrar Investimento                               /////|\n");
    printf("|/////            2 - Consultar Investimento                               /////|\n");
    printf("|/////            3 - Excluir Investimento                                 /////|\n");
    printf("|/////            4 - Atualizar Investimento                               /////|\n");
    printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
   
}

void cadastroInvest(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Objetivo:                                            /////|\n");
    printf("|/////            2 - Prazo:                                               /////|\n");
    printf("|/////            3 - Valor:                                               /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void consultaInvest(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Consultar Investimentos                     /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Objetivo                                             /////|\n");
    printf("|/////            2 - Prazo                                                /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao de consulta:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void excluiInvest(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Objetivo:                                            /////|\n");
    printf("|/////            2 - Prazo:                                               /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha sua opcao de exclusao:                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void atualizaInvest(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Aualizar Investimento                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Objetivo:                                            /////|\n");
    printf("|/////            2 - Prazo:                                               /////|\n");
    printf("|/////            3 - Valor                                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Escolha o que deseja Atualizar:                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");  
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}



void moduloRelatorio(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Relatorio                              /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Semanal                                              /////|\n");
    printf("|/////            2 - Mensal                                               /////|\n");
    printf("|/////            3 - Anual                                                /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void infoSistema(void){
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
