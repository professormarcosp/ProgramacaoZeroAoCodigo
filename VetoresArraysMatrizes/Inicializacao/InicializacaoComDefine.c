/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

#define TAMANHO 10

int main()
{
    int numeros[TAMANHO] = {1, 2, 3};
    for (int i = 0; i < TAMANHO; i++)
    {
        printf(" [%d] = %d ", i, numeros[i]);
    }


    return 0;
}
