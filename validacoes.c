///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///           Projeto Sistema de Gestão de Finanças Domésticas              ///
///                Developed by  @AlmeidaRayssa - Jan, 2021                 ///
///////////////////////////////////////////////////////////////////////////////

////////// Funções de Validação ////////////
#include <string.h>
#include <ctype.h>
#include <time.h>


//Valida Nomes
int validarNomes(char nome[]){
    int tam;
    tam = strlen (nome);
    if ((tam == 0 ) || (tam <= 5)){
            return 0;
                }
    else {
        for (int i = 0; i < tam; i++ ){
            if((!isalpha(nome[i])) && (!isspace(nome[i]))){
                return 0;
            }
        }
    } 
    return 1;
    }     

//Valida Valores
int validaValor (float *valor){
    //valor apenas dígitos
    int tam;
    tam = sizeof(valor);
    for (int i = 0; i < tam; i++) {
        if (!isdigit(valor[i]) && (valor[i] != '.')){
            return 1;

            }
    }
    if(valor <= 0){     
        return 1;
    }
    else{
        return 0;
    }
}


int validaIdade (int idade){
    //idade apenas dígitos
    if ((idade <= 0) || (!isdigit(idade))){
        
        return 0;
    }
    else{
        return 1;
    }
}

//Valida Tipos
int validaTipo (int tipo){
    if ((tipo != 1) && (tipo != 2 )){ 
        return 0;
    }
    else{
        return 1;
        
    }
}

// Funçao Delay
void delay(int segundos) {
    int tempo = 1000 * segundos;
    clock_t inicio = clock();
    while (clock() < inicio + tempo) {
  }
}
// Criada por GitHub: @flgorgornio 

