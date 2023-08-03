/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
*/

#include <stdio.h>

#define ANO_ATUAL 3015
#define PI 3.14159

int main()
{
   const int NUMERO_MAXIMO = 1000;
   const float TAXA_DESCONTO = 0.1;

   printf("\nValor da Constante ANO_ATUAL: %d",ANO_ATUAL);
   printf("\nValor da Constante PI: %.5f",PI);
   printf("\nValor da Constante NUMERO_MAXIMO: %d",NUMERO_MAXIMO);
   printf("\nValor da Constante TAXA_DESCONTO: %.2f", TAXA_DESCONTO);

   return 0;
}
