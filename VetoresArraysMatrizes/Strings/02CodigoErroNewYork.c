/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    //char cidade[20] = "New York";
    char cidade[20] = {'N','e','w',' ','Y','o','r','k','\0'};

    printf("\nCidade: %s", cidade);

    return 0;
}
