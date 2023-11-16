/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int numero;

   printf("\nDigite um numero: ");
   scanf("%d", &numero);

   printf("%s\n", (numero == 10) ? "O Numero eh igual a 10" : "O numero eh diferente de 10");

   return 0;
}
/*
Crie um programa em linguagem C que solicita um número do usuário e verifica se ele não é igual a 10. 
Utilize o operador lógico NOT para realizar essa verificação e imprima "O número é diferente de 10" 
se a condição for verdadeira, caso contrário, imprima "O número é igual a 10". Use o operador ternário ? 
*/
