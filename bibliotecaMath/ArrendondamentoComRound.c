/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>
#include <math.h>

int main()
{
   double numero1 = 3.4;
   double numero2 = 3.5;
   double numero3 = 3.6;

   int arrendodamento1 = round(numero1);
   int arrendodamento2 = round(numero2);
   int arrendodamento3 = round(numero3);

   printf("\nNumero 1: %.1lf arredondado fica: %d", numero1, arrendodamento1);
   printf("\nNumero 2: %.1lf arredondado fica: %d", numero2, arrendodamento2);
   printf("\nNumero 3: %.1lf arredondado fica: %d", numero3, arrendodamento3);

   return 0;
}
