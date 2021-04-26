
//Assinaturas das funções do Módulo Saidas

typedef struct saida Saida;

struct saida {
   char nome[51];
   float valor;
   int tipo;
   char dest[51];
   int status;
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



void regravarSaidas(Saida* sai);
void exibirSaida(Saida* sai);
void gravaSaidas(Saida* sai);