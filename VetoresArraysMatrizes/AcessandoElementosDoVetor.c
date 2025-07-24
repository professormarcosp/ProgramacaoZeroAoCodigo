/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int numeros[5] = {5, 10, 15, 20, 25};

    printf("\n ----- Exercicio 1: acessando elementos ----");
    for (size_t i = 0; i < 5; i++)
    {
        printf("\nIndice %zu: %d", i, numeros[i]);
    }

    return 0;
}
