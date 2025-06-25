/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[] = "programacao";//11 sem o '\0'

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("\nA string possui %zu caracteres.", strlen(palavra));
    /*A função strlen retorna o comprimento de uma string, 
    ou seja, o número de caracteres antes do caractere nulo (\0).
    O tipo de retorno da função strlen é size_t
    */

    return 0;
}
