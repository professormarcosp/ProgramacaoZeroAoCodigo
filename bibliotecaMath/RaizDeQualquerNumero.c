/* Professor Marcos Pacheco professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */

#include <stdio.h>
#include <math.h> //necessário para usar funções matemáticas ex: sqrt, pow

//protótipo da função
float calcular_qualquer_raiz_numero(int radicando, int indice);


int main()
{
   int num_radicando, num_indice;

   //ENTRADA
   printf("\n Digite o radicando: ");
   scanf("%d", &num_radicando);

   printf("Digite o indice: ");
   scanf("%d", &num_indice);

   //PROCESSAMENTO
   float resultado_raiz = calcular_qualquer_raiz_numero(num_radicando, num_indice);

   //SAÍDA
   printf("\n A raiz de  %d com indice %d eh: %.2f\n", num_radicando, num_indice, resultado_raiz);

   return 0;
}

float calcular_qualquer_raiz_numero(int radicando, int indice)
{
   float resultado = pow(radicando, 1.0 / indice);

   return resultado;
}
