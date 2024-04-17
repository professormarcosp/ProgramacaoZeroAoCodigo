/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>
#include <math.h>

double calcular_potencia(double base, double expoente);

int main()
{
   double base, expoente, resultado;

   //ENTRADA
   printf("\nDigite a base: ");
   scanf("%lf", &base);

   printf("\nDigite o expoente: ");
   scanf("%lf", &expoente);

   //PROCESSAMENTO
   resultado = calcular_potencia(base, expoente);

   //SAÍDA
   printf("\n O resultado de %.2lf elevado a %.2lf eh: %.2lf\n", base, expoente, resultado);

   return 0;
}

double calcular_potencia(double base, double expoente)
{
   return pow(base, expoente);
}
