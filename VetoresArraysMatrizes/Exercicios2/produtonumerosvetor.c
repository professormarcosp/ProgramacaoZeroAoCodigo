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
    int numeros[] = {1, 2, 3, 4, 5};
    int i = 0;
    int produto = 1;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    do
    {
        produto *= numeros[i]; // produtos = produtos * numeros[i]
        i++;

    } while (i < 5);

    printf("\nO produto dos elementos do vetor eh: %d", produto);
    

    return 0;
}
