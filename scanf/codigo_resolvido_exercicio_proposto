/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*Exercício Proposto: Transforme este código para que
os dados sejam solicitados do usuário via função scanf.*/

/*Resolução*/

#include <stdio.h>

float calcula_area_retangulo(float base, float altura);

int main()
{
   float base;
   float altura;

   printf("\nDigite o valor da Base do Retangulo: ");
   scanf("%f", &base);

   printf("\nDigite o valor da altura do Retangulo: ");
   scanf("%f", &altura); //importante não esquecer o & na frente
   //do nome da variável. Lemmbre-se & endereço de memória de...
   //a função scanf precisa receber o endereço de memória da variável
   //para conseguir alterar o valor dela e colocar o valor que o usuário
   //digitar dentro da variavel base e altura.

   float area_retangulo = calcula_area_retangulo(base,altura);

   printf("\nArea do Retangulo de Base: %.2f e Altura: %.2f eh: %.2f", base, altura, area_retangulo);

   return 0;
}

float calcula_area_retangulo(float base_retangulo, float altura_retangulo)
{
   return (base_retangulo * altura_retangulo);
}
