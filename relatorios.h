                            ////////////////////////////////////////
                            /////////////Módulo RELATÓRIO///////////
                            ////////////////////////////////////////


//Menu e Módulo

char moduloRelatorio(void);
void menuRelatorio(void);

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
void listaReceitasMes(char* mes);
void listaReceitasAno(char* ano);
void listaDespesasMes(char* mes);
void listaDespesasAno(char* ano);

// Funções Relat

void relatReceitasPorNome(char* nome);
void relatReceitasMensais(char* mes);
void relatReceitasAnuais(char* ano);
void relatDespesasMensais(char* mes);
void relatDespesasAnuais(char* ano);
