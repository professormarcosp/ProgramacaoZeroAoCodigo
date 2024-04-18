/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   int numero;

   printf("Digite um numero: ");
   scanf("%d", &numero);
   //Se numero divido por 2 o resto for zero então ele é par
   //isso inclue o próprio zero!
   //pois 0 é divisível por 2 sem deixar resto. Como 0 / 2 resulta em 0
   //atende esta definição! portando zero é considerado par!
   if (numero % 2 == 0)
   {
      printf("\nO Numero eh PAR!");
   }
   //Numeros negativos como -2 e -8 são considerados pares. Pois isso ocorre pela
   //sua divisibilidade por 2 não pelo seu sinal
   else
   {
      printf("\nO Numero eh IMPAR");
   }

   return 0;
}
