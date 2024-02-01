/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>


int main()
{
   int numero;

   printf("Digite um numero inteiro: ");
   scanf("%d", &numero);

   int antecessor = numero - 1;
   int sucessor = numero + 1;

   /*
    numero -1 apenas usa o valor de numero subtrai 1 e atribui ao antecessor
    numero + 1 só usa o valor de numero somado a 1 e atribui este valor a sucessor
    Ou seja não existe mudança do valor de numero na memoria ao usar: numero + 1
    Agora se fosse numero = numero + 1 ai sim existe uma mudança no valor de numero
    pois será feito valor de numero + 1 atribuido ao próprio numero
    portanto importante notar que numero++ muda o valor de numero na memoria
    e que apenas numero + 1 não muda!
    numero++ é o mesmo que numero = numero + 1! logo muda na memória
   */

   printf("\nO antecessor de %d: %d", numero, antecessor);
   printf("\nO sucessor de %d: %d", numero, sucessor);

   return 0;
}
