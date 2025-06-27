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
    char texto[100];

    printf("\nDigite um texto: ");
    scanf(" %99[^\n]", texto);

    printf("\nO texto possui %zu caracteres. ", strlen(texto));

    return 0;
}
