
//Assinaturas das funções do Módulo Entradas

typedef struct entrada Entrada;

struct entrada {
   char nome[51];
   float valor ;
   int tipo;
   struct tm *data;
};

//Cadastro
Entrada* telaCadastroEntradas(void);
void cadastrarEntradas(void);


//Consulta
void consultarEntrada(void);
float* telaConsultaEntradas(void);
Entrada* pesquisaEntradas(float*);


//Excluir
void telaExcluiEntradas(void);
void excluiEntradas(void);

//Atualizar
void atualizaEntradas(void);
char* telaAtualizarEntradas(void);

char moduloEntradas(void);
void menuEntradas(void);


void regravarEntradas(Entrada* ent, char* nome);
void exibirEntrada(Entrada* ent);
Entrada* consultarEntradas(float* valor);
void gravarEntradas(Entrada* entre);
Entrada* buscarEntradas(char*);