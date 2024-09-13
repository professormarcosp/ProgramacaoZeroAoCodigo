/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

/*Calcule a soma dos números de 1 a 100.*/
//Acumulador será soma! Irá receber a soma de 1 a 100 acumulando
//cada numero. Logo será soma = soma + numero ou soma += numero
//Para numero de 1 até 100 some o valor do numero atual a variavel soma!

#include <stdio.h>

int main()
{
    int soma = 0; //Importante iniciar acumulador!!!
       
    for (int numero = 1; numero <= 100; numero++)
    {
        soma += numero;
    }

    printf("\nA soma dos numeros de 1 a 100 eh: %d", soma);

    return 0;
}
