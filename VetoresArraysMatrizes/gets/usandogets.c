/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char senha[10];

    printf("Digite sua senha");
    gets(senha);
    /*call to 'gets' declared with attribute warning: Using gets() 
    is always unsafe - use fgets() instead [-Wattribute-warning]gcc
    chamada para 'gets' declarada com aviso de atributo: usar gets() 
    é sempre inseguro - use fgets() em vez disso [-Wattribute-warning] gcc
    */
    printf("\nSenha Digitada: %s \n", senha);

    return 0;
}
