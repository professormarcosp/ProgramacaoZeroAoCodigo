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
    char str[] = "Hello, World!";
    size_t length = strlen(str); // length => Comprimento(Tamanho) em inglês
    /*Em inglês, length significa comprimento, extensão, 
    ou duração, dependendo do contexto
    size é tamanho em inglês mas estamos acostumados e dizer no Brasil
    tamanho de uma string e não comprimento str(string) len(length)*/

    printf("\nO Comprimento da string %s eh: %zu\n", str, length);

    return 0;
}
