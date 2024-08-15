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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    for(int i = 1; ; i++) //sem a condição de parada, ficará em loop infinito
    {
        printf(" %d ", i);

        if( i == 50)
        {
            break; //sai do loop quando i for 50
        }
    }

    printf("\nLoop encerrado...\n");
    return 0;
}
