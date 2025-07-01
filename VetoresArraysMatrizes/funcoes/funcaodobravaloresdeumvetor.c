
/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

#define TAMANHO 5

void imprime_vetor(int arr[]);
void multiplicapordois(int arr[]);

int main()
{
    int vetor[TAMANHO] = {10, 20, 30, 40, 50};

    printf("\nValores originais do vetor\n");
    imprime_vetor(vetor);

    //chama a fucao que modifica o vetor
    multiplicapordois(vetor);


    printf("\nValores do vetor apos modificacao:\n");
    imprime_vetor(vetor);


    return 0;
}

void imprime_vetor(int arr[])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Elementos %d: %d\n", i, arr[i]);
    }
}

void multiplicapordois(int arr[])
{
    for(int i = 0; i < TAMANHO; i++)
    {
        arr[i] = arr[i] * 2;
    }
}
