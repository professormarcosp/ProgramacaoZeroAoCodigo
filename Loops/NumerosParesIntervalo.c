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
    int i = 0;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);
    /*Você quer checar os numeros pares de zero até numero digitado
    criado variavel i que começa exatamente em zero e vai até numero no loop
    exemplo usuário digita 6 
    começa 0 <= 6, verdadeiro e ai vai incrementando i
    1 <= 6 (V)
    2<= 6 (V)
    2<= 6 (V)
    3<= 6 (V)
    4<= 6 (V)
    5<= 6 (V)
    6<= 6 (V)
    7<= 6 (FALSE e para loop)*/
    while (i <= numero)  
    {
        if (i % 2 == 0) // aqui verifica de i é par e coloca na tela
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
