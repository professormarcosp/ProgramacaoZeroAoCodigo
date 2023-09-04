/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   float celsius, fahrenheit;

   //ENTRADA
   printf("\nDigite a temperatura em Celsius: ");
   scanf("%f", &celsius);

   //PROCESSAMENTO
   fahrenheit = (celsius * 9 / 5) + 32;
   //ou fahrenheit = (celsius * 1.8) + 32;
  

   //SAÍDA
   printf("\nA temperatura em Fahrenheit eh: %.2f", fahrenheit);

   return 0;
}
