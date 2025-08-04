
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
    char string1[50];
    char string2[50];
    char string_concatenada[100]; // deve ter espaço suficiente para as duas juntas

    // Inicializa a string como vazia (terminada com '\0')
    string_concatenada[0] = '\0';

    printf("\nDigite a primeira string (max 49 caracteres): ");
    scanf(" %49[^\n]", string1);
    getchar(); // limpa o \n do buffer

    printf("\nDigite a segunda string (max 49 caracteres): ");
    scanf(" %49[^\n]", string2);
    getchar(); // limpa o \n do buffer

    // Concatena a string1 com string_concatenada e depois
    // Concatena string 2 com a string_concatenada que já está com a string1
    strcat(string_concatenada, string1);
    strcat(string_concatenada, string2);

    printf("\nResultado da Concatenacao da string1: %s com a string2: %s eh: %s",
           string1, string2, string_concatenada);

    return 0;
}
