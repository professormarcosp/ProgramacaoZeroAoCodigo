
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
    int matriz[4][4];
    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\nDigite os 16 valores da matriz 4x4:\n");
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
#ifdef _WIN32
            system("cls");
#else
            system("clear");
#endif
        }
    }
    // para somar apenas elementos da segunda coluna (coluna 1 é indice j =0
    // e segunda coluna é indice j = 1). Basta ler todos elementos das linhas
    // i e fixar a coluna j sendo 1
    for (int i = 0; i < 4; i++)
    {
        soma += matriz[i][1];
    }
    printf("\nMatriz Original\n");
    for (int i = 0; i < 4; i++) // ideal seria criar função para exibir_matriz
    // será visto nas próximas aulas...
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Agora para que os valores da segunda coluna sejam substituidos
    // pelo valor da soma segue a mesma lógica
    for (int i = 0; i < 4; i++)
    {
        matriz[i][1] = soma;
    }

    printf("\nA soma dos elementos da segunda coluna é igual a: %d\n", soma);

    printf("\nMatriz Modificada:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
