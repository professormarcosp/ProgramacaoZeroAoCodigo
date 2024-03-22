/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   char nome[100];
   int idade;

   printf("\nDigite seu nome: ");
   scanf("%[^\n]s", nome);
   //%[^\n]s também evitar a leitura do enter. Pois, está sendo indicado
   //pela "expressão regular" %[^\n]s que indica ler a string excluindo o \n enter
   //se o enter não é lido não ocorre o pulo!

   //Desabilita o buffer para stdin (neste caso teclado)
   setbuf(stdin, NULL);
   /*Depois de ler uma string para evitar o "pulo" de leiura você pode usar
   o setbuf evitando que seja lido o \n enter na variável idade*/

   printf("\nDigite sua idade: ");
   scanf("%d", &idade);

   printf("\nOi %s vc tem %d de idade", nome, idade);


   return 0;
}
