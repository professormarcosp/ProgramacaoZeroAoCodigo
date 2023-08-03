/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
*/

#include <stdio.h>

//Define que ao utilizar MAX_TENTATIVAS será o mesmo que usar o valor 5
//Durante o pré-processamento todas as ocorrências de MAX_TENTATIVAS
//serão substituidas por 5
#define MAX_TENTATIVAS 5


int main()
{
   printf("Valor inicial de MAX_TENTATIVAS: %d\n", MAX_TENTATIVAS);

   //remove a definição de uma macro criada anterioremente, permitindo
   //que seja definida novamente com um novo valor
   #undef MAX_TENTATIVAS

   //Tentativa de modificar o valor de uma constante com #define
   #define MAX_TENTATIVAS 10

   printf("Novo valor de MAX_TENTATIVAS: %d\n", MAX_TENTATIVAS);

   return 0;
}

