/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int opcao;
    char continuar;

    do
    {
        printf("\n1. Opcao 1\n");
        printf("\n2. Opcao 2\n");
        printf("\n3. Opcao 3\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1:
                printf("\nOpcao 1!\n");
                break;
            case 2:
                printf("\nOpcao 2!\n");
                break;
            case 3:
                printf("\nOpcao 3!\n");
                break;
            default:
                printf("\nOpcao Invalida!\n");
        }

    printf("Deseja continuar (S/N)? ");
    scanf(" %c", &continuar);
           
    } while (continuar == 'S' || continuar == 's');
    //ficará em loop se usuario digitar S ou s
    
    return 0;
}
