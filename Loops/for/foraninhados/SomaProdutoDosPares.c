/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int i, j, n, soma = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if (i == n && j == n) //ultimo elemento
                printf("%d*%d = ",i, j);
            else 
                printf("%d*%d + ",i, j); //demais elementos
            
            soma = soma + (i * j);
        }
    }

    printf("%d\n", soma);

    return 0;
}
