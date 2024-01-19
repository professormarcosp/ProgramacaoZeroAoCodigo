/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>


int main()
{
   int dividendo, divisor;

   printf("Digite o dividendo: ");
   scanf("%d", &dividendo);

   printf("Digite o divisor: ");
   scanf("%d",&divisor);

   int quociente = dividendo / divisor;
   int resto = dividendo % divisor;

   printf("Quociente da divisao: %d", quociente);
   printf("\nResto da divisao: %d\n", resto);

   return 0;
}
