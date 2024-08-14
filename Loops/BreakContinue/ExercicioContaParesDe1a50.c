/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    printf("Numeros pares de 1 a 50: "); // antes do loop apenas 1 vez
    for (int i = 0; i <= 50; i++)
    {
        if (i % 2 != 0) // se for impar
        {
            continue; // continue daqui e volte ao inicio do loop
            //ignorando o resto abaixo
        }

        printf(" %d ", i); // assim quando numero for impar
        //este printf não será acionado pois, continue vai
        //voltar ao inicio do loop for ignorando esta instrução
    }

    return 0;
}
