/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>
#include <limits.h>  // Necessario para pode usar as constantes INT_MIN e INT_MAX

int main()
{
   printf("Faixa de Valores para o tipo int: %d a %d\n", INT_MIN, INT_MAX);
   printf("Tamanho do tipo int: %d bytes\n",sizeof(int));

   return 0;
}
