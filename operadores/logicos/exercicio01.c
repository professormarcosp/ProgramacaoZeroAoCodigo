/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int num1, num2;

   printf("\n Digite o primeiro numero: ");
   scanf("%d", &num1);

   printf("\n Digite o segundo numero: ");
   scanf("%d", &num2);
   //se num1 for maior que zero e num 2 for maior que zero
   //os numeros são positivos maiores que zero
   //as duas setenças lógicas precisam ser verdadeiras
   //logo usamos o conectivo AND E &&
   printf("\nCondicao: %s\n", (num1 > 0 && num2 > 0) ? "Condicao Verdadeira" : "Condicao Falsa" );

   return 0;
}

/*
Escreva um programa em linguagem C que recebe dois números inteiros do usuário num1 e num2 e escreve “Condição Falsa" se ambos os valores 
dos números forem positivos (maiores que zero), e "Condição falsa" caso contrário. Utilize o operador ternário para realizar a verificação.
Dica: " %s “, (       &&      ) ? "Condição verdadeira" : "Condição falsa");
*/
