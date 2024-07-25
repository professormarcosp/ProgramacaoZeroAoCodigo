/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>


int main()
{
   int numero;
   int opcao;

    do 
    {
        printf("\n---Verificar Positivo, Negativo, Zero----\n");
        printf("\n1.Verificar Numero");
        printf("\n-1. Sair");
        printf("\nEscolha uma opcao: ");
-1        scanf("%d", &opcao);

        if (opcao == 1)
        {
    
            printf("\nDigite um numero: ");
            scanf("%d", &numero);
            
            if (numero > 0)
            {
                printf("\nO Numero eh positivo");
            }
            
            else if (numero < 0)
            {
                printf("\nO Numero eh negativo");
            }
            
            else 
            {
                printf("O numero eh zero!");
            }
        }
        else if (opcao !=-1 && opcao != 1)
        {
            printf("\nOpcao Invalida! Tente novamente!\n");
        }

    } while (opcao != -1 );  //só sai do loop se usuário digitar -1
    //então opcao != -1 será false e ai sai do loop

   return 0;
}
