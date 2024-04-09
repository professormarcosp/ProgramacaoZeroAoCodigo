/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int verifica_maior(int x, int y);


int main()
{
   int x, y;
   int maior_numero = 0;

   printf("\nDigite o valor de x: ");
   scanf("%d", &x);

   printf("\nDigite o valor de y: ");
   scanf("%d", &y);

   maior_numero = verifica_maior(x, y);

   printf("O Maior numero eh: %d\n", maior_numero);

   return 0;
}

int verifica_maior(int x, int y)
{
   // se x for maior que y(true) retorne x
   //senão se x não for maior(false) que y retorne y
   return (x > y) ? x : y;

}
