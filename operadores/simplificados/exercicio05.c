/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int e = 25;

   e %= 6; // o mesmo que: e = e % 6; e %= 6;
   //ou seja, devolve o resto da divisão inteira do valor
   //de e por 6
   //25/6 logo quociente é 4 e resto é 1

   printf("O valor de e eh: %d\n", e);

   return 0;
}
