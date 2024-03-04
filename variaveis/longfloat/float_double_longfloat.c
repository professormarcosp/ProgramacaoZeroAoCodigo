/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
*/

#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>


int main()
{
   //declaração de variáveis
   float num_float;
   double num_double;
   long double num_long_double;

   //inicialização de variáveis
   num_float = 1.23f;
   num_double = 4.56789;
   num_long_double = 9.87654321L;

   //exibição de variáveis na tela
   printf("Variavel num_float: %f\n", num_float);
   printf("Variavel num_double: %f\n", num_double);
   printf("Variavel long double: %.8Lf\n", num_long_double);

   //modificação das variaveis
   num_float = num_float * 2;
   num_double = num_double / 2;
   num_long_double = num_long_double + 1;

   //Exibição das variáveis modificadas na tela
   printf("Variavel num_float modificada: %f\n", num_float);
   printf("Variavel num_double modificada: %lf\n", num_double);
   printf("Variavel long double modificada: %.8Lf\n", num_long_double);

   getchar();

   return 0;
}

