/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <math.h> //para usar função pow

#define TAMANHO 5

//Protótipos das funções
void preencher_vetor(double vetor[], int tamanho);
void calcular_potencias(double origem[], double destino[], int tamanho);
void exibir_valores(double vetor_numero[], double vetor_potencia[], int tamanho);

int main()
{
    double vetor_numero[TAMANHO];
    double vetor_potencias[TAMANHO];
    
    preencher_vetor(vetor_numero, TAMANHO);
    calcular_potencias(vetor_numero, vetor_potencias, TAMANHO);
    exibir_valores(vetor_numero, vetor_potencias, TAMANHO);

    return 0;
}

void preencher_vetor(double vetor[], int tamanho) 
{
    for(int i = 0; i < tamanho; i++)
    {
        printf("\nDigite o numero %d: ", i + 1);
        scanf("%lf", &vetor[i]);
    }

}

void calcular_potencias(double origem[], double destino[], int tamanho)
{
    for(int i = 0; i < tamanho; i++)
    {
        destino[i] = pow(origem[i], 2);
    }

}

void exibir_valores(double vetor_numero[], double vetor_potencias[], int tamanho)
{
    int i;

    printf("\nNumeros originais e seus quadrados: \n");
    printf("[");
    for(i = 0; i < tamanho; i++)
    {
        printf("%.0f", vetor_numero[i]);
        if(i < tamanho - 1)
        {
            printf(", ");
        }
    }
    printf("] =>");

    printf("[");
    for(i = 0; i < tamanho; i++)
    {
        printf("%.0f", vetor_potencias[i]);
        if(i < tamanho - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");

}

