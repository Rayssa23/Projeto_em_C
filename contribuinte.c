//Módulo Contribuinte
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "validacoes.h"
#include "contribuinte.h"

typedef struct contribuinte Contribuinte;

//Gravar Arquivo
void gravaContribuinte(Contribuinte*);

void menuContribuinte(void) {
	char opcao;
	    do {
		    opcao = moduloContribuinte();
		    switch (opcao) {
			    case '1' : 	cadastroContribuinte();
						    break;
			    case '2' : 	consultaContribuinte();
						    break;
			    case '3' : 	excluiContribuinte();
						    break;
			    case '4' : 	atualizaContribuinte();
						    break;
		    }
	    } while (opcao != '0');
}

//// CADASTRO
void cadastrarContribuinte(void){
    Contribuinte* cont; 

    //Ler dados de Entradas com a função telaCadastroSaidas()
        cont = telaCadastroContribuinte();

    /// Gravar registro do arquivo Saidas
       gravarContribuine(cont);

    //Liberando o esáço da memória
        free(cont);
}

//// PESQUISA
void consultaContribuinte(void){
    Contribuinte* cont;
    char* nome;

    //Exibir a tela
    nome = telaConsultaContribuinte();

    //Pesquisar no arquivo
    cont = pesquisaContribuinte(nome);

    // Exibir resultado da pesquisa de entradas
    exibirSaida(nome);
    free(nome);
    free(cont);
}

//// EXCLUSÃO
    void excluiContribuinte(void){
        Contribuinte* cont;
        char *nome;

        nome = telaExcluiContribuinte();
        cont = (Contribuinte*) malloc(sizeof(Contribuinte));
        cont = pesquisaSaidas(nome);
            if (cont == NULL){
                printf("\n\nContribuinte não encontrado!!!\n\n");
            }else{
                cont->status = False;
                regravarContribuinte(cont);
                free(cont);
            }
        free(cont);
}

//// ATUALIZAÇÃO
    void atualizaSaida(void) {
        Contribuinte* cont;
        char* nome;
	// exibe a tela 
	    nome = telaAtualizarContribuinte();
  // pesquisa o aluno no arquivo
        cont = pesquisaContribuinte(nome);

        if (cont == NULL) {
            printf("\n\nAluno não encontrado!\n\n");
        } else {
            cont = telaCadastroContribuinte;
            strcpy(cont->nome, nome);
            regravarContribuinte(cont);
            free(cont);
  }
        free(nome);
}


Contribuinte* telaCadastroContribuinte(void){
    Contribuinte* cont;
    cont = (Contribuinte*) malloc(sizeof(Contribuinte));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        do{
            printf("|/////            Nome (Nome completo): ");
            scanf(" %50[^\n]", cont->nome);
	            getchar();
            }while (!validarNomes(cont->nome));
        do{    
            printf("|/////            Valor(apenas numeros): ");
                scanf("%f", &cont->valor);
            }while(!validaValor(cont->valor));
        do{
            printf("|/////            Profissao: ");
                scanf(" %50[^\n]", cont->profissao);
	            getchar();
           }while (validarNomes(cont->profissao));
             cont->status = True;
        printf("///                                                                        /////|\n");        
        getchar();      
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return cont;
        delay(1);
}

char* telaConsultaContribuinte(void){
    char *nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Contribuinte                      /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);        
	    getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
        delay(1);        
}

char* telaExcluiContribuinte(void){
    char* nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Conribuinte                         /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
        return nome;
}

char* telaAtualizaContribuinte(void){
   char* nome;
    nome = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Contribuinte                        /////|\n");
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


////////////////////////////////////////////////////////////
//////////Gravando Arquivo CONTRIBUINTE ////////////////////
////////////////////////////////////////////////////////////
void gravarContribuinte(Contribuinte* contr) {
  FILE* fp;
  fp = fopen("contribuinte.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(contr, sizeof(Contribuinte), 1, fp);
  fclose(fp);
}


////////////////////////////////////////////////////////////
//////////Consultar Arquivo CONTRIBUINTE ///////////////////
////////////////////////////////////////////////////////////

    Contribuinte* pesquisaContribuinte(char* nome) {
        FILE* fp;
        Contribuinte* cont;

        cont = (Contribuinte*) malloc(sizeof(Contribuinte));
        fp = fopen("contribuintes.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
         while(!feof(fp)) {
            fread(cont, sizeof(Contribuinte), 1, fp);
            if (strcmp(cont->nome, nome) == 0) {
                fclose(fp);
                return cont;
            }
        }
        fclose(fp);
        return NULL;    
    }



////////////////////////////////////////////////////////////
//////////Exibir Arquivo CONTRIBUINTE  /////////////////////
////////////////////////////////////////////////////////////

void exibirContribuinte(Contribuinte* cont) {

  if ((cont = NULL) && (cont->status == False)) {
    printf("\n= = = Contribuinte Inexistente = = =\n");
  } else {
    printf("\n= = = CONTRIBUINTE Cadastrado = = =\n");
    printf("Nome: %s\n", cont->nome);
    printf("Destino: %s\n", cont->profissao);
    printf("Valor: %f\n", cont->valor);

  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo CONTRIBUINTE ////////////////////
////////////////////////////////////////////////////////////

void regravarContribuinte(Contribuinte* cont) {
    int achou;
	FILE* fp;
	Contribuinte* contLido;

	contLido = (Contribuinte*) malloc(sizeof(Contribuinte));
	fp = fopen("contribuintes.dat", "r+b");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
	}
	achou = False;
	while(fread(contLido, sizeof(Contribuinte), 1, fp) && !achou) {
		if (strcmp(contLido->nome, cont->nome) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Contribuinte), SEEK_CUR);
        	fwrite(cont, sizeof(Contribuinte), 1, fp);
		}
	}
	fclose(fp);
	free(contLido);

}

char moduloContribuinte(void){
        char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Contribuintes                               /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Cadastrar Contribuinte                               /////|\n");
        printf("|/////            2 - Consultar Contribuintes                              /////|\n");
        printf("|/////            3 - Excluir Contribuinte                                 /////|\n");
        printf("|/////            4 - Atualizar Contribuinte                               /////|\n");
        printf("|/////            0 - Voltar ao menu Principal                             /////|\n");
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

