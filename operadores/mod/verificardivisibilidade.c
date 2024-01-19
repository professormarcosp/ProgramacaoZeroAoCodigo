/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int verificar_divisibilidade(int numero1, int numero2)
{
   return numero1 % numero2 == 0 ? 1 : 0;
   //Se numero1 % numero2 == 0 retorne 1 senão for retorne 0;
   //Condição é: numero1 % numero2 == 0
   //Se for verdadeira a condicao então restorna 1
   //Se for falsa a condição então retorna 0;
   //Comportamento do operador ternário!

}

int main()
{
   int num1, num2;

   printf("Digite primeiro inteiro: ");
   scanf("%d",&num1);

   printf("Digite segundo inteiro: ");
   scanf("%d", &num2);

   printf("%s\n", verificar_divisibilidade(num1, num2) ? "Divisivel" : "Nao Divisivel");

   return 0;
}
