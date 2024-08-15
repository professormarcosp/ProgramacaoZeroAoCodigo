/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    for (int i = 0;;i++) // aqui não tem condição de parada
    {
        printf(" Loop Infinito usando for - ");

        if (i == 30) // esta é a condição de parada
        {
            break;
        }
            
    }

    return 0;
}
