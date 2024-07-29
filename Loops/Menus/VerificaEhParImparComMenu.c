/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

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
   char continuar;

   //a partir daqui para não ficar criando a variavel a cada iteração
   do 
   {
   
   printf ("\nDigite um numero inteiro: ");
   scanf("%d", &numero);
 
   if (verificar_par(numero)) 
   {
      printf("\nNumero %d eh Par!\n",numero);
   }
   else
   {
      printf("\nNumero %d eh Impar!\n", numero);
   }

    printf("Deseja continuar? (S/N)? ");
    scanf(" %c", &continuar);
    continuar = toupper (continuar); // transforma para maiúsculo

   } while (continuar == 'S');

    return 0;
}
