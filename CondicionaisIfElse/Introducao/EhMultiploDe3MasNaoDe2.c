/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>


int main()
{
   int numero;

   printf("\nDigite um numero: ");
   scanf("%d", &numero);

   if((numero % 3 == 0) && (numero % 2 != 0))
   {
      printf("\n O Numero eh multiplo de 3 e nao eh multiplo de 2. \n");
   }
   else
   {
      printf("\nO numero nao atende aos criterios.");
   }

   return 0;
}
