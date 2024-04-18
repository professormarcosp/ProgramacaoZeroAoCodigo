/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   int numero;

   printf("Por favor, insira um numero inteiro: ");
   scanf("%d", &numero);
   
   //Se a condição lógica booleana (numero != 0) for true entra no if
   if (numero != 0)
   {
      printf("\nO Numero eh diferente de zero.\n");
   }
   //se esta condição for falsa entra no senão (else)
   else
   {
      printf("\nO numero eh zero");
   }

   return 0;
}
