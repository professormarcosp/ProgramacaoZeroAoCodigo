/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   int numero;

   printf("\nDigite um numero: ");
   scanf("%d", &numero);
   //se numero maior que zero então numero positivo
   if (numero > 0)
   {
      printf("\nO Numero eh positivo");
   }
   //senão se numero for menor que zero o numero é negativo
   else if (numero < 0)
   {
      printf("\nO Numero eh negativo");
   }
   //senão só pode ser zero se não positivo e nem negativo é zero!
   else //redundante e não usual colocar aqui else if (numero == 0)
      //eh colocado o else sozinho indicando que só esta opção
      //que aqui será quando as opções anteriores não forem true
      //logo aqui é quando numero == 0 e assim não precisa deste else if (numero == 0)
   {
      printf("O numero eh zero!");
   }

   return 0;
}
