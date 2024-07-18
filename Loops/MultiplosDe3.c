/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numero = 10;

    while (numero <= 300) //analisa de 10 até chegar em 300
    {
        if (numero % 3 == 0) // se for multiplo de 3 imprimi o numero na tela
        {
            printf("%d ", numero);
        }
        numero++ ; // numero começa em 10 e é incrementado a cada iteração
        //cada passada pelo loop
    }

    return 0;
}
