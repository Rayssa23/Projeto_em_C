//Módulo Dependente
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dependente.h"
#include "validacoes.h"

typedef struct dependente Dependente;

void menuDependente(void) {
	char opcao;
	    do {
		opcao = moduloDependente();
		    switch (opcao) {
			    case '1' : 	cadastroDeDependente();
						    break;
			    case '2' : 	consultaDeDependente();
						    break;
			    case '3' : 	excluiDependente();
						    break;
			    case '4' : 	atualizaDependente();
						    break;
	    	}
	    } while (opcao != '0');
}

//// CADASTRO
void cadastroDeDependente(void){
    Dependente* depend; 

        depend = telaCadastroDependente();
       gravaDependente(depend);
        free(depend);
}

//// PESQUISA
void consultaDeDependente(void){
    Dependente* depend;
    char* nome;

    //Exibir a tela
    nome = telaConsultaDependente();

    //Pesquisar no arquivo
    depend = pesquisaDependente(nome);

    exibeDependente(depend);
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

	    nome = telaAtualizaDependente();
        depend = pesquisaDependente(nome);

        if (depend == NULL) {
            printf("\n\nSaida não encontrada!\n\n");
        } else {
            depend = telaCadastroDependente();
            strcpy(depend->nome, nome);
            regravarDependente(depend);
            free(depend);
  }
        free(nome);
}



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
        return depend;
        delay(1);
}


char* telaConsultaDependente(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	    getchar();    
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
        delay(1);                                                 
}

char* telaExcluiDependente(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Dependente                          /////|\n");
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

char* telaAtualizaDependente(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Dependente                        /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("///           Nome completo: ");
	    scanf(" %50[^\n]", nome);
	        getchar();    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        return nome;
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

////////////////////////////////////////////////////////////
//////////Consultar Arquivo DEPENDENTE   ///////////////////
////////////////////////////////////////////////////////////

    Dependente* pesquisaDependente(char* nome) {
        FILE* fp;
        Dependente* depend;

        depend = (Dependente*) malloc(sizeof(Dependente));
        fp = fopen("dependentes.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
         while(!feof(fp)) {
            fread(depend, sizeof(Dependente), 1, fp);
            if (strcmp(depend->nome, nome) == 0) {
                fclose(fp);
                return depend;
            }
        }
        fclose(fp);
        return NULL;    
    }





////////////////////////////////////////////////////////////
//////////Exibir Arquivo DEPENDENTE    /////////////////////
////////////////////////////////////////////////////////////

void exibeDependente(Dependente* depend) {

  if ((depend = NULL) && (depend->status == False)){
    printf("\n= = = Dependente Inexistente = = =\n");
  } else {
    printf("\n= = = Dependente Cadastrado = = =\n");
    printf("Nome: %s\n", depend->nome);
    printf("Idade: %d\n", depend->idade);
    delay(1);

  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo DEPENDENTE   ////////////////////
////////////////////////////////////////////////////////////

void regravarDependente(Dependente* depend) {
    int achou;
	FILE* fp;
	Dependente* dependLido;

	dependLido = (Dependente*) malloc(sizeof(Dependente));
	fp = fopen("dependentes.dat", "r+b");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
	}
	achou = False;
	while(fread(dependLido, sizeof(Dependente), 1, fp) && !achou) {
		if (strcmp(dependLido->nome, depend->nome) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Dependente), SEEK_CUR);
        	fwrite(depend, sizeof(Dependente), 1, fp);
		}
	}
	fclose(fp);
	free(dependLido);

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