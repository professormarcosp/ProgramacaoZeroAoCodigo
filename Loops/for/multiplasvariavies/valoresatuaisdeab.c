/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int a, b;

    printf("Decremento e Incremento\n");

    for(a = 5, b = 1; a >= 0; a--, b += 3)
    {
        printf("a: %d, b: %d\n",a ,b);
    }

    return 0;
}
