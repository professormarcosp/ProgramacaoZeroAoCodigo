/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

//protótipo da função
double dolar_para_euro(double valor_em_dolar);

int main()
{
   double dolares, euros;

   //ENTRADA
   printf("\nDigite um valor em dolares: ");
   scanf("%lf", &dolares);

   //SAIDA  %lf (long float = lf)
   printf("\nO Valor em euros eh: %.2lf", dolar_para_euro(dolares));

   return 0;
}

double dolar_para_euro(double valor_em_dolar)
{
   return (valor_em_dolar * 0.85);
}
