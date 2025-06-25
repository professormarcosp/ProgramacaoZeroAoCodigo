/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char letra = 'A';
    char str[] = "A";

    printf("Tamanho de 'A': %zu bytes\n", sizeof(letra) );
    printf("Tamanho de \"A\": %zu bytes\n", sizeof(str) );

    

    return 0;
}
