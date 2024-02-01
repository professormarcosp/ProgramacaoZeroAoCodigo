/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int contador = 3;
   int resultado = ++contador;
   //pré-fixado então antes de fazer resultado = contador primeiro
   //incrementa a variável contador que passa a valer 4
   //e depois resultado recebe este novo valor
   /*
   É como se fosse
   int resultado, contador;
   contador = contador + 1; (o mesmo que ++contador)
   resultado = contador;
   */

   printf("\nValor do contador: %d", contador);
   printf("\nValor do resultado: %d", resultado);


   return 0;
}
