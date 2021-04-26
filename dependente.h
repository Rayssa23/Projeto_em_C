
//Assinaturas das funções do Módulo Dependente

typedef struct dependente Dependente;

struct dependente{
    char nome[51];
    int idade;
    int status;
};

char moduloDependente(void);
void menuDependente(void);

//Cadastro
Dependente* telaCadastroDependente(void);
void cadastroDeDependente(void);

//Consulta
void consultaDeDependente(void);
Dependente* pesquisaDependente(char*);
char* telaConsultaDependente(void);

//Excluir
void excluiDependente(void);
char* telaExcluiDependente(void);

//Atualizar
void atualizaDependente(void);
char* telaAtualizaDependente(void);



void regravarDependente(Dependente* depend );
void exibeDependente(Dependente* depend);
void gravaDependente(Dependente* depend);