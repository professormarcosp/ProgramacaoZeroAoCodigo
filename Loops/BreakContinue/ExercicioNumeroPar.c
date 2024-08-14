/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int quantidade_numeros = 0;

    printf("\nDigite numeros para encontrar o primeiro numero par: \n");

    while (1)
    {
        #ifdef _WIN32  // se for windows execute cls
            system ("cls"); //mas só funciona windows
        #else // senão execute clear que funciona em linux e macOS
            system("clear");
        #endif


        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        quantidade_numeros++;  // já adiciona 1 a quantidade de numeros digitados

        if (numero % 2 == 0)
        {
            printf("\nNumero par encontrado: %d", numero);
            break; // se encontrou o numero para sai do loop
        }
    }

    printf("\nTotal de numeros digitados: %d", quantidade_numeros);

    return 0;
}
