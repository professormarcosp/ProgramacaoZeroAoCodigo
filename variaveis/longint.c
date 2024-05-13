/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>

int main()
{
   short Numero_Curto = 10;
   int Numero_Padrao = 1000;
   long Numero_Longo = 1000000;

   printf("Tamanho de short: %i\n",sizeof(Numero_Curto));
   printf("Tamanho de int: %i\n", sizeof(Numero_Padrao));
   printf("Tamanho de long: %i\n",sizeof(Numero_Longo));
   printf("Numero_Curto %hi\n",Numero_Curto);
   printf("Numero_Padrao %i\n",Numero_Padrao);
   printf("Numero_Longo %li\n",Numero_Longo);


   getchar();

   return 0;
}
