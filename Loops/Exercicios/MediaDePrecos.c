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
    float preco, soma = 0.0;
    int contador;

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    while(1)
    {
        printf("\nInsira um preco (digite - 1 para encerrar): ");
        scanf("%f", &preco);

        if(preco == -1)
        {
            break;
        }

        if (preco < 0.0)
        {
            printf("\nPreco invalido! Tente novamente. \n");
            continue;
        }

        soma += preco;
        contador++;
    }

    if (contador > 0)
    {
        float media = soma / contador; // calcula a media
        printf("\nA Media dos precos eh: %.2f\n", media);
    }
    else
    {
        printf("\nNenhum preco foi inserido.\n");
    }

    return 0;
}
