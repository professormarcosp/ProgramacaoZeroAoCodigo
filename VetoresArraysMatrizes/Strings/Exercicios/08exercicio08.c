/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[50], palavra2[50];

    printf("\nDigite a primeira palavra: ");
    scanf("%49s", palavra1);

    printf("\nDigite a segunda palavra: ");
    scanf("%49s", palavra2);

    if(strcmp(palavra1, palavra2) == 0)
    {
        printf("\nAs palavras sao iguais. ");
    }
    else
    {
        printf("\nAs Palavras sao diferentes. ");
    }

    return 0;
}
