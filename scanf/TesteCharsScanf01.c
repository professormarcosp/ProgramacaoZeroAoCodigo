/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
   char texto[100];

   printf("\nDigite texto: ");
   scanf("%[^0-9]", texto);

   printf("\nVc digitou: %s", texto);


   return 0;
}
