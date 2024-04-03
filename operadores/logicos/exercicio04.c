/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int numero;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   //numero (10) então numero == 10 é true fica
   //!(true) ? :
   //logo not ! true dará false
   //assim irá para tela numero igual a 10
   
   //numero (11) então numero == 11 é false fica
   //!(false) ? :
   //logo not ! false dará true
   //assim irá para tela numero diferente de 10
   printf("\n%s", !(numero == 10) ? "O numero eh diferente de 10" : "O  numero eh igual a 10");

   return 0;
}

