/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int numero = 0;
    bool primeira_vez = true; //indica que é a primeira vez que
    //codigo está sendo executado

    while (1)
    {
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        primeira_vez ? printf(" ") : printf("Numero Digitado: %d", numero);
        /*Se primeira vez for true o primeiro printf pe colocando apenas
        com caractere vazio evitando aparecer numero digitado na primeira vez*/
        printf("\nDigite um numero (0 para sair): ");
        scanf("%d", &numero);
        // agora que já ocorreu a primeira vez colocamos primeira_vez como false
        primeira_vez = false;

        if(numero == 0)
        {
            break; // sai do loop se numero for 0
        }
    }

    printf("\nLoop encerrado...\n");

    return 0;
}
