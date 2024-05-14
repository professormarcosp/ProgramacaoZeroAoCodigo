/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>
#include <stdbool.h>

bool verificar_par (int numero)
{
   if (numero % 2 == 0)
   {
      return true;
   }
   else //if (numero % 2 != 0) desnecessário!!!
      //pois se (numero % 2 == 0) for falso é
      //lógico afirmar que (numero % 2 != 0) é true
   {
    return false;
   }
}


int main()
{
   int numero;

   printf ("\nDigite um numero inteiro: ");
   scanf("%d", &numero);
 
   if (verificar_par(numero)) 
   {
      printf("\nNumero %d eh Par!",numero);
   }
   else
   {
      printf("\nNumero %d eh Impar!", numero);
   }

    return 0;
}
