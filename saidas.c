
  //======== MÓDULO SAÍDAS ===========
//=========== Subprograma ===============


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
    char* nome;

    nome = telaConsultaSaidas();
    sai = pesquisaSaidas(nome);
    exibirSaida(sai);
    free(sai);
    free(nome);
}

//// EXCLUSÃO
void excluiSaida(void){
    Saida* sai;
    char* nome;

    nome = telaExcluiSaidas();
    sai = (Saida*) malloc(sizeof(Saida));
    sai = pesquisaSaidas(nome);
        if (sai == NULL){
            printf("\n\nSaida não encontrada!!!\n\n");
        }else{
            exibirSaida(sai);
            sai->status = False;
            regravarSaidas(sai);
            free(sai);
        }    
        free(nome);
        printf("=== Saida Excluida ===");
        delay(1);
}

//// ATUALIZAÇÃO
void atualizaSaida(void) {
    Saida* sai;
    char* nome;

	nome = telaAtualizaSaidas();
    sai = pesquisaSaidas(nome);

    if (sai == NULL) {
        printf("\n\nSaida não encontrada!\n\n");
    } else {
        exibirSaida(sai);
        sai = telaCadastroSaidas();
        strcpy(sai->nome, nome);
        regravarSaidas(sai);
        free(sai);
            
    }
    free(nome);
}


Saida* telaCadastroSaidas(void){
    Saida* sai;
    sai = (Saida*) malloc(sizeof(Saida));

        system("clear");
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
                scanf("%f", &sai->valorDespesa);
            }while(!validaValor(&sai->valorDespesa));
        do{
            printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%d", &sai->tipo);
            }while (!validaTipo(sai->tipo));
        do{
            printf("|/////            Destino: ");
                scanf(" %50[^\n]", sai->dest);
	            getchar();
           }while (!validarNomes(sai->dest));
            printf("|////            Data de Registro (dd/mm/aaaa)  \n");
            printf("|////            Dia(dd): "   );
	            scanf("%[0-9/]", sai->dia);
	            getchar();
            printf("|////            Mes(mm): "   );
	            scanf("%[0-9/]", sai->mes);
	            getchar();
            printf("|////            Ano(aa): "   );
	            scanf("%[0-9/]", sai->ano);
	            getchar();
        
           sai->status = True; 
       printf("|///////////////////////////////////////////////////////////////////////////////|\n");
       printf("\n");
       delay(1);
            return sai;

}

char* telaConsultaSaidas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return nome;
}

char* telaExcluiSaidas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return nome;
}

char* telaAtualizaSaidas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        system("clear");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|///           Nome completo: ");
	        scanf(" %50[^\n]", nome);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        delay(1);
        return nome;
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo SAIDAS //////////////////////////
////////////////////////////////////////////////////////////
    void gravaSaidas(Saida* sai) {
        FILE* fp;
        fp = fopen("saidas.dat", "ab");
        if (fp == NULL) {
            printf("======== ERRO NO ARQUIVO ========= ");
            printf("======= Lamentamos Informar ======= ");
            exit(1);
        } 
        fwrite(sai, sizeof(Saida), 1, fp);
        fclose(fp);
    }
////////////////////////////////////////////////////////////
//////////Consultar Arquivo SAIDAS   ///////////////////////
////////////////////////////////////////////////////////////

    Saida* pesquisaSaidas(char* nome) {
        FILE* fp;
        Saida* sai;

        sai = (Saida*) malloc(sizeof(Saida));
        fp = fopen("saidas.dat", "rb");
        if (fp == NULL) {
            printf("======== ERRO NO ARQUIVO ========= ");
            printf("======= Lamentamos Informar ======= ");
            exit(1);
        }
        while(fread(sai, sizeof(Saida), 1, fp)) {
        if ((strcmp(sai->nome, nome) == 0) && (sai->status == True)) {
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
  } else if ( (sai->status == False)){
    printf("\n= = = Entrada Inexistente = = =\n");
    } 
  else {
    printf("\n= = = Saida Cadastrada = = =\n");
    printf("Nome: %s\n", sai->nome);
    printf("Valor: %5.2f\n", sai->valorDespesa);
    printf("Tipo (Despesas Extras - 1 / Despesas Fixas - 2): %d\n", sai->tipo);
    printf("Destino: %s\n", sai->dest);
    printf("Data de Registro: %s/%s/%s\n", sai->dia,sai->mes,sai->ano);
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
		printf("======== ERRO NO ARQUIVO ========= ");
        printf("======= Lamentamos Informar ======= ");
        exit(1);
	}
	achou = False;
	while(fread(saiLido, sizeof(Saida), 1, fp) && !achou) {
		 if ((strcmp(saiLido->nome, sai->nome) == 0)) {
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