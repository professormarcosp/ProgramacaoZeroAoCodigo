/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

float converta_celsius_fahrenheit(int temperatura_celsius);

int main()
{
   float celsius, fahrenheit;

   //ENTRADA
   printf("\nDigite a temperatura em Celsius: ");
   scanf("%f", &celsius);

   //PROCESSAMENTO
   fahrenheit = converta_celsius_fahrenheit(celsius);

   //SAÍDA
   printf("\nA temperatura em Fahrenheit eh: %.2f", fahrenheit);

   return 0;
}

float converta_celsius_fahrenheit(int temperatura_celsius)
{
   return (temperatura_celsius * 1.8) + 32;
}
