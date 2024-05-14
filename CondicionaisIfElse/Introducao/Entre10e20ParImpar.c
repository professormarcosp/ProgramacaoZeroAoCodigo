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
   int numero;

   printf("\nDigite um numero: ");
   scanf("%d", &numero);

   //se o numero estiver entre 10 e 20 siga dentro deste if
   if (numero >= 10 && numero <= 20)
   {
      //se numero for par entre neste if
      if(numero % 2 == 0)
      {
         printf("\nO numero eh par e esta no intervalo de 10 a 20");
      }
      //mas se numero for impar entre neste senão (else)
      else
      {
         printf("\nO numero eh impar e esta no intervalo de 10 a 20");
      }
   }
   //aqui e senão do primeiro if e indicará se o numero não esta
   //no intervalo entre 10 e 20, já que se isso (numero >= 10 && numero <= 20)
   //for falso, entra neste senão
   //logo cuidado com os ifs aninhados
   else
   {
      printf("\nO numero nao esta no intervalo de 10 a 20");
   }

   return 0;
}
