
//Assinaturas das funções do Módulo Contribuinte




typedef struct contribuinte Contribuinte;

struct contribuinte {
   char nome[51];
   char profissao[51];
   float valor;
   int status;
};

char moduloContribuinte(void);
void menuContribuinte(void);

//Cadastro
Contribuinte* telaCadastroContribuinte(void);
void cadastroDeContribuinte(void);

//Consulta
void consultaDeContribuinte(void);
Contribuinte* pesquisaContribuinte(char*);
char* telaConsultaContribuinte(void);

//Excluir
void excluiContribuinte(void);
char* telaExcluiContribuinte(void);

//Atualizar
void atualizaContribuinte(void);
char* telaAtualizaContribuinte(void);



void regravarContribuinte(Contribuinte*);
void exibeContribuinte(Contribuinte*);
void gravaContribuinte(Contribuinte*);