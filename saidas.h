
//Assinaturas das funções do Módulo Saidas

typedef struct saida Saida;

struct saida {
   char nome[51];
   float valorDespesa;
   int tipo;
   char dest[51];
   int status;
   char data[12];
   float despesas;
	struct saidas *prox;
};

char moduloSaidas(void);
void menuSaidas(void);

//Cadastro
Saida* telaCadastroSaidas(void);
void cadastroSaidas(void);

//Consulta
void consultaSaidas(void);
Saida* pesquisaSaidas(int);
int telaConsultaSaidas(void);


//Excluir
void excluiSaida(void);
int telaExcluiSaidas(void);

//Atualizar
void atualizaSaida(void);
int telaAtualizaSaidas(void);
char telaAtualizacao(void);
void menuAtualizaSaidas(void);


void regravarSaidas(Saida* sai);
void exibirSaida(Saida* sai);
void gravaSaidas(Saida* sai);