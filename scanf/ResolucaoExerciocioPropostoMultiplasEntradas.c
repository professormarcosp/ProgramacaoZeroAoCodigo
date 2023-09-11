/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>

int main()
{
   char nome[50];
   int idade;
   float salario;

   printf("Digite seu nome, idade e salario seperados por espaco: ");
   scanf("%s %d %f", nome, &idade, &salario);
   //string não colocar & na frente do nome da variavel!

   printf("Nome: %s\n", nome);
   printf("Idade: %d\n", idade);
   printf("Salario: %.2f\n", salario);

   return 0;
}
