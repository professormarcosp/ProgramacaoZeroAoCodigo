/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>

void ler_matriz(int matriz[3][3], int linhas, int colunas);
void exibir_matriz(int matriz[3][3], int linhas, int colunas);
void multiplicar_matriz(int matriz[3][3], int linhas, int colunas, int fator);
void limpar_tela();

int main()
{
    int matriz[3][3];
    int linhas = 3;
    int colunas = 3;
    int fator;

    printf("\nDigite os elementos da matriz 3x3: \n");
    ler_matriz(matriz, linhas, colunas);

    printf("\nMatriz original: \n");
    exibir_matriz(matriz, linhas, colunas);

    printf("\nDigite o fator inteiro de multiplicação: ");
    scanf("%d", &fator);

    multiplicar_matriz(matriz, linhas, colunas, fator);

    printf("\nMatriz após multiplicação:\n");
    exibir_matriz(matriz, linhas, colunas);

    return 0;
}

void ler_matriz(int matriz[3][3], int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {

            limpar_tela();
            printf("\nDigite o elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void exibir_matriz(int matriz[3][3], int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        printf("\n");
        for (j = 0; j < colunas; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
    }
    printf("\n");
}

void multiplicar_matriz(int matriz[3][3], int linhas, int colunas, int fator)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[i][j] = matriz[i][j] * fator;
        }
    }
}

void limpar_tela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
