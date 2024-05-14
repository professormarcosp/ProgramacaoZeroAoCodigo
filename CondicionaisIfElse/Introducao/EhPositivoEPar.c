/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

//Escreva um programa em C que verifica
//

#include <stdio.h>


int main()
{
   int numero;

   printf("\Digite um numero: ");
   scanf("%d", &numero);

   if (numero > 0 && numero % 2 == 0)
   {
      printf("\nO numero eh positivo e par!");
   }
   else if (numero > 0 && numero % 2 != 0)
   {
      printf("\n O numero eh positivo e impar");
   }
   else
   {
      printf("\nO numero nao atende aos criterios!");
   }


   return 0;
}
