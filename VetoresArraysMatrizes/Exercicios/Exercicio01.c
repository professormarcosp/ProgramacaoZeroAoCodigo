/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
EXERCÍCIO: Inicialização Completa: Declare um vetor de tamanho 7, inicialize com o valores: a, b, c, d, e, f, g e mostre na tela
Obs: Será um vetor de char logo os caracteres precisam estas entre aspas simples na inicialização: 
'a', 'b', 'c', 'd', 'e', 'f', 'g'
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    char vetor[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};

    printf("\nValores do Vetor:");
    
    printf("[");
    for(int i = 0; i < 7; i++)
    {
        (i ==6) ? printf(" %c ", vetor[i]) : printf(" %c, ", vetor[i]);
    }
    printf("]");

    return 0;
}
