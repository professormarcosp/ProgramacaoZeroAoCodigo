/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

void imprime_vetor(int arr[], int tamanho);
void dobra_pares(int arr[], int tamanho);

int main()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    int vetor[] = {2, 3, 4, 5};
    int tamanho = 4;

    printf("\nValores originais do vetor: \n");
    imprime_vetor(vetor, tamanho);

    dobra_pares(vetor, tamanho);

    printf("Valores do vetor após a modificação (apenas pares dobrados): \n");
    imprime_vetor(vetor, tamanho);

    return 0;
}

void imprime_vetor(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("\nElemento %d: %d\n", i, arr[i]);
    }
}

void dobra_pares(int arr[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (arr[i] % 2 == 0) // se for para dobra valor do elemento do vetor
        {
            arr[i] = arr[i] * 2;
        }
    }
}
