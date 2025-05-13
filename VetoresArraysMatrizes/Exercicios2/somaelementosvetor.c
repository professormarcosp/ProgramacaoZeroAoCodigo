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
    int vetor[5] = {10, 20, 30, 40, 50};
    int soma = 0;
    int i = 0;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("\nVetor: ");
    printf("[ ");
    while (i < 5)
    {
        printf("%d ", vetor[i]);
        soma += vetor[i]; // ou soma = soma + vetor[i];
        i++;
    }
    printf("]");

    printf("\nSoma dos elementos: %d", soma);

    return 0;
}
