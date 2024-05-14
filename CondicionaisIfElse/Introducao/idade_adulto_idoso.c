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
   int idade;

   printf("\nDigite sua idade: ");
   scanf("%d", &idade);

   if (idade < 18)
   {
      printf("\nvc eh menor de idade");
   }
   else if (idade >= 18 && idade <= 60)
   {
      printf("\nVc eh adulto!");
   }
   else
   {
      printf("\nVc eh idoso!");
   }

   return 0;
}
