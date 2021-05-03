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

        mes = telaReceitasMensais();
        relatReceitasMensais(mes);
        free(mes);
}

void receitasAnuais(void){
        char* ano;

        ano = telaReceitasAnuais();
        relatReceitasAnuais(ano);
        free(ano);
}

void despesasMensais(void){
        char* mes;

        mes = telaDespesasMensais();
        relatDespesasMensais(mes);
        free(mes);
}

void despesasAnuais(void){
        char* ano;

        ano = telaDespesasAnuais();
        relatDespesasAnuais(ano);
        free(ano);
}

// TELAS RECEITAS E DESPESAS

char* telaReceitasPorNome(void){
        char* nome;
        nome = (char*) malloc(51*sizeof(char));
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
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
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

char* telaDespesasAnuais(void){
        char* ano;
        ano = (char*) malloc(4*sizeof(char));
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}


/// RELATÓRIOS RECEITAS E DESPESAS
void relatReceitasPorNome(char* nome){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Nome                                 |");
            printf("|=================================================================================|");
            printf("|> Nome:                                                           %s             |",nome);
            printf("|=================================================================================|");
            listaReceitasNome(nome);
            printf("|> Receitas variaveis:                                                   R$       |");
            printf("|=================================================================================|");
            printf("|> Receitas fixas:                                                       R$       |");
            printf("|=================================================================================|");
            printf("|   >> Subtotal:                                                         R$       |");
            printf("|=================================================================================|");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasMensais(char* mes){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Mes                                  |");
            printf("|=================================================================================|");
            printf("|> Mes:                                                           %s              |",mes);
            printf("|=================================================================================|");
            listaReceitasMes(mes);
            printf("|> Receitas variaveis:                                                   R$       |");
            printf("|=================================================================================|");
            printf("|> Receitas fixas:                                                       R$       |");
            printf("|=================================================================================|");
            printf("|   >> Subtotal:                                                         R$       |");
            printf("|=================================================================================|");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasAnuais(char* ano){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Ano                                  |");
            printf("|=================================================================================|");
            printf("|> Ano:                                                           %s              |",ano);
            printf("|=================================================================================|");
            listaReceitasAno(ano);
            printf("|> Receitas variaveis:                                                   R$       |");
            printf("|=================================================================================|");
            printf("|> Receitas fixas:                                                       R$       |");
            printf("|=================================================================================|");
            printf("|   >> Subtotal:                                                         R$       |");
            printf("|=================================================================================|");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasMensais(char* mes){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Mes                                  |");
            printf("|=================================================================================|");
            printf("|> Mes:                                                           %s              |",mes);
            printf("|=================================================================================|");
            listaDespesasMes(mes);
            printf("|> Despesas variaveis:                                                   R$       |");
            printf("|=================================================================================|");
            printf("|> Despesas fixas:                                                       R$       |");
            printf("|=================================================================================|");
            printf("|   >> Subtotal:                                                         R$       |");
            printf("|=================================================================================|");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasAnuais(char* ano){
            printf("|=================================================================================|");  
            printf("|                               Despesas Por Ano                                  |");
            printf("|=================================================================================|");
            printf("|> Ano:                                                           %s              |",ano);
            printf("|=================================================================================|");
            listaDespesasAno(ano);
            printf("|> Receitas variaveis:                                                   R$       |");
            printf("|=================================================================================|");
            printf("|> Receitas fixas:                                                       R$       |");
            printf("|=================================================================================|");
            printf("|   >> Subtotal:                                                         R$       |");
            printf("|=================================================================================|");
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
            printf("///           ||     %-3d     ||     %-3d     || %-26f ||             ///\n",(ent->tipo == 1),(ent->tipo == 2),ent->subtotal);
        }
    }
    fclose(fp);
    free(ent);
}

void listaReceitasMes(char* mes) {
    FILE* fp;
    Entrada* ent;
    char mesEnt[3];
    int tam;

    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("entradas.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if (strcmp(ent->mes, mes) == 0) {
            tam = strlen(ent->nome);
            strncpy(mesEnt, ent->mes, tam);
            for (int i = tam; i < 2; i++) {
                mesEnt[i] = ' ';
            }
            mesEnt[2] = '\0';
            printf("///           ||     %-3d     ||     %-3d     || %-26f ||             ///\n",(ent->tipo == 1),(ent->tipo == 2),ent->subtotal);
        }
    }
    fclose(fp);
    free(ent);
}

void listaReceitasAno(char* ano) {
    FILE* fp;
    Entrada* ent;
    char anoEnt[5];
    int tam;

    ent = (Entrada*) malloc(sizeof(Entrada));
    fp = fopen("entradas.dat", "rb");
    while (fread(ent, sizeof(Entrada), 1, fp)) {
        if (strcmp(ent->ano, ano) == 0) {
            tam = strlen(ent->ano);
            strncpy(anoEnt, ent->ano, tam);
            for (int i = tam; i < 4; i++) {
                anoEnt[i] = ' ';
            }
            anoEnt[4] = '\0';
            printf("///           ||     %-3d     ||     %-3d     || %-26f ||             ///\n",(ent->tipo == 1),(ent->tipo == 2),ent->subtotal);
        }
    }
    fclose(fp);
    free(ent);
}

void listaDespesasMes(char* mes) {
    FILE* fp;
    Saida* sai;
    char mesSai[3];
    int tam;

    sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("saidas.dat", "rb");
    while (fread(sai, sizeof(Entrada), 1, fp)) {
        if (strcmp(sai->mes, mes) == 0) {
            tam = strlen(sai->nome);
            strncpy(mesSai, sai->mes, tam);
            for (int i = tam; i < 2; i++) {
                mesSai[i] = ' ';
            }
            mesSai[2] = '\0';
            printf("///           ||     %-3d     ||     %-3d     || %-26f ||             ///\n",(sai->tipo == 1),(sai->tipo == 2),sai->despesas);
        }
    }
    fclose(fp);
    free(sai);
}

void listaDespesasAno(char* ano) {
    FILE* fp;
    Saida* sai;
    char anoSai[5];
    int tam;

    sai = (Saida*) malloc(sizeof(Saida));
    fp = fopen("saidas.dat", "rb");
    while (fread(sai, sizeof(Entrada), 1, fp)) {
        if (strcmp(sai->ano, ano) == 0) {
            tam = strlen(sai->ano);
            strncpy(anoSai, sai->ano, tam);
            for (int i = tam; i < 4; i++) {
                anoSai[i] = ' ';
            }
            anoSai[4] = '\0';
            printf("///           ||     %-3d     ||     %-3d     || %-26f ||             ///\n",(sai->tipo == 1),(sai->tipo == 2),sai->despesas);
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
        printf("|/////            6 - Exibir Tudo                                          /////|\n");
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
