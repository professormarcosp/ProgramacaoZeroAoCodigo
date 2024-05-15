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
   int codigo;

   printf("\nDigite o codigo do banco (1, 2, 3 ou 4): ");
   scanf("%d", &codigo);

   switch (codigo)
   {
      case 1:
         printf("\nCaixa Economica Federal\n");
         break;
      case 2:
         printf("\nBanco do Brasil\n");
         break;

      case 3:
         printf("\nBradesco\n");
         break;
      case 4:
         printf("\nNubank\n");
         break;

      default:
         printf("\nCodigo do Banco Invalido!!!\n");
   }

   return 0;
}
