/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   char primeiro_caractere;

   printf("\nDigite o primeiro caractere do seu sobrenome: ");
   scanf("%c", &primeiro_caractere);

   printf("O primeiro caractere do sobrenome eh: %c: ", primeiro_caractere);

   return 0;
}
