/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>

int verifica_maior(int x, int y)
{
   //se for maior que y(true) retorne x
   //senão se x não for maior que y(false) retorne y
   return (x > y) ? x : y;
}

int main()
{
   int num1, num2;

   printf("\nDigite o valor do primeiro numero: ");scanf("%d", &num1);
   printf("\nDigite o valor do segundo numero: "); scanf("%d", &num2);

   int maior_numero = verifica_maior(num1, num2);

   printf("\nO maior numero digitado foi: %d\n", maior_numero);

   return 0;
}
