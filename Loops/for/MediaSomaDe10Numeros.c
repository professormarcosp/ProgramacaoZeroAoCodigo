/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    
    int num, soma = 0;
    float media;

    printf("\nDigite os 10 numeros: \n");
    
    
    for (int i = 1; i <= 10; i++)
    {
        printf("\nNumero-%d :", i);
        scanf("%d", &num);
        soma += num;
    }
  
    media = soma / 10.0;

    printf("\nA soma dos 10 numeros eh: %d", soma);
    printf("\nA media da soma dos 10 numeros eh: %.2f", media);

    return 0;
}
