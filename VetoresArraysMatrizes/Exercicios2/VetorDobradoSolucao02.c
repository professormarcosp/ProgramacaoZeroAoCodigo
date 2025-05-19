/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int vetor[6] = {2, 4, 6, 8, 10, 12};
    int i;

    printf("\n Vetor Original: ");
    //primeiro exibir logo o vetor antes da alteração
    for(i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }
    //Agora altera o vetor dobrando seus elementos
    for(i = 0; i < 6; i++)
    {
        vetor[i] = vetor[i] * 2;
    }

    printf("\nVetor com valores dobrados: ");
    for(i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
