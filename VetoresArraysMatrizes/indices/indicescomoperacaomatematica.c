/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[] = {10, 20, 30, 40, 50};

    printf("\nElemento no indice 1 + 2: %d\n", numeros[1 + 2]); // 3
    printf("\nElemento no indice 4 - 3: %d\n", numeros[4 - 3]); // 1
    printf("\nElemento no indice 2 * 2: %d\n", numeros[2 * 2 / 4]); // 1

    return 0;
}
