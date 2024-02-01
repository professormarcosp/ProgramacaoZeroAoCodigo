/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int contador = 3;
   int resultado = contador--;
   /*
   Neste caso o valor da variável contador é utilizado antes de
   ser decrementado e somente depois contador será decrementado
   decremento pós-fixado!
   é como se fosse:
   int contador = 3;
   int resultado = contador;
   contador = contador - 1; ou contador-- ou contador -=1;;
   */

   printf("\nValor do contador: %d", contador);
   printf("\nValor do resultado: %d", resultado);


   return 0;
}
