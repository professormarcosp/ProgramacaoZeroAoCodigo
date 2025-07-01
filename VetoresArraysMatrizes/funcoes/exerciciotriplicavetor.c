/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

#define TAMANHO 5

void imprime_vetor(int arr[])
{
    int i;
    for(i = 0; i < TAMANHO; i++)
    {
        printf("\nElemento %d: %d\n", i, arr[i]);
    }
}

void triplica_se_impar(int arr[])
{
    int i;

    for(i = 0; i < TAMANHO; i++)
    {
        if(arr[i] % 2 != 0)
        {
            arr[i] = arr[i] * 3;
        }
    }
}

int main()
{
    int vetor[TAMANHO] = {11, 22, 33, 44, 55};

    printf("\nValores originais do vetor: \n");
    imprime_vetor(vetor);

    triplica_se_impar(vetor);

    printf("\nValores do vetor apos a modificacao (apenas impares triplicados): \n");
    imprime_vetor(vetor);

    return 0;
}
