/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{

   int numero; //%d para inteiros
   float salario; //%f para float
   double consumo_total; //%lf para double obs: lf = long float ou float longo
   bool sinal_ativado;//%d pois será 0 ou 1 (inteiro)

   numero = 109;
   salario = 5689.23;
   consumo_total = 157689.89;
   sinal_ativado = 1;
   numero = 2023;
   salario = 7567.47;
   consumo_total = 112755.87;
   sinal_ativado = true;

   printf("\nValor numero: %d salario: %.2f, consumo_total: %.2lf, sinal_ativado: %d", numero, salario, consumo_total, sinal_ativado);

   getchar();
   return 0;
}
