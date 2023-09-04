/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

//protótipo da função
int dobre_numero_int(int numero);

int main()
{
   int numero;

   printf("\nDigite um numero inteiro: ");
   scanf("%d", &numero);

   printf("\nO Dobro do numero eh: %d\n", dobre_numero_int(numero));

   return 0;
}

int dobre_numero_int(int numero)
{
   return (2 * numero);
}
