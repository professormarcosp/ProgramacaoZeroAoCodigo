/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

void mostrar_impares_ate_n(int n);
//CTRL + . e enter
int main()
{
    int num;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    mostrar_impares_ate_n(num);
    
    return 0;
}

void mostrar_impares_ate_n(int n)
{
    printf("Numeros Impartes ate %d: \n", n);

    for (int i = 1; i <= n; i++) // percorre de 1 até numero digitado n
    {
        if (i % 2 != 0) // verifica se o numero eh impar
        {
            printf("%d ", i); // imprime numero impar
        }
    }
    printf("\n");
}
