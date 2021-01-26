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
    printf("|/////            2 - Saídas                                               /////|\n");
    printf("|/////            3 - Investimentos                                        /////|\n");
    printf("|/////            4 - Contribuintes                                        /////|\n");
    printf("|/////            5 - Dependentes                                          /////|\n");
    printf("|/////            6 - Relatório                                            /////|\n");
    printf("|/////            7 - Informações sobre o sistema                          /////|\n");
    printf("|/////            0 - Sair                                                 /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("|/////            Escolha sua opção:                                       /////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");
    printf("|///////////////////////////////////////////////////////////////////////////////|\n");

    
   
 


}