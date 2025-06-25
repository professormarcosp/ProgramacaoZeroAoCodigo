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
    char palavra1[50] ;
    char palavra2[50] ;
    char palavra3[50] ;

    printf("\n Digite a primeira palavra: ");
    fgets(palavra1, sizeof(palavra1), stdin);
    printf("\n Digite a segunda palavra: ");
    fgets(palavra2, sizeof(palavra2), stdin);
    printf("\n Digite a terceira palavra: ");
    fgets(palavra3, sizeof(palavra3), stdin);

    if( strcmp(palavra1, palavra2) == 0 )
    {
        printf("\nAs palavras %s e %s sao iguais", palavra1, palavra2);
    }
    else
    {
        printf("\nAs palavras %s e %s sao diferentes", palavra1, palavra2);
    }

    if( strcmp(palavra1, palavra3) == 0 )
    {
        printf("\nAs palavras %s e %s sao iguais", palavra1, palavra3);
    }
    else
    {
        printf("\nAs palavras %s e %s sao diferentes",palavra1, palavra3);
    }

    return 0;
}
