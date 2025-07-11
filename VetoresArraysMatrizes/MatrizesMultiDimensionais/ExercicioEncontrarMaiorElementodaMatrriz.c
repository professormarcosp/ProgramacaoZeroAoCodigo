/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX_LINHAS 10
#define MAX_COLUNAS 10

// função que encontra o maior valor da matriz
int encontra_maior_valor(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas);
// vc pode apenas omitir o numero de linhas, mas colunas precisa informar

int main()
{
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int linhas, colunas;

    // solicita as dimensões da matriz
    printf("\nDigite o numero de linhas: ");
    scanf("%d", &linhas);

    printf("\nDigite o numero de colunas: ");
    scanf("%d", &colunas);

    // recebe os valores
    printf("\nDigite os elementos da matriz: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {

            printf("\nElemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            #ifdef _WIN32
            system("cls");
            #else
            system("clear");
            #endif
        }
    }

    // exibe a matriz
    printf("\nMatriz inserida: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // encontra o maior valor
    int maior_valor = encontra_maior_valor(matriz, linhas, colunas);
    printf("\nO maior valor na matriz é: %d\n", maior_valor);

    return 0;
}

int encontra_maior_valor(int matriz[MAX_LINHAS][MAX_COLUNAS], int linhas, int colunas)
{
    // primeiro é preciso definir um numero base como o maior elemento
    // colocamos o primeiro elemento da matriz e vamos comparando com os demais
    // se o primeiro elemento for menor que algum outro elemento, esse outro elemento
    // passará a ser o maior. Isso é analisado para todos os elementos da matriz
    // e ao final teremos o maior elemento da matriz

    int maior = matriz[0][0]; // primeiro elemento é considerado o maior inicialmente
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriz[i][j] > maior) // se o elemento for maior que o maior atual
            {
                maior = matriz[i][j]; // ele passa a ser o maior elemento
            }
        }
    }

    return maior;
}
