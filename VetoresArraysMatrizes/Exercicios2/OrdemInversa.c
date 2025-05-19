/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[5] = {5, 10, 15, 20, 25};

    printf("\nArray em ordem inversa:\n");

    //Começa no último indice e vai decrementando até chegar 
    //índice zero.
    //desta forma serão colocados na tela primeiro
    //numeros[4] depois numeros[3], numeros[2], numeros[1]
    //e para numeros[0]
    printf("[");
    for(int i = 4; i >= 0; i--)
    {
        printf(" %d ", numeros[i]);
    }

    printf("]");
    printf("\n");

    return 0;
}
