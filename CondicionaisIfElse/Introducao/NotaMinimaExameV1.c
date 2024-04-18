/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>


int main()
{
   float nota;
   float nota_minima = 6.0;

   printf("\nPor favor, insira a nota do aluno(a): ");
   scanf("%f", &nota);

   if (nota >= nota_minima)
   {
      printf("\nO aluno passou no exame.");
   }
   else 
   {
      printf("\nO aluno nao passou no exame.");
   }

   return 0;
}
