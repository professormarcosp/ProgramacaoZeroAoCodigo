/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*
Forneça o código completo e solicite os dados de entrada do usuário.
*/

#include <stdio.h>
#include <math.h>

//apesar de receber numero inteiro o resultado da operacao pode ser double
//como visto em raiz quadrada de 15
//logo devemos colocar o retorno da função como sendo double!
double calcular_raiz_quadrada(int x)
{

return sqrt(x); // necessário header file (arquivo de cabeçalho math.h

}

int main()
{
   int numero_inteiro;

   printf("\nDigite um numero inteiro: ");
   scanf("%d", &numero_inteiro);

   printf("Raiz quadrada do numero %d eh: %.4lf", numero_inteiro, calcular_raiz_quadrada(numero_inteiro));


   return 0;
}
