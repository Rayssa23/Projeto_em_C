#include <stdio.h>
#include "relatorios.h"

// módulo Relatório

void semanal(void){
        printf("|=================================================================================|");  
        printf("|                               Balancete da Semana                               |");
        printf("|=================================================================================|");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 500,60          |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 2000,00         |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 2.500,60        |");
        printf("|=================================================================================|");
        printf("|> Despesas variaveis:                                         R$ 520,75          |");
        printf("|=================================================================================|");
        printf("|> Despesas fixas:                                             R$ 355,25          |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 876,00          |");
        printf("|=================================================================================|");
        printf("|--- Lucro Liquido:                                            R$ 1.624.60         ");
        printf("|=================================================================================|");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}
void mensal (void){
        printf("|=================================================================================|");  
        printf("|                               Balancete do mês                                  |");
        printf("|=================================================================================|");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 12.500,60       |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 10.000,00       |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 22.500,60       |");
        printf("|=================================================================================|");
        printf("|> Despesas variaveis:                                         R$ 5.500,75        |");
        printf("|=================================================================================|");
        printf("|> Despesas fixas:                                             R$ 3.055,25        |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 8.556,00        |");
        printf("|=================================================================================|");
        printf("|--- Lucro Liquido:                                            R$ 13.944,60        ");
        printf("|=================================================================================|");
     printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}
void anual (void){
        printf("|=================================================================================|");  
        printf("|                               Balancete do Ano                                  |");
        printf("|=================================================================================|");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 50.625,80       |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 120.000,00      |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 170.625,80      |");
        printf("|=================================================================================|");
        printf("|> Despesas variaveis:                                         R$ 30.520,75       |");
        printf("|=================================================================================|");
        printf("|> Despesas fixas:                                             R$ 36.663,00       |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 67.183,75       |");
        printf("|=================================================================================|");
        printf("|--- Lucro Liquido:                                            R$ 103.442,05       ");
        printf("|=================================================================================|");
     printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar(); 
}



/////Incremente o módulo Relatórios do seu projeto incluindo alguns relatórios-modelo com dados fictícios. 
//Cada relatório deve estar implementado em uma função em separado. Por exemplo, a função listaAlunosDaTurma() 
//poderia solicitar que o usuário informasse o "codigoTurma", 
//exibindo os campos: "matricula", "nomeCompleto", "curso" e "situacaoMatricula" de cada um dos alunos da turma.
///Como ainda não há dados cadastrados no seu projeto, você pode preencher variáveis com dados fictícios apenas 
//para simular a exibição dos relatórios (que serão implementados posteriormente). Por exemplo, 
//você poderia preencher os dados de UM ALUNO e exibir os mesmos dados em várias linhas seguidas com uma 
//estrutura de repetição.