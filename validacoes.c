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
    if ((tam == 0 )|| (tam <= 5)){
                return 1;}
    else {
        for (int i = 0; i < tam; i++ ){
            if (nome[i] >= 'A' && nome[i] <= 'Z'){
                continue;
                }
            else if (nome[i] >= 'a' && nome[i] <= 'z'){
                    continue;
                }   
        }
        return 0; 
    }
}
/// Adaptado de : https://repl.it/@flgorgonio
/// Fork : https://repl.it/@AlmeidaRayssa/mediaEVarianciaSemFuncoesc#main.c

//Valida Valores
int validaValor (float *valor){
    //valor apenas dígitos
    float zero = 0;
    if ((*valor <= zero) && (!isdigit(*valor))){
        return 1;
    }
    else{
        return 0;
    }
}
int validaIdade (int idade){
    //idade apenas dígitos
    if ((idade <= 0) &&(!isdigit(idade))){
        
        return 1;
    }
    else{
        return 0;
    }
}

//Valida Tipos
int validaTipo (char tipo){
    if ((tipo) !='1' || (tipo) != '2'){ 
        return 1;
    }
    else{
        return 0;
        
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


// Função Data e Hora
  //char dataHora (void){
  //time_t rawtime;
  //struct tm * timeinfo;

  //time ( &rawtime );
  //timeinfo = localtime ( &rawtime );
  //printf ( "Data atual do sistema é: %s", asctime (timeinfo) );

  //return timeinfo;
//}

//http://linguagemc.com.br/a-biblioteca-string-h/
//Usado apenas para saber como é a função len em C
