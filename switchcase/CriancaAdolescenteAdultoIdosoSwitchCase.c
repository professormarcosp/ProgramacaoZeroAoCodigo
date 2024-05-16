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
   int idade;

   printf("\nDigite a idade: ");
   scanf("%d", &idade);

   switch ((idade >= 0) + (idade >= 13) + (idade >= 18) + (idade >= 60))
   {
      //se idade maior que zero e restante for falso será 1 + 0 + 0 + 0
      // como idade >= 13 deu falso e idade >=0 deu 1(true) sabemos que idade
      // está entre 0 e 12
      case 1:
         printf("\nCrianca\n");
         break;

      //se idade maior que zero e idade >=13 verdadeiro e s restante for falso será
      //1 + 1 + 0 + 0 = 2
      // como idade >= 13 deu verdadeiro e idade >=0 deu 1(true) sabemos que idade
      // está entre 13 e 17 pois se estiver entre 0 e 12 entraria no case 1:
      case 2:
         printf("\nAdolescente\n");
         break;

      //se idade maior que zero e idade >=13 verdadeiro e idade >=18 verdadeiro e
      //idade >=60 for falso será  1 + 1 + 1 + 0 = 3
      // como idade >= 13 deu verdadeiro e idade >=0 deu 1(true) e idade >=18 deu true
      // sabemos que idade está entre 18 e 59 pois se estiver entre 0 e 12 entraria no case 1:
      //e se estiver entre 13 e 17 entratia no case 2
      case 3:
         printf("\nAdulto\n");
         break;

      //se idade maior que zero e idade >=13 verdadeiro e idade >=18 verdadeiro e
      //idade >=60 for verdadeiro será  1 + 1 + 1 + 1 = 4
      // como idade >= 13 deu verdadeiro e idade >=0 deu 1(true) e idade >=18 deu true
      // e idade >= 60 deu true sabemos que idade será maior ou igual a 60
      // sabemos que idade maior ou igual a 60 pois se estiver entre 0 e 12 entraria no case 1:
      //e se estiver entre 13 e 17 entratia no case 2 e se estiver entre 18 e 59 case 3:
      case 4:
         printf ("\nIdoso\n");
         break;

      default:
         printf("\nIdade invalida!\n");
   }

   return 0;
}
