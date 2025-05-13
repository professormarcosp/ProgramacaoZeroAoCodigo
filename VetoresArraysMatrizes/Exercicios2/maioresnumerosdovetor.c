/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[6] = {10, 35, 4, 50, 22, 8};
    int i = 1;
    int maior = numeros[0];
    //no inicio precisamos de um valor inicial de comparação
    //neste caso maior será o primeiro elemento do vetor
    //a ideia é percorrer o vetor e ir comparando o valor 
    //do numero de cada indice do vetor com maior.
    //se o numero[i] for maior que a veriavel maior entao o 
    //novo valor de maior passa a ser numeros[i]
    //logo maior = numero[i] apenas se numeros[i] > maior

    while (i < 6)
    {
        if(numeros[i] > maior)
        {
            maior = numeros[i];
        }
        i++;
    }

    printf("\nO maior numero do vetor eh: %d", maior);

    return 0;
}
