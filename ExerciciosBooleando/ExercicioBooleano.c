/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C

Crie um programa em C que declare três variáveis booleanas de nome: ligado, numero_par, numero_primo usando os tipos int, _Bool e bool. 
Inicie ao menos uma das variáveis  com 1 ou 0 e com true ou false e exiba as informações contidas nestas variáveis na tela.
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
   int ligado = 1;
   _Bool numero_par = false;
   bool numero_primo = true;

   printf("\nConteudo Variavel ligado: %d",ligado);
   printf("\nConteudo Variavel numero_par: %d",numero_par);
   printf("\nConteudo Variavel numero_primo: %d",numero_primo);

   return 0;
}
