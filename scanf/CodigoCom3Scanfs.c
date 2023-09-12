/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>

int main()
{
   char nome[50];
   char sexo;
   int idade;
   float salario;

   printf("Digite seu nome: ");
   scanf("%s", nome);
   //string não colocar & na frente do nome da variavel!

   printf("Digite seu sexo: ");
   scanf("%c", &sexo);

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   printf("Digite seu salario ");
   scanf("%f", &salario);

   printf("Nome: %s\n", nome);
   printf("Idade: %d\n", idade);
   printf("Salario: %.2f\n", salario);

   return 0;
}
