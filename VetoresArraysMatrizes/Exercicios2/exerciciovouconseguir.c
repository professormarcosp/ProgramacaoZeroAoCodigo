/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char frase[] = "Vou Conseguir!";

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    for (size_t i = 0; frase[i]; i++)
    {
        printf("%c", frase[i]);
    }

    printf("\n");
    

    return 0;
}
