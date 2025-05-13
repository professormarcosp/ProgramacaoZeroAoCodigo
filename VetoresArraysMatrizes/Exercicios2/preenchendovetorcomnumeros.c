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
    int numeros[10];

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    //preenchendo o vetor os numeros de 1 a 10
    for(int i = 0, j = 0; i < 10; i++)
    {
        numeros[i] = j++;
        // lembre pós-fixado
        //primeiro usa o valor e depois incrementa
    }

    printf("\n---Escrevendo valores ---");
    for (size_t i = 0; i < 10; i++)
    {
        printf("\n Indice %zu: %d", i, numeros[i]);
    }
    

    return 0;
}
