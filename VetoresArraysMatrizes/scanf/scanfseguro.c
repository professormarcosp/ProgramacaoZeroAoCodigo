/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char nome[21];

    printf("\nDigite seu nome (max 20 caracteres): ");
    scanf("%20s", nome); //lê no máximo 20 caracteres 
    //(deixa espaço para 0 '\0' pois são 21 char)

    printf("\nNome Digitado: %s\n", nome);

    return 0;
}
