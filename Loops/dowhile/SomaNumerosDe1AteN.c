/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int num, i = 1, soma = 0;

    printf("Insira um numero: ");
    scanf("%d", &num);
// recebe num e vai somar tudo de 1 até este numero
// vai executar enquanto i for menor ou igual ao numero
    do
    {
        soma += i; //soma  = soma + i;
        printf("\ni:%d, num:%d, soma:%d\n", i, num, soma);
        i++;
        

    } while (i <= num);

    printf("A soma dos numeros de 1 a %d eh: %d\n", num, soma);
    
    return 0;
}

