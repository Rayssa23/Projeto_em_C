
//Assinaturas das funções do Módulo Saidas

typedef struct saida Saida;

struct saida {
   char nome[51];
   float valor;
   char tipo;
   char dest[51];
};

char moduloSaidas(void);
void menuSaidas(void);

//Cadastro
Saida* telaCadastroSaidas(void);
void cadastroSaidas(void);

//Consulta
void consultarSaida(void);
float* telaConsultaSaidas(void);
Saida* pesquisaSaidas(float*);

//Excluir
void excluiSaidas(void);

//Atualizar
void atualizaSaidas(void);

//Excluir
void telaExcluiSaidas(void);
void excluiSaidas(void);

//Atualizar
void atualizaSaidas(void);
char* telaAtualizarSaidas(void);

void regravarEntradas(Saida* sai, char* nome);
void exibirSaida(Saida* sai);
Saida* consultarSaidas(float* valor);
void gravarSaidas(Saida* sai);
Saida* buscarSaidas(char*);