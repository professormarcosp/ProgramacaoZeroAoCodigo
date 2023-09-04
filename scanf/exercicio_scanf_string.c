/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   char primeiro_nome[50]; //string com 50 elementos
   char sobrenome[50];

   printf("\nDigite seu primeiro nome: ");
   //em strings não usamos o & na frente da variável
   //isso porque o nome da string que é um vetor é o mesmo que
   //&primeiro_nome[0] ou endereço de memória do primeiro
   //elemento do vetor
   scanf("%s", primeiro_nome);

   printf("\nDigite seu sobrenome: ");
   scanf("%s", sobrenome); //não tem & em string!

   printf("\nSeu nome completo eh: %s %s\n", primeiro_nome, sobrenome);

   return 0;
}
