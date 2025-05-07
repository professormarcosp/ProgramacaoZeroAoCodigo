/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int vetor[10] = {0};

    printf("\nValores do vetor");
    for(int i = 0; i < 10; i++)
    {
        printf(" %d ", vetor[i]);
    }

    return 0;
}
