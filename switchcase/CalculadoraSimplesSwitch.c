/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>


int main()
{
   float num1, num2;
   char operacao;

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
               printf("\Erro: Divisao por zero nao permitida!");
            break;

      default:
            printf("\nOperacao Invalida!");
            break;
   }

   return 0;
}
