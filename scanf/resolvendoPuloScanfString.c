/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   char linha[100];

   printf("\nDigite uma linha de texto: ");
   scanf("%[^\n]", linha); //[^\n] leia até encontrar caractere \n

   printf("\nVoce digitou: %s\n", linha);

   return 0;
}
