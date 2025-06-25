/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/



#include <stdio.h>
#include <string.h>

int main()
{
    char origem[50] = "Bom Dia, ";
    char destino[50] = "mundo!";
    char resultado[100];

    //copia a string "origem" para resultado
    strcpy(resultado, origem);
    printf("\nstring resultado tem agora o texto: %s", resultado);

    //concatena a string "destino" ao final de resultado
    strcat(resultado, destino);

    printf("\nResultado final: %s\n", resultado);

    return 0;
}
