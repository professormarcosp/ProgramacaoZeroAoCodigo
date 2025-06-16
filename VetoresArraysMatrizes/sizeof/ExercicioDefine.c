
/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 5

int main()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    
    int numeros[TAMANHO]; // Vetor com tamanho definido pelo define
    int soma = 0;

    //Preenchendo o vetor com valores do usuário
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("\nDigite o elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores do vetor: ");
    printf("[");
    for(int i = 0; i < TAMANHO; i++)
    {
        printf(" %d ", numeros[i]);
        soma += numeros[i]; // acumula a soma dos valores do vetor
    }
    printf("]");

    printf("\nSoma dos elementos: %d", soma);

    return 0;
}
