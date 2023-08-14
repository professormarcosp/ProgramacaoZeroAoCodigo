/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>

//Para isso você precisa indicar ao compilador que existe
//uma função soma_numeros_reais e que você irá declarar a função e somente
//depois a definição da função com o corpo da função será apresentada
//isso é feito através da assinatura da função

//isso também é chamado de protótipo da função!
float soma_numeros_reais(float numero1, float numero2);

int main()
{
   float numero1 = 10.5;
   float numero2 = 5.3;
   float result;
   //vai ocorrer um erro. pois o compilador segue o padrão TOP-DOWN (de cima para baixo)
   //Quando ele chegar aqui não vai reconhecer quem é esta função soma_numero_reais
   result = soma_numeros_reais(numero1,numero2);
   printf("A soma dos numeros %.1f e %.1f\n eh: %.1f",numero1, numero2, result);

   return 0;
}

float soma_numeros_reais(float numero1, float numero2)
{
   return (numero1 + numero2);
}
