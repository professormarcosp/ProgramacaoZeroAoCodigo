
#include <stdio.h>

#define TAMANHO 10

int main()
{
    int vetor[TAMANHO];
    printf("Valores do vetor");
    printf("[");
    for(int i = 0; i < TAMANHO; i++)
    {
        vetor[i] = 0;
        i == (TAMANHO - 1) ? printf(" %d ", vetor[i]): printf(" %d, ", vetor[i]);
    }
    printf("]");

    return 0;
}
