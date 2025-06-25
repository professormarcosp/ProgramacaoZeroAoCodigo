/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    char nome[50];

    printf("Digite seu nome: ");
    scanf(" %49[^\n]", nome); // limita a 49 caracteres e lê espaços
    //fgets(nome, 50, stdin);

    printf("Nome Digitado: %s", nome);

    return 0;
}
