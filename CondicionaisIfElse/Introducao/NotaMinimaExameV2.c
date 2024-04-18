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
   if (nota < nota_minima) // mesmo já ter sido
      //avaliado que nota é maior que nota minima
      //como temos mais de um if será avaliado também
      //mesmo sabendo que não seria necessário
      //isso usa ciclos de CPU(processador) 
      //que podem ser decisivos para sistemas críticos
      //como sistema de defesa, sistemas financeiros, sistemas
      //de resfriamento de uma caldeira ou reator nuclear etc
      //logo usar else é melhor para de fato termo desvio condicionais
      // e otimizarmos o código
   {
      printf("\nO aluno nao passou no exame.");
   }

   return 0;
}
