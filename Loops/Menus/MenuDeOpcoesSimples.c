/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    do
    {
        printf("\n1. Opcao 1\n");
        printf("\n2. Opcao 2\n");
        printf("\n3. Opcao 3\n");
        printf("\n4. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            printf("\nVoce escolheu a opcao 1\n");
        }
        else if (opcao == 2)
        {
            printf("\nVoce escolheu a opcao 2\n");

        }
        else if (opcao == 3)
        {
            printf("\nVoce escolheu a opcao 3\n");
        }
        else if (opcao == 4)
        {
            system("CLS || Clear"); //CLS para windows e Clear para UNIX_LIKE (LINUX, MAC)
            printf("\nSaindo...\n");
            
        }
        else
        {
            printf("\nOpcao Invalida. Tente novamente\n");
        }
        
    } while (opcao != 4);
    

    return 0;
}
