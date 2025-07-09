/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

#define TAMANHO 5

void dobra_valores(int arr[]); //recebe o enderço do vetor e não o vetor inteiro
void imprime_vetor(int arr[]);

int main()
{
    int vetor[TAMANHO] = {10, 20, 30, 40, 50};

    printf("Valores originais: \n");
    imprime_vetor(vetor);

    dobra_valores(vetor);

    printf("\nValores dobrados: \n");
    imprime_vetor(vetor);

    return 0;
}

// como o vetor será enviado para função como o endereço de memória dele
// significa que esta função irá conseguir modificar o vetor original
// dobrando o valor dos elementos
void dobra_valores(int arr[])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

void imprime_vetor(int arr[])
{
    for (int i = 0; i < TAMANHO; i++)
    {
        printf("Elemento %d: %d\n", i, arr[i]);
    }
}
