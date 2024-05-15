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
   char letra;

   printf("\nDigite uma letra: ");
   scanf("%c", &letra);

   switch (letra)
   {  //caso seja um caractere fundamental colocar entre aspas simples
      case 'a':  //Neste caso seja qual for a vogal minusculas ou maiusculas
      case 'e':  // vai até o break e imprime Vogal
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
         printf("\nVogal");
         break; //importante este break!

      default:
         printf("\nConsoante\n");  //se não for volgal virá para Consoante
   }

   return 0;
}
