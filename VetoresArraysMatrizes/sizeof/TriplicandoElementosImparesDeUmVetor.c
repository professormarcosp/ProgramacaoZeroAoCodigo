/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

void imprime_vetor(int arr[]);
void triplica_se_impar(int arr[]);

int main()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

    int vetor[TAMANHO] = {11, 22, 33, 44, 55};

    printf("\nVETOR ORGINAL: ");
    imprime_vetor(vetor);
    triplica_se_impar(vetor);

    printf("\nVETOR ELEMENTOS ÍMPARES TRIPLICADOS: ");
    imprime_vetor(vetor);

    return 0;
}

void imprime_vetor(int arr[])
{
    printf("[");
    for (int i = 0; i < TAMANHO; i++)
    {
        // quando ir atingir o ultimo indice que é 4 não colocar virgula
        //  como tamanho é 5 indices vão de 0 até 4 por isso TAMANHO -1
        (i == TAMANHO - 1) ? printf("%d", arr[i]) : printf("%d,", arr[i]);
    }
    printf("]");
}

void triplica_se_impar(int arr[])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        if (arr[i] % 2 != 0) // se impar
        {
            arr[i] = arr[i] * 3;
        }
    }
}
