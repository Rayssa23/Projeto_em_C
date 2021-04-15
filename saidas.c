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
    float* valor;

    //Exibir a tela
    valor = telaConsultaSaidas();

    //Pesquisar no arquivo
    sai = consultarSaidas(valor);

    // Exibir resultado da pesquisa de entradas

    free(sai);
}

//// EXCLUSÃO
void excluiSaida(void){

    telaExcluiSaidas();
}

//// ATUALIZAÇÃO
void atualizaSaida(void) {
    Saida* sai;
    char* nome;
	// função ainda em desenvolvimento

	// exibe a tela apenas para testes
	nome = telaAtualizarSaidas();

  // pesquisa o aluno no arquivo
    sai = buscarSaidas(nome);

  if (sai == NULL) {
    printf("\n\nAluno não encontrado!\n\n");
  } else {
    regravarSaidas(sai, nome);
  }


}


Saida* telaCadastroSaidas(void){
    Saida* sai;
    sai = (Saida*) malloc(sizeof(Saida));
    int valida;
    int valida2;
    int valida3;
    int valida4;

        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Cadastrar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Responsavel(Nome completo): ");
        scanf(" %50[^\n]", sai->nome);
	        getchar();
            valida = validarNomes(sai->nome);
            while (valida == 1){
                printf("\n Nome Invalido! Tente novamente!\n");
                printf("\n|/////            Responsavel(Nome Completo): ");
                scanf(" %50[^\n]",sai->nome );
	            getchar();
                valida = validarNomes(sai->nome);
            }    
        printf("|/////            Valor(apenas numeros): ");
        scanf("%f", &sai->valor);
            valida2 = validaValor(sai->valor);
            while (valida2 == 1){
                printf("\n Valor Invalido! Tente novamente!\n");
                printf("\n|/////            Valor (apenas numeros): ");
                scanf("%f", &sai->valor);
                valida2 = validaValor(sai->valor);
             }
        printf("|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
        scanf("%c", &sai->tipo);
	        getchar();
             valida3 = validaTipo(sai->tipo);
            while (valida3 == 1){
                printf("\n Tipo Invalido! Tente novamente!\n");
                printf("\n|/////            Tipo (Despesas Extras - 1 / Despesas Fixas - 2): ");
                scanf("%c", &sai->tipo);
                getchar();
                valida3 = validaTipo(sai->tipo);
            }     
        printf("|/////            Destino: ");
        scanf(" %50[^\n]", sai->dest);
	        getchar();
            valida4 = validarNomes(sai->dest);
            while (valida4 == 1){
                printf("\n Destino Invalido! Tente novamente!\n");
                printf("\n|/////            Destino: ");
                scanf(" %50[^\n]", sai->dest);
	            getchar();
                valida4 = validarNomes(sai->dest);
            }    
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        delay(1);
        return sai;
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();

}

float* telaConsultaSaidas(void){
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Consultar Saidas                            /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
        return valor;
}

void excluiSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Excluir Saidas                              /////|\n");
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Responsavel(nome completo): ");
        scanf(" %50[^\n]", nome);
            getchar();
        printf("|/////            Informe o Valor: ");
        scanf("%d", &valor);
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
        delay(1);
}

void atualizaSaidas(void){
    char nome[51];
    int valor;
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");    
        printf("|/////                  Modulo Atualizar Saidas                            /////|\n");
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
//////////Gravando Arquivo SAIDAS //////////////////////////
////////////////////////////////////////////////////////////
    void gravaSaidas(Saida* sair) {
        FILE* fp;
        fp = fopen("saidas.dat", "ab");
        if (fp == NULL) {
            printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
            printf("Não é possível continuar este programa...\n");
            exit(1);
        }
        fwrite(sair, sizeof(Saida), 1, fp);
        fclose(fp);
    }

////////////////////////////////////////////////////////////
//////////Consultar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////

    Saida* pesquisaEntradas(char* tipo) {
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
//////////Excluir Arquivo ENTRADAS   ///////////////////////
////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
//////////Atualizar Arquivo ENTRADAS ///////////////////////
////////////////////////////////////////////////////////////





////////////////////////////////////////////////////////////
//////////Exibir Arquivo ENTRADAS    ///////////////////////
////////////////////////////////////////////////////////////

void exibirSaida(Saida* sai) {

  if (sai == NULL) {
    printf("\n= = = Saída Inexistente = = =\n");
  } else {
    printf("\n= = = Saída Cadastrada = = =\n");
    printf("Nome: %s\n", sai->nome);
    printf("Valor: %f\n", sai->valor);
    printf("Tipo (Salario - 1 / Extras - 2): %c\n", sai->tipo);
    printf("Destino: %s\n", sai->dest);
  }
  printf("\n\nTecle ENTER para continuar!\n\n");
  getchar();
}

////////////////////////////////////////////////////////////
//////////Regravar Arquivo ENTRADAS  ///////////////////////
////////////////////////////////////////////////////////////

void regravarSaidas(Saida* ent, char* nome) {

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