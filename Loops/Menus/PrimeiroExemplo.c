/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int opcao;
 

    do
    {
        printf("\n1. Opcao 1\n");
        printf("\n2. Opcao 2\n");
        printf("\n3. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d",&opcao);

        if (opcao == 1)
        {
            printf("\nVoce escolheu a Opcao 1!\n");
        }
        else if (opcao == 2)
        {
            printf("\nVoce escolheu a Opcao 2!");
        }
        else if(opcao == 3)
        {
            printf("\nSaindo...\n");
        }
        else
        {
            printf("\nOpcao invalida! Escolha opcao valida!\n");
        }

    } while (opcao != 3);
    //ficará em loop se usuario digitar qualquer coisa diferente de 3
    //quando usuário digitar 3, opcao != 3 dará false e ai sai do loop!
    

    return 0;
}
