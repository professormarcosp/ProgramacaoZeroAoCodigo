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

    return 0;
}
