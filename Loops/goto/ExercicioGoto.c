/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int contador = 1;

inicio_loop: //label (rótulo)
    printf("\nNumero: %d\n", contador);
    contador++;
    //Se numero for menor ou igual a 5 volte (vá para go to)
    //inicio_loop
    if(contador <= 5)
    {
        goto inicio_loop;
    }

    return 0;
}
