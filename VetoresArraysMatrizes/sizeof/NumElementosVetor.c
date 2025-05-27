/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int vetor[10] = {10,20,30,40,50,60,70,80,90,100};
    int tamanho_em_bytes = sizeof(vetor);
    int num_elementos = sizeof(vetor) / sizeof(vetor[0]);

    /*sizeof(vetor) irá deveolver o tamanho total que o vetor
    ocupa. Como vetor são 10 elementos do tipo int
    e no geral int ocupa 4 bytes logo 10*4 = 40bytes
    Para saber o numero de elmentos basta dividir o valor total
    que o vetor ocupa pelo tamanho de um de seus elementos
    neste caso sizeof(vetor[0]) retorna o tamanho que um dos 
    elementos do vetor ocupa na memoria ram, que neste caso são
    4 bytes. Logo sizeof(vetor) / sizeof(vetor[0]) será
    40bytes/4bytes = 10 elementos*/ 

    printf("[");
    for (size_t i = 0; i < 10; i++)
    {
        printf(" %d ", vetor[i]);
    }
    printf("]");
    

    printf("\nTamanho do array em bytes: %d\n", tamanho_em_bytes);
    printf("Numero de elementos do vetor: %d\n", num_elementos);

    return 0;
}
