/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int num1, num2;

   printf("\nDigite o primeiro numero: ");
   scanf("%d" , &num1);

   printf("\nDigite o segundo numero: ");
   scanf("%d" , &num2);

   printf("\nResultado: %s\n", (num1 % 2 == 0 && num2 % 2 == 0) ? "Ambos sao pares" : "Pelo menos um numero nao eh par");

   return 0;
}
/*
Desenvolva um programa em linguagem C que solicita dois números do usuário e exibe "Ambos são pares" 
se ambos os números inseridos forem números pares, e "Pelo menos um número não é par" caso contrário. 
Utilize o operador ternário para esta tarefa. Dica: num % 2 == 0 indica que número é par!
*/
