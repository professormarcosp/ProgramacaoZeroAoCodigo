/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int vetor[5] = {10, 20, 30, 40, 50};

    printf("Elemento na posicao 0: %d\n", vetor[0]);
    vetor[2] = 100; //modificacao
    printf("Elemento na posicao 2: %d\n", vetor[2]);
    
    return 0;
}
