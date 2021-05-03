#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "relatorios.h"
#include "validacoes.h"

// módulo Relatório

typedef struct relatorio Relatorio;

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);

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
			case '1' : receitasPorNome();
				break;
			case '2' : receitasMensais();
				break;
                        case '3' : receitasAnuais();
				break;
                        case '4' : despesasMensais();
				break;
                        case '5' : despesasAnuais();
				break;
                        case '6' : contribuintesPorProfissao();
				break;
                        case '7' : dependentesPorIdade();
				break;
	        } 
        }while (opcao != '0');
}

void receitasPorNome(void){
        Relatorio* relat;
        char* nome;
        
        nome = telaReceitasPorNome();
        relat = buscaReceitas(nome);
        relatReceitasPorNome(nome);
        free(nome);
}

void receitasMensais(void){
        Relatorio* relat;
        char* mes;

        mes = telaReceitasMensais();
        relat = buscaReceitas(mes);
        relatReceitasMensais(mes);
        free(mes);
}

void receitasAnuais(void){
        Relatorio* relat;
        char* ano;

        ano = telaReceitasAnuais();
        relat = buscaReceitas(ano);
        relatReceitasAnuais(ano);
        free(ano);
}

void despesasMensais(void){
        Relatorio* relat;
        char* mes;

        mes = telaDespesasMensais();
        relat = buscaReceitas(mes);
        relatDespesasMensais(mes);
        free(mes);
}

void despesasAnuais(void){
        Relatorio* relat;
        char* ano;

        ano = telaDespesasAnuais();
        relat = buscaReceitas(ano);
        relatDespesasAnuais(ano);
        free(ano);
}

void contribuintesPorProfissao(void){
        Relatorio* relat;
        char* profissao;

        profissao = telaContribuintesProfissao();
        relat = buscaReceitas(profissao);
        relatContribuintesProfissao(profissao);
        free(profissao);
}

void dependentesPorIdade(void){
        char* idade;

        idade = telaDependentesIdade();
        relatDependentesIdade(idade);
        free(idade);
}


char* telaReceitasPorNome(void){
        char* nome;
        nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return nome;
}

char* telaReceitasMensais(void){
        char* mes;
        mes = (char*) malloc(10*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Mes(mm): ");
        scanf(" %c", mes);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return mes;
}

char* telaReceitasAnuais(void){
        char* ano;
        ano = (char*) malloc(4*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}

char* telaDespesasMensais(void){
        char* mes;
        mes = (char*) malloc(3*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Mes(mm): ");
        scanf(" %c", mes);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return mes;
}

char* telaDespesasAnuais(void){
        char* ano;
        ano = (char*) malloc(4*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}

char* telaContribuintesProfissao(void){
        char* profissao;
        profissao = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe a Profissao: ");
        scanf(" %50[^\n]", profissao);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return profissao;
}

char* telaDependentesIdade(void){
        char* idade;
        idade = (char*) malloc(3*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe a Idade: ");
        scanf("%c", idade);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return idade;
}

void relatReceitasPorNome(char* nome){

        printf("|=================================================================================|");  
        printf("|                               Receitas Por Nome                                 |");
        printf("|=================================================================================|");
        printf("|> Responsavel:                                   Fulano Sicrano Cansado          |");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 500,60          |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 2000,00         |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 2.500,60        |");
        printf("|=================================================================================|");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasMensais(char* mes){
/// Fazer um swich case para o mes
        printf("|=================================================================================|");  
        printf("|                               Receitas Por Mes                                  |");
        printf("|=================================================================================|");
        printf("|> Mes:                                                          Maio             |");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 500,60          |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 2000,00         |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 2.500,60        |");
        printf("|=================================================================================|");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasAnuais(char* ano){
        printf("|=================================================================================|");  
        printf("|                               Receitas Por Ano                                  |");
        printf("|=================================================================================|");
        printf("|> Ano:                                                          19°°             |");
        printf("|=================================================================================|");
        printf("|> Receitas variaveis:                                         R$ 500,60          |");
        printf("|=================================================================================|");
        printf("|> Receitas fixas:                                             R$ 2000,00         |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 2.500,60        |");
        printf("|=================================================================================|");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasMensais(char* mes){
/// Fazer um swich case para o mes
        printf("|=================================================================================|");  
        printf("|                               Despesas Por Mes                                  |");
        printf("|=================================================================================|");
        printf("|> Mes:                                                          Maio             |");
        printf("|=================================================================================|");
        printf("|> Despesas variaveis:                                         R$ 520,75          |");
        printf("|=================================================================================|");
        printf("|> Despesas fixas:                                             R$ 355,25          |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 876,00          |");
        printf("|=================================================================================|");
}

void relatDespesasAnuais(char* ano){
         
        printf("|=================================================================================|");  
        printf("|                               Despesas Por Ano                                  |");
        printf("|=================================================================================|");
        printf("|> Ano:                                                          19°°             |");
        printf("|=================================================================================|");
        printf("|> Despesas variaveis:                                         R$ 520,75          |");
        printf("|=================================================================================|");
        printf("|> Despesas fixas:                                             R$ 355,25          |");
        printf("|=================================================================================|");
        printf("|   >> Subtotal:                                               R$ 876,00          |");
        printf("|=================================================================================|");
}

void relatContribuintesProfissao(char* profissao){

        printf("|=================================================================================|");  
        printf("|                        Contribuintes por Profissao                              |");
        printf("|=================================================================================|");
        printf("|> Profissao:                                               Estudante             |");
        printf("|=================================================================================|");
        printf("|> Receitas:                                         R$ 100,00                    |");
        printf("|=================================================================================|");

}

void relatDependentesIdade(char* idade){

        printf("|=================================================================================|");  
        printf("|                        Dependentes por Idade                                    |");
        printf("|=================================================================================|");
        printf("|> Idade:                                               15                        |");
        printf("|=================================================================================|");
        printf("|> Nome:                                        Fulano Sicrano Adolescente        |");
        printf("|=================================================================================|");

}

        Relatorio* buscaReceitasMes(char* mes) {
                FILE* fp;
                Relatorio* relat;

                relat = (Relatorio*) malloc(sizeof(Relatorio));
                fp = fopen("relatorios.dat", "rb");
                if (fp == NULL) {
                printf("======== ERRO NO ARQUIVO ========= ");
                printf("======= Lamentamos Informar ======= ");
                exit(1);
                }
                while(fread(relat, sizeof(Relatorio), 1, fp)) {
                if (((strcmp(relat->mes, mes) == 0))) {
                        fclose(fp);
                        return relat;
        }
    }
    fclose(fp);
    return NULL;
    } 

char moduloRelatorio(void){
    char resp;
    system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                       Modulo Relatorio                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Receitas por Nome                                    /////|\n");
        printf("|/////            2 - Receitas Mensais                                     /////|\n");
        printf("|/////            3 - Receitas Anuais                                      /////|\n");
        printf("|/////            4 - Despesas Mensais                                     /////|\n");
        printf("|/////            5 - Despesas Anuais                                      /////|\n");
        printf("|/////            6 - Contribuintes Por Profissao                          /////|\n");
        printf("|/////            7 - Dependentes Por Idade                                /////|\n");
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


