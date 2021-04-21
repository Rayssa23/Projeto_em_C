
//Assinaturas das funções do Módulo Saidas

typedef struct saida Saida;

struct saida {
   char nome[51];
   float valor;
   char tipo;
   char dest[51];
   char status;
};

char moduloSaidas(void);
void menuSaidas(void);

//Cadastro
Saida* telaCadastroSaidas(void);
void cadastroSaidas(void);

//Consulta
void consultaSaidas(void);
Saida* pesquisaSaidas(char);
char telaConsultaSaidas(void);

//Excluir
void excluiSaida(void);
char telaExcluiSaidas(void);

//Atualizar
void atualizaSaida(void);
char telaAtualizaSaidas(void);



void regravarSaidas(Saida* sai);
void exibirSaida(Saida* sai);
void gravaSaidas(Saida* sai);