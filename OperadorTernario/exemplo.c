/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int num1, num2;

   printf("\nDigite o primeiro numero: ");
   scanf ("%d", &num1);

   printf("\nDigite o segundo numero: ");
   scanf ("%d", &num2);

   int maior = (num1 > num2) ? num1 : num2;

   printf("O maior numero eh: %d\n", maior);


   return 0;
}
