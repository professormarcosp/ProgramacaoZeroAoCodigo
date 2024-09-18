/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numero_secreto = 7;
    int tentativa;

    do 
    {
        printf("Tente advinhas o numero secreto (entre 1 e 10): ");
        scanf("%d", &tentativa);

        if(tentativa == numero_secreto)
        {
            printf("Parabens, voce acertou!\n");
        }
        else
        {
            printf("Tente Novamente!\n");
        }
    } while (tentativa != numero_secreto);

    return 0;
}
