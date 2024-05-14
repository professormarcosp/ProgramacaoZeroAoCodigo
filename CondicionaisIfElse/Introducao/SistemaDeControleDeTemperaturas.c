/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

//protótipo da função
void verificar_temperatura(int temperatura_atual, int temperatura_ideal);

#include <stdio.h>


int main()
{
   int temperatura_atual, temperatura_ideal;

   printf("\nDigite a temperatura atual: ");
   scanf("%d", &temperatura_atual);

   printf("\nDigite a temperatura ideal: ");
   scanf("%d", &temperatura_ideal);

   verificar_temperatura(temperatura_atual, temperatura_ideal);

   return 0;
}
// definição da função

void verificar_temperatura(int temperatura_atual, int temperatura_ideal)
{

   if (temperatura_atual != temperatura_ideal)
   {
      printf("Atencao: Ativar o alarme! A temperatura atual eh diferente da temperatura ideal!");
   }
   else
   {
      printf("A temperatura esta dentro do ideal\n");
   }

}
