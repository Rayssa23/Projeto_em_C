
//Assinaturas das funções do Módulo Entradas

typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor;
   int tipo;
   int status;
   //struct tm *data;
	struct entradas *prox;
};


//Cadastro
Entrada* telaCadastroEntradas(void);
void cadastroDeEntradas(void);


//Consulta
void consultaDeEntradas(void);
int telaConsultaEntradas(void);
Entrada* pesquisaDeEntradas(int);


//Excluir
int telaExcluiEntradas(void);
void excluiEntrada(void);

//Atualizar
void atualizaEntrada(void);
int telaAtualizaEntradas(void);

char moduloEntradas(void);
void menuEntradas(void);


////Gravar Arquivo
void regravarEntradas(Entrada*);
void exibeEntradas(Entrada*);
void gravaEntradas(Entrada*);

///INCLUIR LISTA
