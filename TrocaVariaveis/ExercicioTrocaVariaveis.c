/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código
com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{

   int variavel1 = 5;
   int variavel2 = 10;
   int temp;

   printf("Valores Iniciais:\n");
   printf("Variavel 1: %d\n", variavel1);
   printf("Variavel 2: %d\n", variavel2);

   //Troca de valores usando variavel temporária
   //Você precisa guardar qual era o valor da variavel1
   //pois você irá alterar o valor da variavel1 pelo valor contido
   //na variavel2
  
   temp = variavel1;
   variavel1 = variavel2; 
  
  //Ou seja o valor contido na variavel2
   //será colocado na variável1 assim variavel1 passar
   //a ter o valor 10 e o valor anterior é sobrescrito
   variavel2 = temp; //agora o valor de temp que guardou
   //o valor antigo da variavel1 antes da troca
   //vai para variavel2 e assim é feito a troca de valores

   printf("\nDepois da Troca:\n");
   printf("Variavel 1: %d\n", variavel1);
   printf("Variavel 2: %d\n", variavel2);

   return 0;
}
