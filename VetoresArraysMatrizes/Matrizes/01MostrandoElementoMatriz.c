/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int notas[2][3] = {
        {7, 8, 9},
        {6, 5, 4}};

    printf("\nValor desejado: %d\n", notas[1][2]);

    return 0;
}
