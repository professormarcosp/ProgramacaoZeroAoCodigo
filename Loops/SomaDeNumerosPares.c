/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numero = 0;
    int soma = 0; //crucial!

    while (numero <= 100)
    {
        if (numero % 2 == 0)
        {
            soma += numero;
        }
        numero++;
    }

    printf("\nSoma dos numeros pares entre 2 e 100: %d\n", soma);

    return 0;
}
