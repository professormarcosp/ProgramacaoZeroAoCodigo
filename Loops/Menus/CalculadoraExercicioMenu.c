/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/
#include <stdio.h>

int main()
{
    int opcao;
    char operador;
    float num1, num2, resultado;

    do
    {
        //ENTRADA DE DADOS
        printf("\n--- Calculadora Simples --- \n");
        printf("\n1. Calcular\n");
        printf("\n-1. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao == 1)
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &num1);
            fflush(stdin); // limpa buffer
            printf("\nDigite o operador (+, -, *, /): ");
            scanf("%c", &operador);
            printf("\nDigite o segundo numero: ");
            scanf("%f", &num2);

        //PROCESSAMENTO (REGRA DE NEGÒCIOS)
        switch (operador)
        {
            case '+':
                resultado = num1 + num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case '-':
                resultado = num1 - num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case '*':
                resultado = num1 * num2;
                printf("\nResultado: %.2f\n", resultado);
                break;
            case '/':
                if (num2 != 0)
                {
                    resultado = num1 / num2;
                    printf("\nResultado: %.2f\n", resultado);
                }
                else
                {
                   printf("\nErro: Divisao por zero\n");
                }
                break;

            default:
                printf("\nOperador invalido\n");

        }// fim switch


        }
        else if (opcao != -1)
        {
            printf("\nOpcao invalida. Tente novamente. \n");
        }
        
    } while (opcao != -1);
    
    printf("\nSaindo... \n");

    return 0;
}
