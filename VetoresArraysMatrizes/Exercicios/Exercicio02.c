/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
Exercício: Inicialização Parcial: Declare um vetor de char de tamanho 6, inicialize apenas as 3 primeiras posições com as 
letras x, y e z e exiba todos os valores do vetor
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vetor[6] = {'x', 'y', 'z', '0', '0', '0'};

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("[");
    for(int i = 0; i < 6; i++)
    {
        printf(" %c ", vetor[i]);
    }
    printf("]");

    return 0;
}
