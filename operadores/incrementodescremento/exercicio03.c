/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int contador = 3;
   int resultado = --contador;
   /*
   Neste caso a variável contador será decrementada em 1
   antes de seu valor ser atribuido a variável resultado
   Logo se inicialmente contador é 3 ele ficar com valor 2 e esta valor
   será atribuido a resultado
   logo é decremento pré-fixado!
   é como se tivessemos
   int contador = 3;
   contador = contador - 1; ou contador -= 1 ou --contador
   int resultado = contador;
   */

   printf("\nValor do contador: %d", contador);
   printf("\nValor do resultado: %d", resultado);


   return 0;
}
