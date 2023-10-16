/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   float num1, num2;
   float soma, subtracao, multiplicacao, divisao;

   printf("\nDigite o primeiro numero: "); scanf("%f", &num1);
   printf("\nDigite o segundo numero: "); scanf("%f", &num2);

   soma = num1 + num2;
   subtracao = num1 - num2;
   multiplicacao = num1 * num2;
   divisao = num1 / num2;

   printf("\n%.2f + %.2f = %.2f", num1, num2, soma);
   printf("\n%.2f - %.2f = %.2f", num1, num2, subtracao);
   printf("\n%.2f x %.2f = %.2f", num1, num2, multiplicacao);
   printf("\n%.2f / %.2f = %.2f", num1, num2, divisao);

   return 0;
}
