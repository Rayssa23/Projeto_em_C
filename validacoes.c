///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///           Projeto Sistema de Gestão de Finanças Domésticas              ///
///                Developed by  @AlmeidaRayssa - Jan, 2021                 ///
///////////////////////////////////////////////////////////////////////////////

////////// Funções de Validação ////////////

int validarResponsavel(char* nome){
    if (*nome == [A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ])  {
        return 1
    };
    else{
        return 0
    };
}