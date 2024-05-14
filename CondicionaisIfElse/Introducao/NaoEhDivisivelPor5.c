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

   printf("\nDigite um numero inteiro: ");
   scanf("%d", &numero);
   //se o resto da divisao do numero por cinco
   //for diferente de zero
   //indica que ele não é múltiplo de 5!
   //poderia ser assim
   if( numero % 5 != 0 )   //24 % 5 = 4 logo fica
   //if (!(false)) que será if (true)
   //entra no if
   {
      printf("\nO numero nao eh divisivel por 5.");
   }
   else
   {
      printf("\nO numero eh divisivel por 5");
   }

   return 0;
}
