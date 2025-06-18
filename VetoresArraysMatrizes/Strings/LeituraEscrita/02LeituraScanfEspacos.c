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

    printf("\nDigite seu nome: ");
    scanf("%[^\n]", nome); //lembre-se string é vetor
    //e vetor não coloca &nome apenas o nome do vetor!
    printf("Nome Digitado: %s\n", nome);

    return 0;
}
