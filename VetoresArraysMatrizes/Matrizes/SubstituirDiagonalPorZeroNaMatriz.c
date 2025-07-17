/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    for (int i = 0; i < 3; i++) // ou seja a diagonal principal é formado pelos
    // indices em i é igual. Logo voc}e pode apenas usar um único for para
    // trocar os ementos da diagonal principal
    // matriz[0][0] matriz[1][1] e matriz[2][2]
    {
        matriz[i][i] = 0;
    }

    printf("\nMatriz resultante: \n");
    // agora para mostrar a matriz você precisa de dois for aninhados para
    // fixar a linha com i e percorrer a coluna com j

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        /*%2d este 2 antes do d define que a largura minima do campo como 2
        caracteres. Ou seja:
        Se o numero tiver menos de 2 dígitos, ele será preenchido com espaços a
        esquerda
        Se o número tiver 2 ou mais dígitos, ele será impresso normalmente*/
        printf("\n");
    }

    return 0;
}
