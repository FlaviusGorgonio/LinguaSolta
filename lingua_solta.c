///////////////////////////////////////////////////////////////////////////////
///             Universidade Federal do Rio Grande do Norte                 ///
///                 Centro de Ensino Superior do Seridó                     ///
///               Departamento de Computação e Tecnologia                   ///
///                  Disciplina DCT1106 -- Programação                      ///
///                  Projeto Sistema de Gestão Escolar                      ///
///             Developed by @flgorgonio  - since Out, 2021                 ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>


/////
// Assinatura das funções
void tela_principal(void);
void tela_sobre(void);
void tela_equipe(void);
void tela_fim(void);

void tela_menu_aluno(void);
void tela_cadastrar_aluno(void);
void tela_pesquisar_aluno(void);
void tela_alterar_aluno(void);
void tela_excluir_aluno(void);

void tela_menu_professor(void);
void tela_cadastrar_professor(void);
void tela_pesquisar_professor(void);
void tela_alterar_professor(void);
void tela_excluir_professor(void);



/////
// Programa principal - Versão 0.1.0-alpha1 

int main(void) {
    tela_principal();
    tela_sobre();
    tela_equipe();
    tela_fim();

    tela_menu_aluno();
    tela_cadastrar_aluno();
    tela_pesquisar_aluno();
    tela_alterar_aluno();
    tela_excluir_aluno();

    tela_menu_professor();
    tela_cadastrar_professor();
    tela_pesquisar_professor();
    tela_alterar_professor();
    tela_excluir_professor();
    
    return 0;
}


/////
// Funções

void tela_sobre(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///                    Projeto Sistema de Gestão Escolar                    ///\n");
    printf("///               Developed by @flgorgonio  - since Out, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ===================================                   ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                   ===================================                   ///\n");
    printf("///                                                                         ///\n");
    printf("///  Programa exemplo utilizado na disciplina DCT1106 - Programação, para   ///\n");
    printf("///  fins didáticos de ilustração. O programa contém os principais módulos  ///\n");
    printf("///  e funcionalidades que serão exigidos na avaliação dos projetos a serem ///\n");
    printf("///  desenvolvidos pelos alunos ao longo da disciplina. Serve como um guia  ///\n");
    printf("///  de consulta e referência para o desenvolvidos dos demais projetos.     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\tTecle <ENTER> para continuar...");
    getchar();
}



void tela_principal(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///                    Projeto Sistema de Gestão Escolar                    ///\n");
    printf("///               Developed by @flgorgonio  - since Out, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///              = = = = = Sistema de Gestão Escolar = = = = =              ///\n");
    printf("///                                                                         ///\n");
    printf("///              1. Módulo Aluno                                            ///\n");
    printf("///              2. Módulo Professor                                        ///\n");
    printf("///              3. Módulo Turma                                            ///\n");
    printf("///              4. Módulo Matrícula                                        ///\n");
    printf("///              5. Módulo Relatórios                                       ///\n");
    printf("///              6. Sobre este Programa                                     ///\n");
    printf("///              0. Sair                                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\tTecle <ENTER> para continuar...");
    getchar();
}



void tela_equipe(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///                    Projeto Sistema de Gestão Escolar                    ///\n");
    printf("///               Developed by @flgorgonio  - since Out, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ===================================                   ///\n");
    printf("///                            ╔═══╗                                        ///\n");
    printf("///                            ║╔══╝                                        ///\n");
    printf("///                            ║╚══╦══╦╗╔╦╦══╦══╗                           ///\n");
    printf("///                            ║╔══╣╔╗║║║╠╣╔╗║║═╣                           ///\n");
    printf("///                            ║╚══╣╚╝║╚╝║║╚╝║║═╣                           ///\n");
    printf("///                            ╚═══╩═╗╠══╩╣╔═╩══╝                           ///\n");
    printf("///                                  ║║   ║║                                ///\n");
    printf("///                                  ╚╝   ╚╝                                ///\n");
    printf("///                   ===================================                   ///\n");
    printf("///                                                                         ///\n");
    printf("///              Este projeto exemplo foi desenvolvido por:                 ///\n");
    printf("///                                                                         ///\n");
    printf("///              Prof. Flavius Gorgônio                                     ///\n");
    printf("///              E-mail: flavius.gorgonio@ufrn.br                           ///\n");
    printf("///              Redes sociais: @flgorgonio                                 ///\n");
    printf("///              Github: https://github.com/FlaviusGorgonio/LinguaSolta     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\tTecle <ENTER> para continuar...");
    getchar();
}



void tela_fim(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Seridó                   ///\n");
    printf("///                 Departamento de Computação e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programação                    ///\n");
    printf("///                    Projeto Sistema de Gestão Escolar                    ///\n");
    printf("///               Developed by @flgorgonio  - since Out, 2021               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               ===========================================               ///\n");
    printf("///               ╔═══╗       ╔╗    ╔═══╗                                   ///\n");
    printf("///               ║╔══╝       ║║    ║╔═╗║                                   ///\n");
    printf("///               ║╚══╦╦╗╔╗ ╔═╝╠══╗ ║╚═╝╠═╦══╦══╦═╦══╦╗╔╦══╗                ///\n");
    printf("///               ║╔══╬╣╚╝║ ║╔╗║╔╗║ ║╔══╣╔╣╔╗║╔╗║╔╣╔╗║╚╝║╔╗║                ///\n");
    printf("///               ║║  ║║║║║ ║╚╝║╚╝║ ║║  ║║║╚╝║╚╝║║║╔╗║║║║╔╗║                ///\n");
    printf("///               ╚╝  ╚╩╩╩╝ ╚══╩══╝ ╚╝  ╚╝╚══╩═╗╠╝╚╝╚╩╩╩╩╝╚╝                ///\n");
    printf("///                                          ╔═╝║                           ///\n");
    printf("///                                          ╚══╝                           ///\n");
    printf("///               ===========================================               ///\n");  
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\tTecle <ENTER> para continuar...");
    getchar();
}



    
void tela_menu_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = =  Menu Aluno = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             1. Cadastrar um novo aluno                                  ///\n");
    printf("///             2. Pesquisar os dados de um aluno                           ///\n");
    printf("///             3. Atualizar o cadastro de um aluno                         ///\n");
    printf("///             4. Excluir um aluno do sistema                              ///\n");
    printf("///             0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///             Escolha a opção desejada:                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}    



void tela_cadastrar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = Cadastrar Aluno = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Matrícula (apenas números):                                 ///\n");
    printf("///             Nome completo:                                              ///\n");
    printf("///             E-mail:                                                     ///\n");
    printf("///             Data de Nascimento (dd/mm/aaaa):                            ///\n");
    printf("///             Celular  (apenas números):                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_pesquisar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = Pesquisar Aluno = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe a matrícula (apenas números):                       ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_alterar_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = Alterar Aluno = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe a matrícula (apenas números):                       ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_excluir_aluno(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = Excluir Aluno = = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe a matrícula (apenas números):                       ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_menu_professor(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = =  Menu Professor = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             1. Cadastrar um novo professor                              ///\n");
    printf("///             2. Pesquisar os dados de um professor                       ///\n");
    printf("///             3. Atualizar o cadastro de um professor                     ///\n");
    printf("///             4. Excluir um professor do sistema                          ///\n");
    printf("///             0. Voltar ao menu anterior                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///             Escolha a opção desejada:                                   ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
} 



void tela_cadastrar_professor(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = Cadastrar Professor = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             CPF (apenas números):                                       ///\n");
    printf("///             Nome completo:                                              ///\n");
    printf("///             E-mail:                                                     ///\n");
    printf("///             Data de Nascimento (dd/mm/aaaa):                            ///\n");
    printf("///             Celular  (apenas números):                                  ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_pesquisar_professor(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = Pesquisar Professor = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe o CPF (apenas números):                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_alterar_professor(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = Alterar Professor = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe o CPF (apenas números):                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



void tela_excluir_professor(void) {
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///                   ╔╗                  ╔═══╗  ╔╗╔╗                       ///\n");
    printf("///                   ║║                  ║╔═╗║  ║╠╝╚╗                      ///\n");
    printf("///                   ║║  ╔╦═╗╔══╦╗╔╦══╗  ║╚══╦══╣╠╗╔╬══╗                   ///\n");
    printf("///                   ║║ ╔╬╣╔╗╣╔╗║║║║╔╗║  ╚══╗║╔╗║║║║║╔╗║                   ///\n");
    printf("///                   ║╚═╝║║║║║╚╝║╚╝║╔╗║  ║╚═╝║╚╝║╚╣╚╣╔╗║                   ///\n");
    printf("///                   ╚═══╩╩╝╚╩═╗╠══╩╝╚╝  ╚═══╩══╩═╩═╩╝╚╝                   ///\n");
    printf("///                           ╔═╝║                                          ///\n");
    printf("///                           ╚══╝                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///             = = = = = = = Excluir Professor = = = = = = = =             ///\n");
    printf("///             = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
    printf("///                                                                         ///\n");
    printf("///             Informe o CPF (apenas números):                             ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}