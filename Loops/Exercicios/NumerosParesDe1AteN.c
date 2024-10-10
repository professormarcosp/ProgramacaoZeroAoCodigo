/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int i = 1;

    printf("Digite um numero N: ");
    scanf("%d", &N);

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("\nNumeros Pares de 2 ate %d\n", N);
    while (i <= N)
    {
        if( i % 2 == 0)
        {
            printf(" %d ", i);
        }

        i++;
    }

    return 0;
}
