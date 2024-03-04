/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
*/

#define __USE_MINGW_ANSI_STDIO 1

/*A diretiva #define __USE_MINGW_ANSI_STDIO 1 é uma forma de definir explicitamente a macro
__USE_MINGW_ANSI_STDIO como 1. Isso basicamente ativa a funcionalidade associada a essa macro.
No caso específico do MinGW, essa macro é usada para indicar que o código deve usar as funções 
de entrada e saída padrão do padrão ANSI C, conforme definido pela ANSI. Por padrão, o MinGW 
pode usar uma implementação própria dessas funções, que pode não ser totalmente compatível com 
o padrão ANSI C. Ao definir essa macro como 1, você está instruindo o MinGW a usar as funções 
de entrada e saída conforme definido pelo padrão ANSI C.
*/

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

