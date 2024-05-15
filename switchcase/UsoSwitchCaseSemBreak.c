/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>

int main()
{
    int opcao = 1;

    switch (opcao)
    {
        case 1:
        {
            printf("\nOpcao 1 selecionada\n");
            //break;
        }
        case 2:
        {
            printf("\nOpcao 2 selecionada\n");
            //break;
        }
        case 3:
        {
            printf("\nOpcao 3 selecionada\n");
            //break;
        }
        default:
        {
            printf("\nOpcao invalida\n");
            //break;
        }
    }

    return 0;
}
