
                        ///////////////////////////////////////////////////////////
                        /////////////////////Modulo entradas///////////////////////
                        ///////////////////////////////////////////////////////////


//Subprograma

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacoes.h"
#include "entradas.h"

typedef struct entrada Entrada;

void menuEntradas(void) {
	char opcao;
	    do {
		    opcao = moduloEntradas();
		    switch (opcao) {
			    case '1' : 	cadastroDeEntradas();
						    break;
			    case '2' : 	consultaDeEntradas();
						    break;
			    case '3' : 	excluiEntradas();
						    break;
			    case '4' : 	atualizaEntradas();
						    break;
	    	}
	    } while (opcao != '0');
}


//struct tm {
    //int tm_mday;
    //int tm_mon;
    //int tm_year;
    //struct tm *data;

//};



//// CADASTRO
void cadastroDeEntradas(void){
    Entrada* ent; 
    //Ler dados de Entradas com a função telaCadastroEntradas()
        ent = telaCadastroEntradas();
    /// Gravar registro do arquivo Entradas
       gravarEntradas(ent);
    //Liberando o esáço da memória
        free(ent);
}

//// PESQUISA
void consultaDeEntradas(void){
    Entrada* ent;
    char* tipo;
    //Exibir a tela
    tipo = telaConsultaEntradas();
    //Pesquisar no arquivo
    ent = pesquisaDeEntradas(tipo);
    // Exibir resultado da pesquisa de entradas
    free(ent);
}

//// EXCLUSÃO
void excluiEntrada(void){
    Entrada* ent;
	char *tipo;

	tipo = telaExcluiEntrada();
	ent = (Entrada*) malloc(sizeof(Entrada));
	ent = pesquisaDeEntradas(tipo);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrado!\n\n");
  	} else {
		  ent->status = False;
		  regravarEntradas(ent);
		  free(ent);
	}
	free(tipo);
}

//// ATUALIZAÇÃO
void atualizaEntrada(void) {
    Entrada* ent;
    char* nome;

	nome = telaAtualizarEntradas();
	ent = pesquisaDeEntradas(nome);
	if (ent == NULL) {
    	printf("\n\nEntrada não encontrada!\n\n");
  	} else {
		  ent = telaCadastroEntradas();
		  strcpy(ent->nome, nome);
		  regravarEntradas(ent);
		  free(ent);
	}
	free(nome);


}

Entrada* telaCadastroEntradas(void){
    Entrada* ent;
    ent = (Entrada*) malloc(sizeof(Entrada));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
            ent = (Entrada*) malloc(sizeof(Entrada));
        do {
        printf("|/////            Responsavel(Nome Completo): ");
        scanf(" %50[^\n]", ent->nome);
	        getchar();
        } 
        while (!validarNomes(ent->nome));

        do {
        printf("|/////            Valor(apenas numeros): ");
            scanf("%f", &ent->valor);
            } while (!validaValor(ent->valor));
        
        do {
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%c", &ent->tipo);
	        getchar();
        }while (!validaTipo(ent->tipo));
        ent->status = True;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
            delay(1);
            return ent;
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();    
}

char* telaConsultaEntradas(void){
    char *tipo;
    tipo = (char*) malloc(sizeof(char));
    	printf("\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%c",tipo);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
    return tipo;
}

char* telaExcluiEntradas(void){
    char *tipo;
    tipo = (char*) malloc(sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
            printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
            scanf("%c", tipo);
	        getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        return tipo;
        delay(1);
}

char* telaAtualizarEntradas(void){
    char* nome;
    nome = (char*) malloc(51*sizeof(char));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        delay(1);
        return nome;
}

////////////////////////////////////////////////////////////
//////////Gravando Arquivo ENTRADAS ////////////////////////
////////////////////////////////////////////////////////////
    void gravaEntradas(Entrada* ent) {
    FILE* fp;
    
    fp = fopen("entradas.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    fwrite(ent, sizeof(Entrada), 1, fp);
    fclose(fp);
    }

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Entrada* pesquisaDeEntradas(char* tipo) {
        FILE* fp;
        Entrada* ent;

        ent = (Entrada*) malloc(sizeof(Entrada));
        fp = fopen("entradas.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
         while(fread(ent, sizeof(Entrada), 1, fp)) {
            if ((strcmp(ent->tipo, tipo) == 0) && (ent->status == True)) {
                fclose(fp);
                return ent;
            }
        }
        fclose(fp);
        return NULL;    
    }

////////////////////////////////////////////////////////////
//////////Exibir Arquivo ENTRADAS    ///////////////////////
////////////////////////////////////////////////////////////

void exibirEntrada(Entrada* ent) {

  if ((ent == NULL)&& (ent->status == False)) {
    printf("\n= = = Entrada Inexistente = = =\n");
  } else {
    printf("\n= = = Entrada Cadastrada = = =\n");
    printf("Nome: %s\n", ent->nome);
    printf("Valor: %f\n", ent->valor);
    printf("Tipo (Salario - 1 / Extras - 2): %c\n", ent->tipo);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo ENTRADAS  ///////////////////////
////////////////////////////////////////////////////////////

void regravarEntradas(Entrada* ent) {
    int achou;
	FILE* fp;
	Entrada* entLido;

	entLido = (Entrada*) malloc(sizeof(Entrada));
	fp = fopen("entradas.dat", "r+b");
	if (fp == NULL) {
		printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
	}
	achou = False;
	while(fread(entLido, sizeof(Entrada), 1, fp) && !achou) {
		if (strcmp(entLido->nome, ent->nome) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Entrada), SEEK_CUR);
        	fwrite(ent, sizeof(Entrada), 1, fp);
		}
	}
	fclose(fp);
	free(entLido);

}


char moduloEntradas(void){
     char resp;
    system("clear");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf(".........................$   MoneyDomestic  $....................................\n");
        printf(".................................................................................\n");
        printf(".................................................................................\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Entradas                                    /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            1 - Registrar Entradas                                   /////|\n");
        printf("|/////            2 - Consultar Entradas                                   /////|\n");
        printf("|/////            3 - Excluir Entradas                                     /////|\n");
        printf("|/////            4 - Atualizar Entradas                                   /////|\n");
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
