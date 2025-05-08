/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char palavra[] = "Ciencia";
    //como em C falso é zero e qual coisa diferente de zero
    //é verdadeiro podemos usar ao inves de palavra[i] != '\0'
    //apenas palavra[i]
    // O valor de palavra[0] será 'C' que é diferente de zero 
    //pois representa int da tabela ascii
    //palavra[i] irá ser verdadeiro em todos os chars
    //porem quando vier o caractere nulo que encerra a string
    //palavra[i] será zero e zero é falso e assim sai do loop

    printf("\nImprimindo a palavra com for");
    for (size_t i = 0; palavra[i]; i++)
    {
        printf("\n%c", palavra[i]);
    }
    

    return 0;
}
