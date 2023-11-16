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

   printf("%s\n", (numero % 3 == 0 || numero % 5 == 0 ) ? "Eh Multiplo de 3 ou de 5" : "Nao eh Multiplo de 3 ou de 5");

   return 0;
}

/*
Crie um programa em linguagem C que solicita um número do usuário e verifica se o número inserido é múltiplo de 3 ou de 5. 
Utilize o operador ternário para imprimir "É múltiplo de 3 ou de 5" se a condição for verdadeira, e 
"Não é múltiplo de 3 ou de 5" caso contrário.
Dica: Use operador % para verificar se é múltiplo de 3
*/
