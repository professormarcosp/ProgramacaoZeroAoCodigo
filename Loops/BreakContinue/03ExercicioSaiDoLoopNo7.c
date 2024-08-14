/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            continue;
        }
    
    printf("\nValor atual: %d", i);
    //o for declarou i logo o escopo de  i está dentro do for
    //aqui coloquei printf dentro do loop for logo i está acessível
    //a variável i só estará acessivel dentro deste escopo dela
    }
    //agora esta ok pois printf está dentro do loop for e
    //dentro do escopo da variável i
    return 0;
}
