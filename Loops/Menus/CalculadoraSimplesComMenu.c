/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
   float num1, num2;
   char operacao;
   char continuar;

   do 
   {
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);

        printf("\nDigite o segundo numero: ");
        scanf("%f", &num2);
        fflush(stdin);

        printf("\nEscolha a operacao (+, -, *, /): ");
        scanf("%c", &operacao);


        switch (operacao)
        {
            case '+':
                    printf("\nResultado: %.2f", num1 + num2);
                    break;
            case '-':
                    printf("\nResultado: %.2f", num1 - num2);
                    break;
            case '*':
                    printf("\nResultado: %.2f", num1 * num2);
                    break;
            case '/':
                    if (num2 != 0)  //se tivermos apenas uma instrução não é necessário
                    //usar chaves { } no if e else!!!
                    printf("\nResultado: %.2f", num1 / num2);
                    else
                    printf("\nErro: Divisao por zero nao permitida!");
                    break;

            default:
                    printf("\nOperacao Invalida!");
                    break;
        }
        printf("\nDeseja Continuar (S/N)?");
        scanf(" %c", &continuar);
   } while (continuar == 'S' || continuar == 's');

   return 0;
}
