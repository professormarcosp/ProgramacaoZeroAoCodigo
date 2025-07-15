/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

void imprimir_matriz(int matriz[2][3][4], int planos);
int menor_elemento(int matriz[2][3][4], int planos);

int main()
{
    int matriz[2][3][4] = {
        {{1, -23, 40, 14},
         {-5, 100, 7, 56},
         {999, -10, 111, 1112}},
        {{13359, -14, -150, 16},
         {170, 185, 198965, -520},
         {521, 122, -623, -24}}};

    int menor = menor_elemento(matriz, 2);
    printf("Menor Elemento: %d\n", menor);

    imprimir_matriz(matriz, 2);
    return 0;
}

void imprimir_matriz(int matriz[2][3][4], int planos)
{
    for (int i = 0; i < planos; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%8d", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int menor_elemento(int matriz[2][3][4], int planos)
{
    int menor = matriz[0][0][0];
    for (int i = 0; i < planos; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (matriz[i][j][k] < menor)
                {
                    menor = matriz[i][j][k];
                }
            }
        }
    }
    return menor;
}
