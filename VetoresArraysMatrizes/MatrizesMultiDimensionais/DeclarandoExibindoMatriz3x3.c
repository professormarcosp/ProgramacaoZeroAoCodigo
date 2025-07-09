/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

void imprimir_matriz(int matriz[3][3], int linhas, int colunas);

int main()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    int matriz[3][3] =
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}};

    printf("\nMatriz: \n");
    imprimir_matriz(matriz, 3, 3);

    return 0;
}

void imprimir_matriz(int matriz[3][3], int linhas, int colunas)
{
    int i, j; // precisa ser for aninhado
    // primeiro for cuida do i linha quando i for 0 j vai de 0 até 2
    //  quando i for 1 j vai de 0 até 2
    // ou seja vai varrendo todos os itens desta matriz 3 x 3
    /*(0,0) (0,1) (0,2) --> linha 0
      (1,0) (1,1) (1,2) --> linha 1
      (2,0) (2,1) (2,2) --> linha 2
      essa será a matriz 3 x 3 com índice começando em zero
      */
    for (i = 0; i < linhas; i++) // cuida da linha
    {
        printf("[ ");
        for (j = 0; j < colunas; j++) // cuida das colunas
        {
            printf("%d ", matriz[i][j]);
        }
        printf("]\n");
    }
}
