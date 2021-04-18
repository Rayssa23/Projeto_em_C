
//Assinaturas das funções do Módulo Entradas

typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor ;
   char tipo;
   char status;
   struct tm *data;
};

//Cadastro
Entrada* telaCadastroEntradas(void);
void cadastrarEntradas(void);


//Consulta
void consultarEntradas(void);
char* telaConsultaEntradas(void);
Entrada* pesquisaEntradas(char*);


//Excluir
char* telaExcluiEntradas(void);
void excluiEntradas(void);

//Atualizar
void atualizaEntradas(void);
char* telaAtualizarEntradas(void);

char moduloEntradas(void);
void menuEntradas(void);


////Gravar Arquivo
void regravarEntradas(Entrada*);
void exibirEntrada(Entrada*);
void gravarEntradas(Entrada*);