/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
   int num1 = 5;
   int num2 = 9;
   int resultado = num1 == num2;

   printf("O Resultado da comparacao num1 == num2 eh:%s", resultado ? "Verdadeiro" : "Falso");

   return 0;
}
