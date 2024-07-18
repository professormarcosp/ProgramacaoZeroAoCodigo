/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int contador = 10;
    //contagem regressiva começa com 10

    //enquanto contador for maior ou igual a zero!
    //pois contagem regressiva termina em zero
    while (contador >= 0)
    {
        printf("%d ", contador);
        contador-- ;
    }

    printf("\nFIM!");

    return 0;
}
