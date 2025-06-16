/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#define TAMANHO_VETOR(vetor) (sizeof (vetor) / sizeof(vetor[0]))
/*Ou seja se aparecer TAMANHO_VETOR(vetor) em meu código, por favor
pre-processador subistitua no código por 
(sizeof (vetor) / sizeof(vetor[0])) */
int main()
{
    int vetor_qualquer[] = {1, 2, 3, 4, 5};
    int tamanho = TAMANHO_VETOR(vetor_qualquer);

    printf("Tamanho do vetor: %d \n", tamanho);

    return 0;
}
