/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char texto[81];
    int i;
    //contadores que precisam ser inicializados
    int total_letras = 0;
    int total_espacos = 0;
    int total_numeros = 0;
    int total_simbolos = 0;

    printf("\nDigite um texto (max 80 caracteres): ");
    scanf("%80[^\n]", texto);

    //percorre a string que é um vetor de caracteres terminado em '\0'
    //vai do índice 0 até chegar ao final da string '\0'
    for(i = 0; texto[i] != '\0'; i++)
    {
        /*aqui precisamos primeiro saber se é letra e podemos usar lógica
        sera letra se for entre A e Z ou se for entre a e z
        você pode fazer isso com 
        ((texto[i]>='A' && texto[i] <= 'Z') || (texto[i]>='a' && texto[i] <= 'z'))*/
        if((texto[i]>='A' && texto[i] <= 'Z') || (texto[i]>='a' && texto[i] <= 'z'))
        {
            total_letras++; //é letra pois é A ...Z ou a ... z
        }
        else if (texto[i] == ' ') // espaço
        {
            total_espacos++;
        }
        else if(texto[i] >= '0' && texto[i] <= '9') //entre 0 e 9
        {
            total_numeros++;
        }
        else // se não é letra nem espaço e nem números, só pode ser símbolos
        {
            total_simbolos++;
        }
                
    } //fim for

    //saida
    printf("\n Total Geral de Caracteres: %d", i); //i conta quanto caracteres tem na string
    printf("\n Total de letras: %d", total_letras);
    printf("\n total de espacos: %d", total_espacos);
    printf("\n Total de numeros: %d", total_numeros);
    printf("\n Total de Simbolos especiais: %d", total_simbolos);

    return 0;
}
