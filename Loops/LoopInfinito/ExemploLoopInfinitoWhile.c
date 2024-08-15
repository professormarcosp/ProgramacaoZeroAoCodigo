/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int numero = 0;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    while (true)
    {
        printf(" Loop Inifinito com while ");

        if (numero == 100)
            break;
        
        numero++; // precisa incrementar numero para atingir condição de parada
    }

    return 0;
}
