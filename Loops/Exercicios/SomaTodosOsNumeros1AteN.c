/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int N, soma = 0, i = 1;
    printf("Digite um numero N: ");
    scanf("%d", &N); // recebe um  numero N

    while (i <= N) // enquanto variavel controladora for menor que N
    {
        soma += i; // some i a soma para acumular os valores de cada
        //numero de i até N
        //exemplo: N = 5
        // soma = soma + 1
        //soma = 1 + 2
        //soma = 3 + 3
        //soma = 6 + 4
        //soma = 10 + 5 = 15
        i++;
    }

    printf("A soma dos numeros de 1 ate %d eh: %d\n", N, soma);

    return 0;
}
