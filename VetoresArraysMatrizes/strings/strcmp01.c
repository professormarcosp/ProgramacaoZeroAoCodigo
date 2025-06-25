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
    char str1[] = "abc";
    char str2[] = "abb";

    int resultado = strcmp(str1, str2);

    if(resultado == 0) // se o resultado for zero, significa que as strings são iguais
    {
        printf("\nAs strings sao iguais. \n");
    }
    else // se for diferente de zero significa que as strings são diferentes, 
    //mas além disso, podem ser maior ou menor que a outra string e para isso
    //vamos analisar com  dois if < 0 e if > 0 
    {
        printf("\nAs strings sao diferentes!\n");
    
        if (resultado < 0)
        {
            printf("\n%s eh menor que %s \n", str1, str2);
        }
        else //só sobra a possibilidade resultado > 0
        {
            printf("\n%s eh maior que %s", str1, str2);
        }
    }

    return 0;
}
