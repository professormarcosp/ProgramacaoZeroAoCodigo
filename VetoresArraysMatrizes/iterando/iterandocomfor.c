/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++)
    {
        printf("\nElemento no indice %d: %d", i, numeros[i]);
    }

    return 0;
}
