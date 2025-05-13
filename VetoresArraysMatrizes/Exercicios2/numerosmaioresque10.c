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
    int numeros[8] = {5, 12, 3, 18, 25, 7, 11, 30};
    int contador = 0;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    for (int i = 0; i < 8; i++)
    {
        if(numeros[i] > 10)
        {
            contador++;
        }
    }

    printf("\nQuantidade de elementos maiores que 10: %d", contador);

    return 0;
}
