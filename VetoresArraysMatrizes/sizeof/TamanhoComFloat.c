/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int vetor[5] = {56,231,-7895,0,123} ;
    int tamanho_total_em_bytes;
    int tamanho_elemento_em_bytes;
    int quantidade_elementos;

    tamanho_total_em_bytes = sizeof(vetor);
    tamanho_elemento_em_bytes = sizeof(vetor[0]);
    quantidade_elementos = tamanho_total_em_bytes / tamanho_elemento_em_bytes;

    printf("\nTamanho Total do vetor em Bytes: %d", tamanho_total_em_bytes);
    printf("\nTamanho de cada elemento do vetor em Bytes: %d", tamanho_elemento_em_bytes);
    printf("\nQuantidade de elementos do vetor: %d", quantidade_elementos);

    for (size_t i = 0; i < 5; i++)
    {
        printf("\nIndice %d: valor = %d, endereco memoria = %p", i, vetor[i], (void*)&vetor[i]);
    }
    
    return 0;
}
