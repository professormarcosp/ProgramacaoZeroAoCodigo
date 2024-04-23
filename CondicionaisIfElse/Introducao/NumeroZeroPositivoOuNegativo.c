/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   int numero;

   printf("\nDigite um numero inteiro: ");
   scanf ("%d", &numero);

   if (numero == 0)
   {
      printf("\nO numero eh igual a zero!");
   }

   if (numero > 0)
   {
      printf("\nO numero eh positivo!");
   }

   if (numero < 0)
   {
      printf("\nO numero eh negativo!\n");
   }

   return 0;
}
