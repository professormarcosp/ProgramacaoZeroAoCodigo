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
    int soma = 0;

    for (int i = 2; i <= 100; i += 2)
    {
        soma += i;
    }

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("A soma dos numros pares naturais entre 2 e 100 eh: %d\n", soma);

    return 0;
}
