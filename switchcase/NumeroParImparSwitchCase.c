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
   //numero % 2 retorna zero se numero for par logo caso (case) 0
   //colocar na tela numero par
   switch (numero % 2)
   {
      case 0:
         printf("\nEh numero par\n");
         break;
   //Ocorre que o resto pode ser 1 ou 2 ou 3 ou 4 ou etc...
   //sendo assim podemos colocar default para esses outros valores
   //diferentes de zero e ai teremos um algortimo funcionando
      default:
         printf("\nEh um numero impar\n");
   }

   return 0;
}
