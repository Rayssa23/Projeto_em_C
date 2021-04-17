
//Assinaturas das funções do Módulo Dependente

typedef struct dependente Dependente;

struct dependente{
    char nome[51];
    int idade;
    char status;
};

char moduloDependente(void);
void menuDependente(void);

//Cadastro
Dependente* telaCadastroDependente(void);
void cadastroDependente(void);

//Consulta
void consultaDependente(void);
Dependente* pesquisaDependente(char*);
char* telaConsultaDependente(void);

//Excluir
void excluiDependente(void);
char* telaExcluiDependente(void);

//Atualizar
void atualizaDependente(void);
char* telaAtualizarDependente(void);



void regravarDependente(Dependente* depend );
void exibirDependente(Dependente* depend);
void gravarDependente(Dependente* depend);