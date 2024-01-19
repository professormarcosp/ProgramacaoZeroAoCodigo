/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int resto_divisao(int num1, int num2)
{
   return num1 % num2;
}


int main()
{
   int num1, num2;

   printf("Digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("Digite o segundo numero: ");
   scanf("%d", &num2);

   int resto = resto_divisao(num1, num2);

   printf("resto da divisao de %d %% %d: %d",num1, num2, resto);

   return 0;
}

