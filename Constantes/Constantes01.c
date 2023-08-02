/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
*/

#include <stdio.h>

//Exemplo de constantes usando a palavra-chave "const"
const int ANO_ATUAL = 3026;
const float PI = 3.14159;
const char LETRA_A = 'A';
const char NOME[] = "Professor Marcos Pacheco";

int main()
{
   printf("O ano atual: %d\n", ANO_ATUAL);
   printf("O valor de PI: %.5f\n", PI);
   printf("A letra A tem o codigo ASCII: %d\n", LETRA_A);
   printf("A string NOME: %s\n", NOME);


   return 0;
}
