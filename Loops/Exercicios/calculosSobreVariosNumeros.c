/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int numero, soma = 0, quantidade = 0, soma_pares = 0, quantidade_pares = 0;
    int maior;
    int menor;

    while (1)
    {
        printf("\nDigite um numero (0 para finalizar): ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        if (quantidade == 0) // no primeiro numero maior e menor será numero digitado
        {
            menor = maior = numero;
        }
        soma += numero;
        quantidade++;

        if (numero > maior)
            maior = numero;

        if (numero < menor)
            menor = numero;
        
        if (numero % 2 == 0)
        {
            soma_pares += numero;
            quantidade_pares++;
        }
    } // fim loop while

    if (quantidade > 0)
    {
        float media;
        media = (float)soma / quantidade;
        printf("\nSoma dos numeros: %d\n", soma);
        printf("Quantidade de numeros: %d\n", quantidade);
        printf("Media dos numeros: %.2f\n", media);
        printf("Maior Numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);

        if (quantidade_pares > 0)
        {
            float media_pares;
            media_pares = (float)soma_pares / quantidade_pares;
            printf("Media dos numeros pares: %.2f\n", media_pares);
        }
        else 
        {
            printf("\nNenhum numero para foi digitado. \n");
        }
    } 
    else
    {
        printf("\nNenhum numero foi digitado.\n");
    }

    return 0;
}
