/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    // ou seja são 3 vetores sendo cada um 3 linhas e 4 colunas
    int triplas[3][3][4] = {
        {// primeiro array
         {23, 56, 67, 89},
         {-89, 13, 12, 109},
         {11, 674, 456, 99}},
        {// segundo array
         {-8, 0, 3, 7},
         {0, -4, 5, 90},
         {-23, 45, 64, 87}},
        {// terceiro array
         {1, 9, 3, 10},
         {12, 45, 745, -98},
         {-99, 45, -3, -2}}};

    // exibindo os valores do array tridimensional com espaçamento uniforme
    for (int i = 0; i < 3; i++)
    {
        printf("Array %d:\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%4d ", triplas[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // exibindo elementos específicos de cada profundidade
    printf("\nSeis elementos selecionados da matriz: \n");

    printf("\nElemento 1: Triplas [0][0][2] = %d", triplas[0][0][2]);
    printf("\n-> Profundidade: 0 (primeiro array)");
    printf("\n-> Linha 0");
    printf("\n-> Coluna: 2");

    printf("\nElemento 2: Triplas [0][2][1] = %d", triplas[0][2][1]);
    printf("\n-> Profundidade: 0 (primeiro array)");
    printf("\n-> Linha 2");
    printf("\n-> Coluna: 1");

    printf("\nElemento 3: Triplas [1][0[0]] = %d", triplas[1][0][0]);
    printf("\n-> Profundidade: 1 (segundo array)");
    printf("\n-> Linha 0");
    printf("\n-> Coluna: 0");

    printf("\nElemento 4: Triplas [1][2][3] = %d", triplas[1][2][3]);
    printf("\n-> Profundidade: 1 (segundo array)");
    printf("\n-> Linha 2");
    printf("\n-> Coluna: 3");

    printf("\nElemento 5: Triplas [2][1][2] = %d", triplas[2][1][2]);
    printf("\n-> Profundidade: 2 (terceiro array)");
    printf("\n-> Linha 1");
    printf("\n-> Coluna: 2");

    printf("\nElemento 6: Triplas [2][2[2]] = %d", triplas[2][2][2]);
    printf("\n-> Profundidade: 2 (terceiro array)");
    printf("\n-> Linha 2");
    printf("\n-> Coluna: 0");

    return 0;
}
