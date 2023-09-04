/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int numero;
   int dobro;

   printf("\nDigite um numero inteiro: ");
   scanf("%d", &numero);

   dobro = 2 * numero;
   printf("\nO Dobro do numero eh: %d\n", dobro);

   return 0;
}
