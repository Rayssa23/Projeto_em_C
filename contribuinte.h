
//Assinaturas das funções do Módulo Contribuinte



typedef struct contribuinte Contribuinte;

struct contribuinte {
   char nome[51];
   char profissao[51];
   float valor;
   char status;
};

char moduloContribuinte(void);
void menuContribuinte(void);

//Cadastro
Contribuinte* telaCadastroContribuinte(void);
void cadastroContribuinte(void);
void cadastrarContribuinte(void);

//Consulta
void consultaContribuinte(void);
Contribuinte* pesquisaContribuinte(char*);
char* telaConsultaContribuinte(void);

//Excluir
void excluiContribuinte(void);
char* telaExcluiContribuinte(void);

//Atualizar
void atualizaContribuinte(void);
char* telaAtualizarContribuinte(void);



void regravarContribuinte(Contribuinte* contr );
void exibirContribuinte(Contribuinte* contr);
void gravarContribuinte(Contribuinte* contr);