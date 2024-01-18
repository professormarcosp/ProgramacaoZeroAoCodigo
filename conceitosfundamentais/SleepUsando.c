/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   printf("Esperando por 2 Segundos...\n");
   Sleep(2000);
   printf("Continuando a execução do programa. \n");
   system("Pause");

   return 0;
}
