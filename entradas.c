//Modulo entradas
//Subprograma
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "validacoes.h"
#include "entradas.h"

typedef struct entrada Entrada;

void menuEntradas(void) {
	char opcao;
	    do {
		    opcao = moduloEntradas();
		    switch (opcao) {
			    case '1' : 	cadastrarEntradas();
						    break;
			    case '2' : 	consultarEntrada();
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

////Gravar Arquivo
void gravaEntradas(Entrada*);

//// CADASTRO
void cadastrarEntrada(void){
    Entrada* ent; 

    //Ler dados de Entradas com a função telaCadastroEntradas()
        ent = telaCadastroEntradas();

    /// Gravar registro do arquivo Entradas
       gravarEntradas(ent);

    //Liberando o esáço da memória
        free(ent);
}

//// PESQUISA
void consultaEntrada(void){
    Entrada* ent;
    float* valor;

    //Exibir a tela
    valor = telaConsultaEntradas();

    //Pesquisar no arquivo
    ent = consultarEntradas(valor);

    // Exibir resultado da pesquisa de entradas

    free(ent);
}

//// EXCLUSÃO
void excluiEntrada(void){

    telaExcluiEntradas();
}

//// ATUALIZAÇÃO
void atualizaEntrada(void) {
    Entrada* ent;
    char* nome;
	// função ainda em desenvolvimento

	// exibe a tela apenas para testes
	nome = telaAtualizarEntradas();

  // pesquisa o aluno no arquivo
    ent = buscarEntradas(nome);

  if (ent == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    regravarEntradas(ent, nome);
  }


}

Entrada* telaCadastroEntradas(void){
    Entrada* ent;
    int valida;
    int valida2;
    int valida3;
    ent = (Entrada*) malloc(sizeof(Entrada));
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome Completo): ");
        scanf(" %50[^\n]", ent->nome);
	        getchar();
            valida = validarNomes(ent->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf(" %50[^\n]", ent->nome);
	            getchar();
                valida = validarNomes(ent->nome);
            }  
        printf("|/////            Valor(apenas numeros): ");
            scanf("%f", &ent->valor);
            valida2 = validaValor(ent->valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("\n|/////            Valor (apenas numeros): ");
                scanf("%f", &ent->valor);
                getchar();
                valida2 = validaValor(ent->valor);
             }
        

        printf("|/////            Tipo (Salario - 1 / Extras - 2): ");
        scanf("%d", &ent->tipo);
	        getchar();
            valida3 = validaTipo(ent->tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Salario - 1 / Extras - 2): ");
                scanf("%d", &ent->tipo);
                getchar();
                valida3 = validaTipo(ent->tipo);
            }
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("\n");
            delay(1);
            return ent;
	    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();    
}

float* telaConsultaEntradas(void){
    float* valor;

    valor = (float*) malloc(sizeof(float));
    	printf("\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Entradas                          /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Valor: ");
        scanf("%f", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return valor;
}

void telaExcluiEntradas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Entradas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");

        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar(); 
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        delay(1);
}

char* telaAtualizarEntradas(void){
    char nome[51];
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
    void gravaEntradas(Entrada* entre) {
    FILE* fp;
    
    fp = fopen("entradas.dat", "ab");
    if (fp == NULL) {
        printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
        printf("Não é possível continuar este programa...\n");
        exit(1);
    }
    fwrite(entre, sizeof(Entrada), 1, fp);
    fclose(fp);
    }

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Entrada* pesquisaEntradas(float* valor) {
        FILE* fp;
        Entrada* ent;

        ent = (Entrada*) malloc(sizeof(Entrada));
        fp = fopen("entradas.dat", "rb");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
        while(!feof(fp)) {
            fread(ent, sizeof(Entrada), 1, fp);
            if ((ent->valor, ent) == 0) {
            fclose(fp);
            return ent;
         }
        }
        fclose(fp);
        return NULL;
    }

////////////////////////////////////////////////////////////
//////////Excluir Arquivo ENTRADAS   ///////////////////////
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//////////Atualizar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////
//////////Exibir Arquivo ENTRADAS    ///////////////////////
////////////////////////////////////////////////////////////

void exibirEntrada(Entrada* ent) {

  if (ent == NULL) {
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

void regravarEntradas(Entrada* ent, char* nome) {

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
