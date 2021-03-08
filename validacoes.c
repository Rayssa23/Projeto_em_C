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

//Valida Nomes
int validarNomes(char nome[]){
    int tam;
    char teste [10] = ["0","1","2","3","4","5","6","7","8","9","10"];
    tam = strlen (nome);
     /// essa parte é para ver se o usuário digitou algum número     
    for (int i = 0; i < tam; i++ ){
           if (teste[i] == nome){
               return 1;
            } 
         }    
    if ((tam == 0 )|| (tam <= 5)){
        return 1;
    }
    else{
        return 0;
    }
    }

//Valida Valores
int validaValor (float valor){
    if (valor <= 0){
        return 1;
    }
    return 0;
}

//Valida Tipos
int validaTipo (char tipo){
    if ((toupper(tipo)) != 'S' || (toupper(tipo)) != 'E'){ 
        return 1;
    }else if((toupper(tipo)) != 'F'){
        return 1;
    }
    return 0;
}


//http://linguagemc.com.br/a-biblioteca-string-h/
//Usado apenas para saber como é a função len em C
