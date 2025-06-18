/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <string.h> 
//para usar a função strcpy()

int main()
{
    char fruta[15];
    strcpy(fruta, "Banana");

    printf("\nFruta: %s", fruta);

    return 0;
}
