/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int contador = 3;
   int resultado = contador++;
   /*
   Pós-Fixado:Primeiro é utilizado o valor da variável contador para
   somente depois ser incrementado!
   Então primeiro será  int resultado = contador;
   depois como se fosse contador = contador  + 1 (contador++)
   */
   printf("\nValor do contador: %d", contador);
   printf("\nValor do resultado: %d", resultado);


   return 0;
}
