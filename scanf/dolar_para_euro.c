/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
   double dolares, euros;

   //ENTRADA
   printf("\nDigite um valor em dolares: "); scanf("%lf", &dolares);

   //PROCESSAMENTO
   euros = dolares * 0.85;

   //SAIDA
   printf("\nO Valor em euros eh: %.2lf", euros);

   return 0;
}
