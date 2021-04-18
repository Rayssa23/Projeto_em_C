//Modulo saidas
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
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
			    case '3' : 	excluiSaidas();
						    break;
			    case '4' : 	atualizaSaidas();
						    break;
		    }
	    } while (opcao != '0');
}

////Gravar Arquivo
void gravaSaidas(Saida*);

//// CADASTRO
void cadastrarSaida(void){
    Saida* sai; 

    //Ler dados de Entradas com a função telaCadastroSaidas()
        sai = telaCadastroSaidas();

    /// Gravar registro do arquivo Saidas
       gravarSaidas(sai);

    //Liberando o esáço da memória
        free(sai);
}

//// PESQUISA
void consultaSaidas(void){
    Saida* sai;
    char* tipo;

    //Exibir a tela
    tipo = telaConsultaSaidas();

    //Pesquisar no arquivo
    sai = pesquisaSaidas(tipo);

    // Exibir resultado da pesquisa de entradas
    exibirSaida(sai);
    free(tipo);
    free(sai);
}

//// EXCLUSÃO
    void excluiSaida(void){
        Saida* sai;
        char *nome;

        nome = telaExcluiSaidas();
        sai = (Saida*) malloc(sizeof(Saida));
        sai = pesquisaSaidas(nome);
            if (sai == NULL){
                printf("\n\nSaida não encontrada!!!\n\n");
            }else{
                sai->status = False;
                regravarSaidas(sai);
                free(sai);
            }
        free(sai);
}

//// ATUALIZAÇÃO
    void atualizaSaida(void) {
        Saida* sai;
        char* nome;
	// exibe a tela 
	    nome = telaAtualizarSaidas();
  // pesquisa o aluno no arquivo
        sai = pesquisaSaidas(nome);

        if (sai == NULL) {
            printf("\n\nSaida não encontrado!\n\n");
        } else {
            sai = telaCadastroSaidas;
            strcpy(sai->nome, nome);
            regravarSaidas(sai);
            free(sai);
  }
        free(nome);
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
            }while(!validaValor(sai->valor));
        do{
            printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%c", &sai->tipo);
	            getchar();
            }while (!validaTipo(sai->tipo));
        do{
            printf("|/////            Destino: ");
                scanf(" %50[^\n]", sai->dest);
	            getchar();
           }while (validarNomes(sai->dest));
           sai->status = True; 
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return sai;
        delay(1);

}

char* telaConsultaSaidas(void){
    char *tipo;
    tipo = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
        scanf("%c", tipo);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
        return tipo;
}

char* telaExcluiSaidas(void){
    char* nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
        return nome;
}

char* telaAtualizaSaidas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
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

    Saida* pesquisaSaidas(char* tipo) {
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
            if (strcmp(sai->tipo, tipo) == 0) {
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

  if ((sai == NULL) && (sai->status == False)) {
    printf("\n= = = Saida Inexistente = = =\n");
  } else {
    printf("\n= = = Saida Cadastrada = = =\n");
    printf("Nome: %s\n", sai->nome);
    printf("Valor: %f\n", sai->valor);
    printf("Tipo (Salario - 1 / Extras - 2): %c\n", sai->tipo);
    printf("Destino: %s\n", sai->dest);
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
		if (strcmp(saiLido->nome, sai->nome) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Saida), SEEK_CUR);
        	fwrite(sai, sizeof(Saida), 1, fp);
			//break;
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
        return resp;
        getchar();
        delay(1);
}