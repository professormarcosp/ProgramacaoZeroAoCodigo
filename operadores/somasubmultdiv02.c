/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   float num1, num2;

   printf("\nDigite o primeiro numero: "); scanf("%f", &num1);
   printf("\nDigite o segundo numero: "); scanf("%f", &num2);

   printf("\n%2.f + %.2f = %.2f", num1, num2, (num1 + num2));
   printf("\n%2.f - %.2f = %.2f", num1, num2, (num1 - num2));
   printf("\n%2.f x %.2f = %.2f", num1, num2, (num1 * num2));
   printf("\n%2.f / %.2f = %.2f", num1, num2, (num1 / num2));

   return 0;
}
