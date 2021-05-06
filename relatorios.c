#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "relatorios.h"
#include "validacoes.h"
#include "entradas.h"
#include "saidas.h"
#include "contribuinte.h"
#include "dependente.h"


// módulo Relatório



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
	                } 
                        }while (opcao != '0');
}

void receitasPorNome(void){
        char* nome;

        nome = telaReceitasPorNome();
        relatReceitasPorNome(nome);
        free(nome);
}

void receitasMensais(void){
        char* mes;
        char* ano;
        int tipo;

        mes = telaReceitasMensais();
        ano = telaReceitasAnuais();
        tipo = telaTipo();
        relatReceitasMensais(mes,ano,tipo);
        free(mes);
        free(ano);
}

void receitasAnuais(void){
        char* ano;
        int tipo;

        ano = telaReceitasAnuais();
        tipo = telaTipo();
        relatReceitasAnuais(ano,tipo);
        free(ano);
}

void despesasMensais(void){
        char* mes;
        char* ano;
        int tipo;

        mes = telaDespesasMensais();
        ano = telaDespesasAnuais();
        tipo = telaTipo();
        relatDespesasMensais(mes,ano,tipo);
        free(mes);
        free(ano);
}

void despesasAnuais(void){
        char* ano;
        int tipo;

        ano = telaDespesasAnuais();
        tipo = telaTipo();
        relatDespesasAnuais(ano, tipo);
        free(ano);
}

// TELAS RECEITAS E DESPESAS

char* telaReceitasPorNome(void){
        char* nome;
        nome = (char*) malloc(51*sizeof(char));
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
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
        mes = (char*) malloc(3*sizeof(char));
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
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
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}

char* telaDespesasMensais(void){
        char* mes;
        mes = (char*) malloc(3*sizeof(char));
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Mes(mm): ");
        scanf(" %c", mes);
            getchar();
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return mes;
}

char* telaDespesasAnuais(void){
        char* ano;
        ano = (char*) malloc(4*sizeof(char));
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}

int telaTipo(void){
    int tipo;
        system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%d", &tipo); 
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");    
        delay(1);
        return tipo;
}

/// RELATÓRIOS RECEITAS E DESPESAS
void relatReceitasPorNome(char* nome){
            printf("|=======================================|\n");  
            printf("|         Receitas Por Nome             |\n");
            printf("|=======================================|\n");
            printf("|> Nome:                 %s             |\n",nome);
            printf("|=======================================|\n");
            listaReceitasNome(nome);
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasMensais(char* mes, char* ano, int tipo){
            printf("|=======================================|\n");  
            printf("|         Receitas Por Mes              |\n");
            printf("|=======================================|\n");
            printf("|> Mes:                 %s              |\n",mes);
            printf("|=======================================|\n");
            listaReceitasMes(mes,ano,tipo);
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasAnuais(char* ano, int tipo){
            printf("|=======================================|\n");  
            printf("|         Receitas Por Ano              |\n");
            printf("|=======================================|\n");
            printf("|> Mes:                 %s              |\n",ano);
            printf("|=======================================|\n");
            listaReceitasAno(ano,tipo);
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasMensais(char* mes, char* ano, int tipo){
            printf("|=======================================|\n");  
            printf("|         Despesas Por Mes              |\n");
            printf("|=======================================|\n");
            printf("|> Mes:                 %s              |\n",mes);
            printf("|=======================================|\n");
            listaDespesasMes(mes,ano,tipo);
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasAnuais(char* ano, int tipo){
            printf("|=======================================|\n");  
            printf("|         Despesas Por Ano              |\n");
            printf("|=======================================|\n");
            printf("|> Ano:                 %s              |\n",ano);
            printf("|=======================================|\n");
            listaDespesasAno(ano,tipo);
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}




// LISTAS RECEITAS E DESPESAS
void listaReceitasNome(char* nome) {
    FILE* fp;
    Entrada* ent;
    char nomeEnt[51];
    int tam;
    
    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("entradas.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if (strcmp(ent->nome, nome) == 0) {
            tam = strlen(ent->nome);
            strncpy(nomeEnt, ent->nome, tam);
            for (int i = tam; i < 50; i++) {
                nomeEnt[i] = ' ';
            }
            nomeEnt[50] = '\0';
            if (ent->tipo == 2){
                printf("|> Receitas variaveis: R$ %5.2f         |\n", ent->valor );
                printf("|=======================================|\n");
            }
            else if (ent->tipo == 1){
                printf("|> Receitas fixas: R$ %5.2f             |\n", ent->valor );
                printf("|=======================================|\n");
            }
            
        }
    }
    fclose(fp);
    free(ent);
}

void listaReceitasMes(char* mes, char* ano, int tipo) {
    FILE* fp;
    Entrada* ent;
    
    float sub = 0;
    float valor = 0;
    float variaveis = 0;
    float fixas = 0;

    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("entradas.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if (strcmp(ent->mes, mes) == 0) {
            if((strcmp(ent->ano, ano) == 0) && (ent->tipo == tipo)){
                if ( tipo == 2){
                    variaveis += valor;
                    sub += variaveis;
                    printf("|> Receitas variaveis: R$ %5.2f         |\n", ent->valor );
                    printf("|=======================================|\n");
                }
                else if (tipo == 1){
                    fixas += valor;
                    sub += fixas;
                    printf("|> Receitas fixas: R$ %5.2f             |\n", ent->valor );
                    printf("|=======================================|\n");
                }
                    printf("|   >> Subtotal:           R$ %5.2f     |\n",sub);
                    printf("|=======================================|\n");
                }
            }
        }
    fclose(fp);
    free(ent);
}

void listaReceitasAno(char* ano, int tipo) {
    FILE* fp;
    Entrada* ent;
    
    float sub = 0;
    float valor = 0;
    float variaveis = 0;
    float fixas = 0;

    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("entradas.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if ((strcmp(ent->ano, ano) == 0) && (ent->tipo == tipo)) {
            if (tipo == 2){
                    variaveis += valor;
                    sub += variaveis;
                printf("|> Receitas variaveis: R$ %5.2f         |\n", ent->valor );
                printf("|=======================================|\n");
            }
            else if (tipo == 1){
                    fixas += valor;
                    sub += fixas;
                printf("|> Receitas fixas: R$ %5.2f             |\n", ent->valor );
                printf("|=======================================|\n");
            }
                printf("|   >> Subtotal:           R$ %5.2f     |\n",sub);
                printf("|=======================================|\n");
        }
    }
    fclose(fp);
    free(ent);
}

void listaDespesasMes(char* mes, char* ano, int tipo) {
    FILE* fp;
    Saida* sai;
    
    float sub = 0;
    float valor = 0;
    float variaveis = 0;
    float fixas = 0;

    sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("saidas.dat", "rb");
    while (fread(sai, sizeof(Saida), 1, fp)) {
        if (strcmp(sai->mes, mes) == 0) {
                if((strcmp(sai->ano, ano) == 0) && (sai->tipo == tipo)){
                    if (tipo == 1){
                        variaveis += valor;
                        sub += variaveis;
                        printf("|> Despesas variaveis:       R$ %5.2f   |\n",sai->valorDespesa );
                        printf("|=======================================|\n"); 
                    }
                    else if (tipo == 2){
                        fixas += valor;
                        sub += fixas;
                        printf("|> Despesas fixas:           R$ %5.2f   |\n",sai->valorDespesa );
                        printf("|=======================================|\n"); 
                    }
                        printf("|   >> Subtotal:           R$ %5.2f     |\n",sub);
                        printf("|=======================================|\n");
                }
            }
        }
    fclose(fp);
    free(sai);
}

void listaDespesasAno(char* ano, int tipo) {
    FILE* fp;
    Saida* sai;
    
    float sub = 0;
    float valor = 0;
    float variaveis = 0;
    float fixas = 0;


    sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("saidas.dat", "rb");
    while (fread(sai, sizeof(Entrada), 1, fp)) {
        if ((strcmp(sai->ano, ano) == 0) && (sai->tipo == tipo))  {
            if ( (tipo == 1)){
                    variaveis += valor;
                    sub += variaveis;
                printf("|> Despesas variaveis:       R$ %5.2f   |\n",sai->valorDespesa );
                printf("|=======================================|\n");
            }
            else if (tipo == 2){
                    fixas += valor;
                    sub += fixas;
                printf("|> Despesas fixas:           R$ %5.2f   |\n",sai->valorDespesa );
                printf("|=======================================|\n"); 
            }
               printf("|   >> Subtotal:           R$ %5.2f     |\n",sub);
               printf("|=======================================|\n");
        }
    }
    fclose(fp);
    free(sai);
}







char moduloRelatorio(void){
    char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                       Modulo Relatorio                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Receitas por Nome                                    /////|\n");
        printf("|/////            2 - Receitas Mensais                                     /////|\n");
        printf("|/////            3 - Receitas Anuais                                      /////|\n");
        printf("|/////            4 - Despesas Mensais                                     /////|\n");
        printf("|/////            5 - Despesas Anuais                                      /////|\n");
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
