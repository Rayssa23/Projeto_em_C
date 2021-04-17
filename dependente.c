//Módulo Dependente
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include "dependente.h"
#include "validacoes.h"

typedef struct dependente Dependente;

void menuDependente(void) {
	char opcao;
	    do {
		opcao = moduloDependente();
		    switch (opcao) {
			    case '1' : 	cadastroDependente();
						    break;
			    case '2' : 	consultaDependente();
						    break;
			    case '3' : 	excluiDependente();
						    break;
			    case '4' : 	atualizaDependente();
						    break;
	    	}
	    } while (opcao != '0');
}

//// CADASTRO
void cadastrarDependente(void){
    Dependente* depend; 

    //Ler dados de Entradas com a função telaCadastroSaidas()
        depend = telaCadastroDependente();

    /// Gravar registro do arquivo Saidas
       gravarDependente(depend);

    //Liberando o esáço da memória
        free(depend);
}

//// PESQUISA
void consultaDependente(void){
    Dependente* depend;
    char* nome;

    //Exibir a tela
    nome = telaConsultaDependente();

    //Pesquisar no arquivo
    depend = pesquisaSaidas(nome);

    // Exibir resultado da pesquisa de entradas
    exibirDependente(nome);
    free(nome);
    free(depend);
}

//// EXCLUSÃO
    void excluiDependente(void){
        Dependente* depend;
        char *nome;

        nome = telaExcluiDependente();
        depend = (Dependente*) malloc(sizeof(Dependente));
        depend = pesquisaDependente(nome);
            if (depend == NULL){
                printf("\n\nSaída não encontrada!!!\n\n");
            }else{
                depend->status = False;
                regravarDependente(depend);
                free(depend);
            }
        free(depend);
}

//// ATUALIZAÇÃO
    void atualizaDependente(void) {
        Dependente* depend;
        char* nome;
	// exibe a tela 
	    depend = telaAtualizarDependente();
  // pesquisa o aluno no arquivo
        depend = pesquisaDependentes(nome);

        if (depend == NULL) {
            printf("\n\nAluno não encontrado!\n\n");
        } else {
            depend = telaCadastroDependente;
            strcpy(depend->nome, nome);
            regravarDependente(depend);
            free(depend);
  }
        free(nome);
}


//Gravar Arquivo
void gravaDependente(Dependente*);

Dependente* telaCadastroDependente(void){
    Dependente* depend;
    depend = (Dependente*) malloc(sizeof(Dependente));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        do{
            printf("|/////            Nome (Nome completo): ");
            scanf(" %50[^\n]", depend->nome);
	            getchar();
            }while (!validarNomes(depend->nome));

    //Talvez colocar data de nascimento???
        do{ 
            printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &depend->idade);      
            }while(!validaIdade(depend->idade));
                                                 
            depend->status = True;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}


char* telaConsultaDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);                                                 
}

char* telaExcluiDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Dependente                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1); 
}

char* telaAtualizaDependente(void){
    char nome[51];
    int idade;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
        printf("|/////        Idade(apenas numeros): ");
	    scanf("%d", &idade);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}


////////////////////////////////////////////////////////////
//////////Gravando Arquivo DEPENDENTE //////////////////////
////////////////////////////////////////////////////////////
void gravaDependente(Dependente* depend) {
  FILE* fp;
  fp = fopen("dependente.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(depend, sizeof(Dependente), 1, fp);
  fclose(fp);
}





char moduloDependente(void){
    char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Dependentes                                 /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Cadastrar Dependente                                 /////|\n");
        printf("|/////            2 - Consultar Dependentes                                /////|\n");
        printf("|/////            3 - Excluir Dependente                                   /////|\n");
        printf("|/////            4 - Atualizar Dependente                                 /////|\n");
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