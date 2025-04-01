/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    // declaração do array unidimensional(vetor) com 10 posições
    int idades[10] = {12, 23, 36, 14, 59, 65, 82, 0, 2, 45};

    //exibindo os valores usando um loop
    for (int i = 0; i < 10; i++)
    {
        printf("\nIdade %d: %d", i + 1, idades[i]);
    }

    return 0;
}
