/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numero = -1;
    int acumulador = 0; //crucial iniciar variavel acumuladora

    while (numero != 0)
    {
        printf("\nDigite um numero inteiro positivo (0 para sair): ");
        scanf("%d", &numero);

        acumulador += numero; //o mesmo que acumulador = acmulador + numero;
        printf("\nSoma acumulada: %d", acumulador);
    }

    printf("\nValor final acumulado: %d", acumulador);

    return 0;
}
