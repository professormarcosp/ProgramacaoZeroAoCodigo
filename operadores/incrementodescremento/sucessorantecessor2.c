/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int numero;

   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);

   /*
   retirei as variáveis e mais uma vez estou usando apenas o valor de numero
   sem alterar seu valor, pois numero - 1 apenas usa o valor de numero
   subtraido de 1 e exibe na tela este valor no %d correspondente no printf
   o mesmo oara numero + 1
   */
   printf("\nO antecessor de %d: %d", numero, numero - 1);
   printf("\nO sucessor de %d: %d", numero, numero + 1);

   return 0;
}
