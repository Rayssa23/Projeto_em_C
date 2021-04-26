
//Assinaturas das funções do Módulo Entradas

typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor;
   char tipo;
   char status;
   struct tm *data;
};

//Cadastro
Entrada* telaCadastroEntradas(void);
void cadastroDeEntradas(void);


//Consulta
void consultaDeEntradas(void);
char telaConsultaEntradas(void);
Entrada* pesquisaDeEntradas(char);


//Excluir
char telaExcluiEntradas(void);
void excluiEntrada(void);

//Atualizar
void atualizaEntrada(void);
char telaAtualizaEntradas(void);

char moduloEntradas(void);
void menuEntradas(void);


////Gravar Arquivo
void regravarEntradas(Entrada*);
void exibeEntradas(Entrada*);
void gravaEntradas(Entrada*);