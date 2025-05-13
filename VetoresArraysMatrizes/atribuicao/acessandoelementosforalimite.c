/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    vetor[2] = 99;

    printf("\nElementos do array: \n");
    for(int i = 0; i < 10; i++)
    {
        printf("\nElemento %d:  %d", i, vetor[i]);
    }
    printf("\n\nTentando acessar um indice fora limite do array");
    printf("\nElemento 100: %d", vetor[10]); 
    //acesso fora do limite pois indices vai de 0 ate 9

    return 0;
}
