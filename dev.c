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
void moduloSaidas(void);
void despesasFixas(void);
void despesasExtras(void);
void moduloInvestimentos(void);
void curtoPrazo(void);
void medioPrazo(void);
void longoPrazo(void);
void moduloContribuintes(void);
void cadastroContrib(void);
void moduloDependentes(void);
void cadastroDependt(void);
void moduloPesquisa(void);
void pesqEstrada(void);
void pesqSaida(void);
void pesqDependt(void);
void pesqContrib(void);
void moduloRelatorio(void);
void infoSistema(void);


int main(void) {
    menuSobre();
    telaInicial();
    menuPrincipal();
    moduloEntradas();
    moduloSaidas();
    despesasFixas();
    despesasExtras();
    moduloInvestimentos();
    curtoPrazo();
    medioPrazo();
    longoPrazo();
    moduloContribuintes();
    cadastroContrib();
    moduloDependentes();
    cadastroDependt();
    moduloPesquisa();
    pesqEstrada();
    pesqSaida();
    pesqDependt();
    pesqContrib();
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
    printf("|/////            1 - Registrar Entradas                                   /////|\n");
    printf("|/////            2 - Registrar Saidas                                     /////|\n");
    printf("|/////            3 - Registrar Investimentos                              /////|\n");
    printf("|/////            4 - Cadastrar Contribuintes                              /////|\n");
    printf("|/////            5 - Cadastrar Dependentes                                /////|\n");
    printf("|/////            6 - Relatorio                                            /////|\n");
    printf("|/////            7 - Pesquisar                                            /////|\n");
    printf("|/////            8 - Informacoes sobre o sistema                          /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}

void moduloEntradas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Tipo (Salário/Extras):                               /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloSaidas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                   Modulo Cadastrar Saidas                           /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Despesas Fixas                                       /////|\n");
    printf("|/////            2 - Despesas Extras                                      /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void despesasFixas(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Despesas Fixas                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Destino:                                             /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void despesasExtras(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Despesas Extras                               /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Destino:                                             /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void moduloInvestimentos(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                  Modulo Cadastrar Investimentos                     /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Curto prazo                                          /////|\n");
    printf("|/////            2 - Medio prazo                                          /////|\n");
    printf("|/////            0 - Longo prazo                                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void curtoPrazo(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Curto Prazo                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Objetivo:                                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void medioPrazo(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Medio Prazo                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Objetivo:                                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void longoPrazo(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Longo Prazo                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Valor:                                               /////|\n");
    printf("|/////            2 - Objetivo:                                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloContribuintes(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Contribuintes                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Cadastro                                             /////|\n");
    printf("|/////            2 - Pesquisa                                             /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void cadastroContrib(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Cadastro Contribuintes                        /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Nome:                                                    /////|\n");
    printf("|/////            Profissao:                                               /////|\n");
    printf("|/////            Valor:                                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void cadastroDependt(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Cadastro Dependentes                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Nome:                                                    /////|\n");
    printf("|/////            Profissao:                                               /////|\n");
    printf("|/////            Valor:                                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void moduloPesquisa(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Pesquisar                              /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Entrada                                              /////|\n");
    printf("|/////            2 - Saida                                                /////|\n");
    printf("|/////            3 - Contribuintes                                        /////|\n");
    printf("|/////            4 - Dependentes                                          /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pesqEntrada(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Pesquisar Entradas                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Valor:                                                   /////|\n");
    printf("|/////            Tipo:                                                    /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pesqSaida(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Pesquisar Saidas                              /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Valor:                                                   /////|\n");
    printf("|/////            Destino:                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}
void pesqDependt(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Pesquisar Dependentes                         /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Nome:                                                    /////|\n");
    printf("|/////            Idade:                                                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
 printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pesqContrib(void){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                     Pesquisar Contribuintes                         /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            Nome:                                                    /////|\n");
    printf("|/////            Profissao:                                               /////|\n");
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
