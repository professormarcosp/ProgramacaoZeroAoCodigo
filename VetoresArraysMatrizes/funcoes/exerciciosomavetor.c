/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <stdlib.h>

void somar_valor(int vetor[], int valor)
{
    for (int i = 0; i < 5; i++)
    {
        vetor[i] = vetor[i] + valor;
    }
}

int main()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    int numeros[] = {1, 2, 3, 4, 5};
    int valor_soma;
    
    printf("\nDigite um valor para somar a cada elemento do vetor: ");
    scanf("%d", &valor_soma);

    somar_valor(numeros, valor_soma);

    printf("\nVetor apos a soma: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }
    
    return 0;
}
