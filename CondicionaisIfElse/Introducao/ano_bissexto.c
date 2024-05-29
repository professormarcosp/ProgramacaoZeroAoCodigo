/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>


int main()
{
   int ano;

   printf("\nDigite um ano: ");
   scanf("%d", &ano);

   //se ano for divisivel por 4 e não for divisivel por 100
   // ou se o ano for divisivel por 400 ele é bissexto
   //Logo para ser bissexto essa setença lógica:
   //(ano % 4 == 0 && ano % 100 !=0) precisa ser verdadeira
   // ou essa sentença (ano % 400 == 0 precisa ser verdadeira!
   //lembre que && só true e todos forem true
   //logo ano % 4 == 0 precisa ser true e 
   //ano % 100 !=0 precisa ser true também
   //caso (ano % 4 == 0 && ano % 100 !=0) dê false
   //resta a opção de (ano % 400 == 0) ser true 
   //pois false OR true dá True!!!
   //lembre-se que o OR (ou) basta apenas uma das 
   //condições seja verdadeira(true para ser verdadeira!)
                         
   if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0))
   {
      printf("\nO ano %d eh bissexto!\n", ano);
   }
   else
   {
      printf("\nO ano %d nao eh bissexto!\n", ano);
   }

   return 0;
}















