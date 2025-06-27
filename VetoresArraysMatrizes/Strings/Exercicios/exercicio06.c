/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    char texto[100];
    int contador = 0;

    printf("\nDigite um texto: ");
    scanf(" %99[^\n]", texto);

    while(texto[contador]) //percorre o vetor da string até encontrar nulo '\0'
    {
        contador++; // incrementa contador enquanto for diferente de nulo o caractere
    }
    /*observe que contador começa em zero e vai
    incrementado em 1 logo além de contar o numero
    de caracteres serve como indice para varrer vetor*/

    /*while(texto[contador]) apenas funciona
    pois em C qualquer coisa diferente de zero é
    avalidado como true em expressoes lógicas
    e zero é falso. Logo o loop ira continuar
    ao encontrar caracteres que tem valor ASCII
    mas ao encontrar '\0' que é considerado zero
    /o loop será encerrado. logo funciona!*/

    printf("\nO texto possui %d caracteres. \n", contador);

    return 0;
}
