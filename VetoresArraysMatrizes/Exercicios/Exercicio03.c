/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[] = {1, 3, 5, 7, 9};

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("[");
    //aqui num_indices conterá o numero de indices do vetor
    // sizeof(vetor) será no geral 5 x 4 bytes = 20bytes
    //logo será 20/sizeof(int) que será 20/4 = 5
    //como isso temos que o numero de indices são 5
    //desta forma os indices irão de 0, 1, 2, 3 até 4 totalizando cinco
    int num_indices = sizeof(vetor) / sizeof (int);
    for(int i = 0; i < num_indices; i++)
    {
        //aqui precisamos garantir que a virgula não seja colocada quando o
        //indice for o ultimo. O último indice é num_indices -1, neste caso
        //será 5 -1 = 4
        i == (num_indices -1) ? printf(" %d ", vetor[i]) : printf(" %d, ", vetor[i]);
    }
    printf("]");

    return 0;
}
