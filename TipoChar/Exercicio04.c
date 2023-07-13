/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C

Utilizando os caracteres 'A'  'E'  'I'  'O'  'U' coloque na
tela esses caracteres e seus respectivos códigos na tabela ASCII
*/

#include <stdio.h>

int main()
{
   char caractereA = 'A';
   char caractereE = 'E';
   char caractereI = 'I';
   char caractereO = 'O';
   char caractereU = 'U';

   printf("\nCaractere %c valor inteiro correspondente: %d",caractereA,caractereA);
   printf("\nCaractere %c valor inteiro correspondente: %d",caractereE,caractereE);
   printf("\nCaractere %c valor inteiro correspondente: %d",caractereI,caractereI);
   printf("\nCaractere %c valor inteiro correspondente: %d",caractereO,caractereO);
   printf("\nCaractere %c valor inteiro correspondente: %d",caractereU,caractereU);
   return 0;
}
