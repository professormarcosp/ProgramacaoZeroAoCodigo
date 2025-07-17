/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[3][5];

    // entrada dos dados
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nDigite os 15 valores da Matriz 3x5:\n");
            printf("\nElemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
        }
    }

    // processamento: trocando impares por -1
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] % 2 != 0) // é impar
            {
                matriz[i][j] = -1;
            }
        }
    }

    // SAIDA
    printf("\nMatriz Atualizada\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%7d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
