/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>

//função que recebe dois valores inteiros e retorna
//a multiplicação destes valores
int multiplica_numeros(int valor1, int valor2)
{
   printf("\n\nExecutando a funcao multiplica_numeros");
   printf("\nEndereco de memoria de valor1: %p e valor2 %p", &valor1, &valor2);
   //& mostra o endereço de memória da variável!
   //& ler-se: Endereço de memória de
   return valor1 * valor2;
}

int main()
{
   //valor1 e valor2 são variaveis locais da função main()
   // e também podem ter nomes diferentes
   //mas são variaveis com endereços de memória e localização
   //na memória RAM diferentes das variáveis locais valor1 e valor2 da função
   //multiplica_numeros
   int valor1 = 7;
   int valor2 = 3;

   printf("\n\nExecutando a funcao main()");
   printf("\nEndereco de memoria de valor1: %p e valor2 %p", &valor1, &valor2);
   //chamada da função para multiplicar os números inteiros

   //valor1 e valor2 são os argumentos que serão enviados aos parâmetros da
   //função multiplica_numeros

   //exibindo resultado na tela
   //você também pode usar a chamada da função diretamente na função printf
   //neste caso a função será chamada e o resultado retornada por ela será colocado na tela
   printf("\n\nO resultado da multiplicacao de %d e %d eh: %d\n", valor1, valor2, multiplica_numeros(valor1, valor2));

   return 0;
}
