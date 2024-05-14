/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>

int verificar_par (int numero)
{
   if (numero % 2 == 0)
   {
      return 1;
   }
   else //if (numero % 2 != 0) desnecessário!!!
      //pois se (numero % 2 == 0) for falso é
      //lógico afirmar que (numero % 2 != 0) é true
   {
    return 0;
   }
}


int main()
{
   int numero;

   printf ("\nDigite um numero inteiro: ");
   scanf("%d", &numero);
   //usar if (verificar_par(numero)) sem == 1 é adequado pois 1 é true
   //se a função retornar 1 ficaria if (1) logo if (true)
   //se a funcao retornar falso 0 ficaria if(0) ou if (false)
   //não estraria no if indo para o else!
   if (verificar_par(numero)) //lembre-se que 1 é igual true e 0 false
   {
      printf("\nNumero %d eh Par!",numero);
   }
   else
   {
      printf("\nNumero %d eh Impar!", numero);
   }

    return 0;
}


