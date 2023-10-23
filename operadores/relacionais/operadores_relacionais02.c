/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
   int num1, num2;

   printf("\n Digite o primeiro numero: "); scanf("%d", &num1);

   printf("\n Digite o segundo numero: "); scanf("%d", &num2);

   //menor ou igual
   int resultado = num1 <= num2;
      
   //operador ternário
   //(Expressão booleana) ? ValorParaTrue : ValorParaFalse
   // resultado ? "Verdadeiro" : "Falso"

   printf("\n O resultado da comparacao num1 <= num 2: %s", resultado ? "Verdadeiro" : "Falso" );

   return 0;
}
