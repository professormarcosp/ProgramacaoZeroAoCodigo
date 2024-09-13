/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

/*Crie um programa em C que imprima os números de 10 a 1 em ordem decrescente usando o comando de loop for
// ATalho CTRL + B e //Atalho CTRL + '
*/
#include <stdio.h>

int main()
{
    //Para num de 10 até 1 imprima cada numero
    for(int num = 10; num >= 1; num--)
    {
        printf("%d ", num);
    }
       
    return 0;
}
