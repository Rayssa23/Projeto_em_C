///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///           Projeto Sistema de Gestão de Finanças Domésticas              ///
///                Developed by  @AlmeidaRayssa - Jan, 2021                 ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>



void menuSobre(void);
void telaInicial();
void menuPrincipal(void);


int main(void) {
    menuSobre();
    telaInicial();
    menuPrincipal();
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
}

void menuPrincipal(){
    printf("---------------------------------------------------------------------------------\n");
    printf("|-------------------------------------------------------------------------------|\n");
    printf("|----------------------------MoneyDomestic--------------------------------------|\n");
    printf("|-------------------------------------------------------------------------------|\n");
    printf("|                 Developed for AlmeidaRayssa jan, 2021                         |\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Menu Principal                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Entradas                                             /////|\n");
    printf("|/////            2 - Saidas                                               /////|\n");
    printf("|/////            3 - Investimentos                                        /////|\n");
    printf("|/////            4 - Contribuintes                                        /////|\n");
    printf("|/////            5 - Dependentes                                          /////|\n");
    printf("|/////            6 - Relatorio                                            /////|\n");
    printf("|/////            7 - Informacoes sobre o sistema                          /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloEntradas(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Entradas                                /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Salario                                              /////|\n");
    printf("|/////            2 - Extras                                               /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloSaidas(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Saidas                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Despesas Fixas                                       /////|\n");
    printf("|/////            2 - Despesas Extras                                      /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloInvestimentos(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Investimentos                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Cuto prazo                                           /////|\n");
    printf("|/////            2 - Medio prazo                                          /////|\n");
    printf("|/////            0 - Longo prazo                                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloContribuintes(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Contribuintes                          /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Profissao/Servico                                    /////|\n");
    printf("|/////            3 - Salario                                              /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloDepedentes(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                       Modulo Dependentes                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|/////            1 - Nome                                                 /////|\n");
    printf("|/////            2 - Idade                                                /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opcao:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}

void moduloRelatorio(){
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
}

void infoSistema(){
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
    printf("|/////                Modulo Informacoes sobre o Sistema                   /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///// MoneyDomestic um software projetado para facilitar a gerencia e     /////|\n");                                                    /////\n");
    printf("|///// o fluxo de uma residencia.                                          /////|\n");
    printf("|///// Desenvolvido por @AlmeidaRayssa                                     /////|\n");
    printf("|///// Jan 2021                                                            /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
}
