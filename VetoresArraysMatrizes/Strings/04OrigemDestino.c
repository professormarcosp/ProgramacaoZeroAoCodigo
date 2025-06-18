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
    char origem[10] = "Brasil";
    char destino[10];

    //destino = origem;
    //erro: Arrays não aceitam atribuição direta!
    strcpy(destino , origem);
    //ATENÇÂO! Copia origem em destino. Primeiro o local 
    //para onde a string origem sera copiada e depois de onde será
    //copiada

    printf("\nDestino: %s", destino);

    return 0;
}
