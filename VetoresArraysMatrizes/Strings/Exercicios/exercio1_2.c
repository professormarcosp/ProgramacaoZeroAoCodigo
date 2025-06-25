/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    char texto[100];
    int contador = 0;

    printf("\nDigite uma string: ");
    scanf(" %[^\n]", texto);
    //lê até encontrar '\n' e ignora espaços iniciais

    while (texto[contador] != '\0')
    {
        contador = contador + 1;
    }

    printf("\nQuantidade de caracteres: %d\n", contador);

    return 0;
}
