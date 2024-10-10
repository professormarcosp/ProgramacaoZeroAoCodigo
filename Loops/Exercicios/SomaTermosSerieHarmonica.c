/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int n;
    float h_n = 0.0; //variavel para armazenar o valor da soma série harmonica

    //ENTRADA DE DADOS
    printf("\nDigite o valor de n para calcular Hn: ");
    scanf("%d", &n);

    //Verifica se o valor de n é positivo
    if (n <= 0)
    {
        printf("\nErro! O Valor de n deve ser um numero inteiro positivo.");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        h_n += 1.0 / i;
    }

    //Exibe o resultado
    printf("\nO valor de H%d eh: %.5f\n", n, h_n);

    return 0;
}
