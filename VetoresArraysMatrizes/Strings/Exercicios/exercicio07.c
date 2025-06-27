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
    char texto1[100], texto2[50];

    printf("\nDigite a primeira parte do texto: ");
    scanf(" %99[^\n]", texto1);
    getchar(); // limpar o buffer do teclado

    printf("\nDigite a segunda parte do texto: ");
    scanf(" %99[^\n]", texto2);
    getchar(); // limpar o buffer do teclado

    strcat(texto1, "");
    strcat(texto1, texto2);

    printf("\nTexto concatenado: %s", texto1);

    return 0;
}
