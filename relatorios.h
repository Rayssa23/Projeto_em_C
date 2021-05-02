                            ////////////////////////////////////////
                            /////////////Módulo RELATÓRIO///////////
                            ////////////////////////////////////////


typedef struct relatorio Relatorio;

struct relatorio{
    

};

//Gravar Arquivo
void gravaRelatorio(Relatorio* depend);

char moduloRelatorio(void);
void menuRelatorio(void);

// Receitas por Nome

void receitasPorNome(void);
char* telaReceitasPorNome(void);

// Contribuintes Por Profissao

void contribuintesPorProfissao(void);
char* telaContribuintesProfissao(void);

// Dependentes PorIdade

void dependentesPorIdade(void);
char* telaDependentesIdade(void);

// Receitas mensal 

void receitasMensais(void);
char* telaReceitasMensais(void);

// Receitas anual

void receitasAnuais(void);
char* telaReceitasAnuais(void);

// Despesas mensal 

void despesasMensais(void);
char* telaDespesasMensais(void);

// Despesas anual

void despesasAnuais(void);
char* telaDespesasAnuais(void);

// Funções Relat

void relatReceitasPorNome(char* nome);
void relatReceitasMensais(char* mes);
void relatReceitasAnuais(char* ano);
void relatDespesasMensais(char* mes);
void relatDespesasAnuais(char* ano);
void relatContribuintesProfissao(char* profissao);
void relatDependentesIdade(char* idade);