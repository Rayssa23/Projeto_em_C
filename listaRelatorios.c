#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
//#include "relatorios.h"
#include "validacoes.h"
#include "entradas.h"

// módulo Relatório

typedef struct relatorio Relatorio;

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);

////////////////////////////////////////////////////////////
//////////Gravando Arquivo RELATÓRIOS //////////////////////
////////////////////////////////////////////////////////////
void gravaRelatorio(Relatorio* relat) {
  FILE* fp;
  fp = fopen("relatorios.dat", "ab");
  if (fp == NULL) {
    printf("Ops! Ocorreu um erro na abertura do arquivo!\n");
    printf("Não é possível continuar este programa...\n");
    exit(1);
  }
  fwrite(relat, sizeof(Relatorio), 1, fp);
  fclose(fp);
}

void menuRelatorio(void) {
	char opcao;
        Relatorio *lista; //cria alista
        lista = listaVazia();       //seta como vazia
        lerArquivo(&lista);//ler todos os cadastrados coloca na lista
	do {
	    opcao = moduloRelatorio();
		switch (opcao) {
			case '1' : receitasPorNome(lista);     //ai a busca já é por filtragem
				break;
			case '2' : receitasMensais(lista);
				break;
                        case '3' : receitasAnuais(lista);
				break;
                        case '4' : despesasMensais(lista);
				break;
                        case '5' : despesasAnuais(lista);
				break;
                        case '6':                //mostrar todos da lista
                                printarLista(lista); //printa lista
                                delay(50);
                                break;
	                } 
                        }while (opcao != '0');
                        liberarLista(lista);                //varre toda e libera alocado
}

void receitasPorNome(Relatorio* lista){
        char* nome;

        nome = telaReceitasPorNome();
        relatReceitasPorNome(nome,lista);
        free(nome);
}

void receitasMensais(Relatorio* lista){
        char* mes;

        mes = telaReceitasMensais();
        relatReceitasMensais(mes,lista);
        free(mes);
}

void receitasAnuais(Relatorio* lista){
        char* ano;

        ano = telaReceitasAnuais();
        relatReceitasAnuais(ano,lista);
        free(ano);
}

void despesasMensais(Relatorio* lista){
        char* mes;

        mes = telaDespesasMensais();
        relatDespesasMensais(mes,lista);
        free(mes);
}

void despesasAnuais(Relatorio* lista){
        char* ano;

        ano = telaDespesasAnuais();
        relatDespesasAnuais(ano,lista);
        free(ano);
}

//void contribuintesPorProfissao(void){
       // char* profissao;

        //profissao = telaContribuintesProfissao();
        //relatContribuintesProfissao(profissao);
        //free(profissao);
//}

//void dependentesPorIdade(void){
 //       char* idade;

//        idade = telaDependentesIdade();
  //      relatDependentesIdade(idade);
    //    free(idade);
//}


char* telaReceitasPorNome(void){
        char* nome;
        nome = (char*) malloc(51*sizeof(char));
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
        printf("|///////////////////////////////////////////////////////////////////////////////|\n");
        printf("|/////            Informe o Ano(aa): ");
        scanf(" %c", ano);
            getchar();
        printf("|///////////////////////////////////////////////////////////////////////////////|\n"); 
        printf("\n");
        delay(1);
        return ano;
}

void relatReceitasPorNome(char* nome, Relatorio *lista){
        Relatorio *aux;
	      if(lista==NULL){
          printf("===== Lista vazia =====\n");
        }
        for(aux=lista;aux!=NULL;aux=aux->prox){
          if(strcmp(aux->nome,nome)==0){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Nome                                 |");
            printf("|=================================================================================|");
            printf("|> Nome:                                                           %s             |",aux->nome);
            printf("|=================================================================================|");
                if(aux->tipo == 1){
            printf("|> Receitas variaveis:                                                   R$ %5.2f |",aux ->valor);
            printf("|=================================================================================|");
                }else{
            printf("|> Receitas fixas:                                                       R$ %5.2f |",aux ->valor);
            printf("|=================================================================================|");
                }
            printf("|   >> Subtotal:                                                          R$ %5.2f|",aux->subtotal);
            printf("|=================================================================================|");
          }
        }
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatReceitasMensais(char* mes, Relatorio* lista){
/// Fazer um swich case para o mes
        Relatorio *aux;
	      if(lista==NULL){
          printf("===== Lista vazia =====\n");
        }
        for(aux=lista;aux!=NULL;aux=aux->prox){//01/05/2021.......char meseAno1[7]={mes[3],mes[4]};
          char meseAno2[3]={aux->nome[3],aux->nome[4]};

          if(strcmp(meseAno2,mes)==0){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Mes                                  |");
            printf("|=================================================================================|");
            printf("|> Mes:                                                                       %s  |",aux->data);
            printf("|=================================================================================|");
                if(aux->tipo == 1){
            printf("|> Receitas variaveis:                                                   R$ %5.2f |",aux ->valor);
            printf("|=================================================================================|");
                }else{
            printf("|> Receitas fixas:                                                       R$ %5.2f |",aux ->valor);
            printf("|=================================================================================|");
                }
            printf("|   >> Subtotal:                                                          R$ %5.2f|",aux->subtotal);
            printf("|=================================================================================|"); 
          }
        }
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
  
}

void relatReceitasAnuais(char* mes, Relatorio* lista){
        Relatorio *aux;
	if(lista==NULL){
          printf("===== Lista vazia =====\n");
        }
        for(aux=lista;aux!=NULL;aux=aux->prox){//01/05/2021.......char meseAno1[7]={mes[3],mes[4]};
          char Ano[5]={aux->nome[5],aux->nome[6],aux->nome[7],aux->nome[8]};
                if(strcmp(Ano,Ano)==0){
                printf("|=================================================================================|");  
                printf("|                               Receitas Por Ano                                  |");
                printf("|=================================================================================|");
                printf("|> Ano:                                                                       %s  |",aux->data);
                printf("|=================================================================================|");
                        if(aux->tipo == 1){
                printf("|> Receitas variaveis:                                                   R$ %5.2f |",aux ->valor);
                printf("|=================================================================================|");
                        aux->subtotal = aux->subtotal + aux->valor;
                        }else{
                printf("|> Receitas fixas:                                                       R$ %5.2f |",aux ->valor);
                printf("|=================================================================================|");
                        aux->subtotal = aux->subtotal + aux->valor;
                        }
                printf("|   >> Subtotal:                                                          R$ %5.2f|",aux->subtotal);
                printf("|=================================================================================|"); 
                }
                }
                printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                        getchar();
}
void relatDespesasMensais(char* mes, Relatorio* lista){
        Relatorio *aux;
	      if(lista==NULL){
          printf("===== Lista vazia =====\n");
        }
        for(aux=lista;aux!=NULL;aux=aux->prox){
          char meseAno2[3]={aux->nome[3],aux->nome[4]};

          if(strcmp(meseAno2,mes)==0){
            printf("|=================================================================================|");  
            printf("|                               Receitas Por Mes                                  |");
            printf("|=================================================================================|");
            printf("|> Mes:                                                                       %s  |",aux->data);
            printf("|=================================================================================|");
                if(aux->tipo == 1){
            printf("|> Receitas variaveis:                                                   R$ %5.2f |",aux ->valorDespesa);
            printf("|=================================================================================|");
                }else{
            printf("|> Receitas fixas:                                                       R$ %5.2f |",aux ->valorDespesa);
            printf("|=================================================================================|");
                }
                aux->subtotal = aux->subtotal + aux->valorDespesa;
            printf("|   >> Subtotal:                                                          R$ %5.2f|",aux->despesas);
            printf("|=================================================================================|");
            float lucro = aux->subtotal - aux->despesas;
            printf("|   >> Lucro Líquido:                                                     R$ %5.2f|",lucro);
            printf("|=================================================================================|");  
          }
        }
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
        getchar();
}

void relatDespesasAnuais(char* ano, Relatorio* lista){
        Relatorio *aux;
	if(lista==NULL){
          printf("===== Lista vazia =====\n");
        }
        for(aux=lista;aux!=NULL;aux=aux->prox){//01/05/2021.......char meseAno1[7]={mes[3],mes[4]};
          char Ano[5]={aux->nome[5],aux->nome[6],aux->nome[7],aux->nome[8]};
         if(strcmp(Ano,Ano)==0){
        printf("|=================================================================================|");  
        printf("|                               Despesas Por Ano                                  |");
        printf("|=================================================================================|");
        printf("|> Ano:                                                                       %s  |",aux->data);
        printf("|=================================================================================|");
                if(aux->tipo == 1){
        printf("|> Receitas variaveis:                                                   R$ %5.2f |",aux ->valorDespesa);
        printf("|=================================================================================|");
                aux->subtotal = aux->subtotal + aux->valor;
                }else{
        printf("|> Receitas fixas:                                                       R$ %5.2f |",aux ->valorDespesa);
        printf("|=================================================================================|");
                aux->subtotal = aux->subtotal + aux->valorDespesa;
                }
        printf("|   >> Subtotal:                                                          R$ %5.2f|",aux->subtotal);
        printf("|=================================================================================|");
         float lucro = aux->subtotal - aux->despesas;
        printf("|   >> Lucro Líquido:                                                     R$ %5.2f|",lucro);
        printf("|=================================================================================|"); 
        }
        }  
        printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
                getchar();
}
//void relatContribuintesProfissao(char* profissao){

  //      printf("|=================================================================================|");  
    //    printf("|                        Contribuintes por Profissao                              |");
      //  printf("|=================================================================================|");
        //printf("|> Profissao:                                               Estudante             |");
       // printf("|=================================================================================|");
       // printf("|> Receitas:                                         R$ 100,00                    |");
       // printf("|=================================================================================|");

//}

//void relatDependentesIdade(char* idade){

  //      printf("|=================================================================================|");  
   //     printf("|                        Dependentes por Idade                                    |");
   //     printf("|=================================================================================|");
   //     printf("|> Idade:                                               15                        |");
     //   printf("|=================================================================================|");
     //   printf("|> Nome:                                        Fulano Sicrano Adolescente        |");
     //   printf("|=================================================================================|");

//}


char moduloRelatorio(void){
    char resp;
    system("clear");
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

//-------------------------------------------------------------------------------
Relatorio *listaVazia(void){  //inicio da lista
	return NULL;
}
void printarLista(Relatorio *lista){
	Relatorio *aux;
	if(lista==NULL)
		printf("===== Lista vazia =====\n");
	for(aux=lista;aux!=NULL;aux=aux->prox){
		printf("Nome::%s\n",aux->nome);
		printf("valor:%.2f\n",aux->valor);
		printf("tipo:%d\n",aux->tipo);
		printf("status:%d\n",aux->status);
		printf("Data de vencimento :%s\n",aux->data);
		printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
    delay(3);
	}	
}
int tamanhoLista(Relatorio *lista){
	if (lista==NULL)
		return 0;
	int tamanho=0;
	Relatorio *aux=lista;//criar ponteiro auxiliar pra nao andar com a cabeça da lista;
	while(aux!=NULL){//percorre cada ponteiro ate que ele encontre NULL
		tamanho+=1;
		aux=aux->prox;
	}
	return tamanho;
}
void liberarLista(Relatorio *lista){
	if(lista!= NULL){
		Relatorio *aux;
		while(lista!=NULL){
			aux=lista;//aux recebe o endereço  atual;
			lista=lista->prox;
			free(aux);
		}
	free(lista);
	}	
}
void lerArquivo(Relatorio **lista){
	FILE *pont;
	pont=fopen("entradas.dat","rb");
	if(pont==NULL){
		printf("\nnao e possivel ler o arquivo\n");
		exit(1);
	}//depois envio direto a lista;

        Entrada* ent;
        ent = (Entrada*) malloc(sizeof(Entrada));

	while(fread(ent, sizeof(Entrada), 1, pont)){
		Relatorio *novoitem=(Relatorio *)malloc(sizeof(Relatorio));
                strcpy(novoitem->nome,ent->nome);
		novoitem->tipo = ent->tipo;
		novoitem->status = ent->status;
                strcpy(novoitem->data,ent->data);
		novoitem->prox =*lista;
		*lista=novoitem;	
	}
        free(ent);
	fclose(pont);
}


typedef struct relatorio Relatorio;

struct relatorio{
    char nome[51];//retirar depois
    float valor;//retirar depois
    int tipo;//retirar depois
    int status;//retirar depois
    char data[12];//retirar depois
    float subtotal;
    float valorDespesa;
    float despesas;


    struct relatorio *prox;//retirar depois

};

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);

char moduloRelatorio(void);
void menuRelatorio(void);

// Receitas por Nome

void receitasPorNome(Relatorio* lista);
char* telaReceitasPorNome(void);

// Receitas mensal 

void receitasMensais(Relatorio* lista);
char* telaReceitasMensais(void);

// Receitas anual

void receitasAnuais(Relatorio* lista);
char* telaReceitasAnuais(void);

// Despesas mensal 

void despesasMensais(Relatorio* lista);
char* telaDespesasMensais(void);

// Despesas anual

void despesasAnuais(Relatorio* lista);
char* telaDespesasAnuais(void);

// Funções Relat

void relatReceitasPorNome(char* nome,Relatorio *lista);
void relatReceitasMensais(char* mes,Relatorio *lista);
void relatReceitasAnuais(char* ano,Relatorio *lista);
void relatDespesasMensais(char* mes, Relatorio* lista);
void relatDespesasAnuais(char* ano, Relatorio* lista);
void relatContribuintesProfissao(char* profissao);
void relatDependentesIdade(char* idade);

//retirardepois
// Parte lista relatorio
Relatorio *listaVazia(void);
void printarLista(Relatorio *lista);
int tamanhoLista(Relatorio *lista);
void liberarLista(Relatorio *lista);
void lerArquivo(Relatorio **lista);