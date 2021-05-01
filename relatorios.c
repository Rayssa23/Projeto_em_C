#include <stdlib.h>
#include <stdio.h>
#include "relatorios.h"
#include "validacoes.h"

// módulo Relatório

typedef struct relatorio Relatorio;

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);


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



////////////////////////////////////////////////////////////
//////////Gravando Arquivo RELATÓRIOS //////////////////////
////////////////////////////////////////////////////////////
void gravaRelatorio(Relatorio* relat) {
  FILE* fp;
  fp = fopen("relatorios.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(relat, sizeof(Relatorio), 1, fp);
  fclose(fp);
}

void menuRelatorio(void) {
	char opcao;
	do {
	        opcao = moduloRelatorio();
		switch (opcao) {
			case '1' : semanal();
				break;
			case '2' : mensal();
				break;
			case '3' : anual();
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



