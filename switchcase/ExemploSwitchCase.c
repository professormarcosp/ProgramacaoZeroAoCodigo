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
    int opcao;

    printf("Escolha uma opcao (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Voce escolheu a opcao 1.\n");
            break;
        case 2:
            printf("Voce escolheu a opcao 2.\n");
            break;
        case 3:
            printf("Voce escolheu a opcao 3.\n");
            break;

        default:
            printf("Opcao invalida.\n");
            //aqui não tem break!
    }

    return 0;
}
