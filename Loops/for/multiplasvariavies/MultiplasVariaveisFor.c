/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C*/
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int i, j;
    printf("\nExemplo de incremento e decremento: \n");

    for(i = 0, j = 10; i < 10; i++, j--)
    {
        printf("\ni: %d, j: %d", i, j);
    }

    printf("\n");

    return 0;
}
