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

int validarNomes(char nome){
    if ((strlen(nome) == 0 )|| (strlen(nome) <= 5)){
        return 0;

    }else {
        return 1;
    }

}

//http://linguagemc.com.br/a-biblioteca-string-h/
//Usado apenas para saber como é a função len em C
