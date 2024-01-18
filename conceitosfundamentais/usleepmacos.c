/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char **argv)
{
   printf("Esperando por 1 Segundos...\n");
   usleep(1000000);
   printf("Continuando a execução do programa. \n");
  
   system("read -n 1 -s -p \"Pressione Qualquer Tecla para Continuar\"");
   return 0;
}
