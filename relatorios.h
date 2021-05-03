                            ////////////////////////////////////////
                            /////////////Módulo RELATÓRIO///////////
                            ////////////////////////////////////////


typedef struct relatorio Relatorio;

struct relatorio{
    char nome[51];//retirar depois
    float valor;//retirar depois
    int tipo;//retirar depois
    int status;//retirar depois
    char data[12];//retirar depois
    float subtotal;
    float valorDespesa;
    float despesas;


    struct relatorio *prox;//retirar depois

};

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);

char moduloRelatorio(void);
void menuRelatorio(void);

// Receitas por Nome

void receitasPorNome(Relatorio* lista);
char* telaReceitasPorNome(void);

// Receitas mensal 

void receitasMensais(Relatorio* lista);
char* telaReceitasMensais(void);

// Receitas anual

void receitasAnuais(Relatorio* lista);
char* telaReceitasAnuais(void);

// Despesas mensal 

void despesasMensais(Relatorio* lista);
char* telaDespesasMensais(void);

// Despesas anual

void despesasAnuais(Relatorio* lista);
char* telaDespesasAnuais(void);

// Funções Relat

void relatReceitasPorNome(char* nome,Relatorio *lista);
void relatReceitasMensais(char* mes,Relatorio *lista);
void relatReceitasAnuais(char* ano,Relatorio *lista);
void relatDespesasMensais(char* mes, Relatorio* lista);
void relatDespesasAnuais(char* ano, Relatorio* lista);
void relatContribuintesProfissao(char* profissao);
void relatDependentesIdade(char* idade);

//retirardepois
// Parte lista relatorio
Relatorio *listaVazia(void);
void printarLista(Relatorio *lista);
int tamanhoLista(Relatorio *lista);
void liberarLista(Relatorio *lista);
void lerArquivo(Relatorio **lista);