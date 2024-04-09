/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int x, y;

   printf("\nDigite o valor de x: ");
   scanf("%d", &x);

   printf("\nDigite o valor de y: ");
   scanf("%d", &y);

   // se x for > y considerar o primeiro printf
   //senão se y for maior ou igual a x considerar o segundo printf
   (x > y) ? printf("x eh maior que y\n") : printf("y eh maior ou igual a x");

   return 0;
}
