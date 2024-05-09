/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
professormarcosp@gmail.com
*/

#include <stdio.h>

int main()
{

   int numero; //%d para inteiros
   float salario; //%f para float
   double consumo_total; //%lf para double obs: lf = long float ou float longo
   _Bool sinal_ativado;//%d pois será 0 ou 1 (inteiro)

   numero = 109;
   salario = 5689.23;
   consumo_total = 157689.89;
   sinal_ativado = 1;
   numero = 2023;
   salario = 7567.47;
   consumo_total = 112755.87;
   sinal_ativado = true;

   getchar();
   return 0;
}
