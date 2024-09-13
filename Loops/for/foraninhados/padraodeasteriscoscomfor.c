/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int i, j, n;

    printf("\nDigite o numero de linhas e colunas: ");
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
