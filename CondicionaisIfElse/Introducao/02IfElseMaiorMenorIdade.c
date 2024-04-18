/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   int idade;

   printf("\nDigite sua idade: ");
   scanf("%d", &idade);

   //se idade for maior ou igual a 18
   // a condição booleana (idade >= 18) será true
   //e ai entra no if
   if (idade >=18)
   {
      printf("Vc eh maior de idade.\n");
   }
   //se idade não for maior ou igual a 18 significa
   //que idade é menor que 18 idade < 18 logo a condição
   //(idade >= 18) será false e então o código será desviado
   //condicionalmente para esta parte entrando no else
   //por isso é desvio, salto condicional!
   else
   {
      printf("Vc eh menor de idade\n");
   }

   return 0;
}
