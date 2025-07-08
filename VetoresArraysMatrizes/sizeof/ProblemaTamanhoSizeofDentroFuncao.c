/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

void processa_vetor(int arr[]);

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};
    int num_elementos = sizeof(vetor) / sizeof(vetor[0]);
    printf("\nNumero de Elementos do vetor: %d", num_elementos);
    // aqui dará certo pois sizeof(vetor) de fato calcula a quantidade de
    // bytes de todo o vetor e não apenas a quantidade de bytes de um endereço
    // de um vetor
    processa_vetor(vetor);

    return 0;
}

// A função recebe o endereço do array que é um ponteiro
// e neste caso tem 8 bytes
// sizeof(arr[0]) retorna 4 bytes que o tamanho de um inteiro
//  8/2 dá 2 e com isso não informa o numero de elementos do vetor
// pois dentro função arr é um endereço para o array vetor
void processa_vetor(int arr[])
{
    int num_elementos = sizeof(arr) / sizeof(arr[0]);

    printf("\n\n na funcao: Numero de elementos (dentro da funcao): %d\n", num_elementos);

    for (int i = 0; i < num_elementos; i++)
    {
        printf("Elemento %d: %d\n", i, arr[i]);
    }
}
