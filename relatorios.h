                            ////////////////////////////////////////
                            /////////////Módulo RELATÓRIO///////////
                            ////////////////////////////////////////


//Menu e Módulo

char moduloRelatorio(void);
void menuRelatorio(void);

int telaTipo(void);

// Receitas por Nome

void receitasPorNome(void);
char* telaReceitasPorNome(void);

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

// Listas Relatórios
void listaReceitasNome(char* nome);
void listaReceitasMes(char* mes, char* ano, int tipo);
void listaReceitasAno(char* ano, int tipo);
void listaDespesasMes(char* mes, char* ano, int tipo);
void listaDespesasAno(char* ano, int tipo);

// Funções Relat

void relatReceitasPorNome(char* nome);
void relatReceitasMensais(char* mes, char* ano, int tipo);
void relatReceitasAnuais(char* ano, int tipo);
void relatDespesasMensais(char* mes, char* ano, int tipo);
void relatDespesasAnuais(char* ano, int tipo);


/// Funções Cálculos

float calculaReceitaMes(char* mes, char* ano, int tipo);
float calculaReceitaAno(char* ano, int tipo);
float calculaDespesaMes(char* mes, char* ano, int tipo);
float calculaDespesaAno(char* ano, int tipo);