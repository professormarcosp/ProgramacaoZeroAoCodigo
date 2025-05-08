/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    int i = 0; //variavel controle do loop para iterar pelos array

    printf("\nIterando vetor com while");
    while (i <= 4) // condicao de parada, poderia ser i <= 4 pois último índice é 4
    {
        printf("\nElemento %d: %d", i, numeros[i]);
        i++; // incremento
    }


    return 0;
}
