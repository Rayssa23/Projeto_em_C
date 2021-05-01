//Modulo saidas
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "validacoes.h"
#include "saidas.h"

typedef struct saida Saida;

void menuSaidas(void) {
	char opcao ;
	    do {
		    opcao = moduloSaidas();
		    switch (opcao) {
			    case '1' : 	cadastroSaidas();
						    break;
			    case '2' : 	consultaSaidas();
						    break;
			    case '3' : 	excluiSaida();
						    break;
			    case '4' : 	atualizaSaida();
						    break;
		    }
	    } while (opcao != '0');
}


//// CADASTRO
void cadastroSaidas(void){
    Saida* sai; 
    sai = telaCadastroSaidas();
    gravaSaidas(sai);
    free(sai);
}

//// PESQUISA
    void consultaSaidas(void){
    Saida* sai;
    int tipo;
    tipo = telaConsultaSaidas();
    sai = pesquisaSaidas(tipo);
    exibirSaida(sai);
    free(sai);
}

//// EXCLUSÃO
    void excluiSaida(void){
        Saida* sai;
        int tipo;

        tipo = telaExcluiSaidas();
        sai = (Saida*) malloc(sizeof(Saida));
        sai = pesquisaSaidas(tipo);
        if (sai == NULL){
            printf("\n\nSaida não encontrada!!!\n\n");
        }else{
                sai->status = False;
                regravarSaidas(sai);
                free(sai);
            }

}

//// ATUALIZAÇÃO
    void atualizaSaida(void) {
        Saida* sai;
        int tipo;

	    tipo = telaAtualizaSaidas();
        sai = pesquisaSaidas(tipo);

        if (sai == NULL) {
            printf("\n\nSaida não encontrada!\n\n");
        } else {
            sai = telaAtualizandoSaidas(); 
            if(sai->tipo == tipo){
            regravarSaidas(sai);
            free(sai);
            }
        }
    }


Saida* telaCadastroSaidas(void){
    Saida* sai;
    sai = (Saida*) malloc(sizeof(Saida));

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        do{
            printf("|/////            Responsavel(Nome completo): ");
            scanf(" %50[^\n]", sai->nome);
	            getchar();
            }while (!validarNomes(sai->nome));
        do{    
            printf("|/////            Valor(apenas numeros): ");
                scanf("%f", &sai->valor);
            }while(!validaValor(&sai->valor));
        do{
            printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%d", &sai->tipo);
            }while (!validaTipo(sai->tipo));
        do{
            printf("|/////            Destino: ");
                scanf(" %50[^\n]", sai->dest);
	            getchar();
           }while (!validarNomes(sai->dest));
           sai->status = True; 
       printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
            delay(1);
            return sai;
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

}

int telaConsultaSaidas(void){
    int tipo;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
        scanf("%d", &tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return tipo;
        delay(1);
}

int telaExcluiSaidas(void){
    int tipo;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
            scanf("%d", &tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return tipo;
        delay(1);
}

int telaAtualizaSaidas(void){
    int tipo;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
            scanf("%d", &tipo);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
        return tipo;
}

Saida* telaAtualizandoSaidas(void){
    Saida* sai;
    sai = (Saida*) malloc(sizeof(Saida));
        char op;         
        printf("\n________________________________________________________________________________");
        printf("                               Responsavel - r    ");
        printf("                               Valor - v          ");
        printf("                               Tipo - t           ");
        printf("                               Destino - d        ");
        printf(" _________________________________________________________________________________");
        printf("                             O que deseja ATUALIZAR?   ");
            scanf("%c", &op);
	        getchar();
        printf(" _________________________________________________________________________________");
        return op;
        op = tolower(op);
	    do {
		    switch (op) {
			    case 'r' : do{
                                printf("|/////            Responsavel(Nome completo): ");
                                    scanf(" %50[^\n]", sai->nome);
	                                getchar();
                            }while (!validarNomes(sai->nome));
						        break;

			    case 'v' : do{    
                                printf("|/////            Valor(apenas numeros): ");
                                    scanf("%f", &sai->valor);
                            }while(!validaValor(&sai->valor));
						        break;
			    case 'd' : do{
                                printf("|/////            Destino: ");
                                    scanf(" %50[^\n]", sai->dest);
	                                getchar();
                            }while (!validarNomes(sai->dest));
						        break;
			    case 't' : do{
                                printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                                    scanf("%d", &sai->tipo);
                                }while (!validaTipo(sai->tipo));
						            break;
		                        }
	    } while ( op != 's');
           sai->status = True; 
       printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
            delay(1);
            return sai;
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

}

////////////////////////////////////////////////////////////
//////////Gravando Arquivo SAIDAS //////////////////////////
////////////////////////////////////////////////////////////
    void gravaSaidas(Saida* sai) {
        FILE* fp;
        fp = fopen("saidas.dat", "ab");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
        fwrite(sai, sizeof(Saida), 1, fp);
        fclose(fp);
    }

////////////////////////////////////////////////////////////
//////////Consultar Arquivo SAIDAS   ///////////////////////
////////////////////////////////////////////////////////////

    Saida* pesquisaSaidas(int tipo) {
        FILE* fp;
        Saida* sai;

        sai = (Saida*) malloc(sizeof(Saida));
        fp = fopen("saidas.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
         while(!feof(fp)) {
            fread(sai, sizeof(Saida), 1, fp);
            if ((sai->tipo == tipo) ) {
                fclose(fp);
                return sai;
            }
        }
        fclose(fp);
        return NULL;    
    }


////////////////////////////////////////////////////////////
//////////Exibir Arquivo SAIDAS      ///////////////////////
////////////////////////////////////////////////////////////

void exibirSaida(Saida* sai) {

  if ((sai == NULL)) {
    printf("\n= = = Saida Inexistente = = =\n");
  } else {
    printf("\n= = = Saida Cadastrada = = =\n");
    printf("Nome: %s\n", sai->nome);
    printf("Valor: %5.2f\n", sai->valor);
    printf("Tipo (Despesas Extras - 1 / Despesas Fixas - 2): %d\n", sai->tipo);
    printf("Destino: %s\n", sai->dest);
    delay(1);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}
   

////////////////////////////////////////////////////////////
//////////Regravar Arquivo SAIDAS    ///////////////////////
////////////////////////////////////////////////////////////

void regravarSaidas(Saida* sai) {
    int achou;
	FILE* fp;
	Saida* saiLido;

	saiLido = (Saida*) malloc(sizeof(Saida));
	fp = fopen("saidas.dat", "r+b");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
	}
	achou = False;
	while(fread(saiLido, sizeof(Saida), 1, fp) && !achou) {
		if ((saiLido->tipo == sai->tipo)) {
			achou = True;
			fseek(fp, -1*sizeof(Saida), SEEK_CUR);
        	fwrite(sai, sizeof(Saida), 1, fp);
		}
	}
	fclose(fp);
	free(saiLido);

}



char moduloSaidas(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
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
        printf("\n|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return resp;
        delay(1);
}