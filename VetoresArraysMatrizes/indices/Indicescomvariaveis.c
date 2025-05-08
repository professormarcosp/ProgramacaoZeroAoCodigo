/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int numeros[] = {100, 200, 300, 400, 500};

    int indice1 = 2;
    int indice2 = 4; //dará erro
    
    printf("\n Elemento no Indice %d: %d\n", indice1, numeros[indice1]); // 2
    printf("\n Elemento no Indice %d: %d\n", indice2, numeros[indice2]); // 2


    return 0;
}

