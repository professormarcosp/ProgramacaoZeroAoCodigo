/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 3; i++) // valor de i fica constante em 1 ou 2 ou 3
    {
        for (j = 1; j <= 3; j++) // j vai variar de 1 a 3
        {
            printf("\n(%d, %d)", i, j);
        }
    }

    return 0;
}
