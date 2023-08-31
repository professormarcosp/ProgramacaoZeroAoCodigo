/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*Exercício Proposto: Transforme este código para que os dados sejam solicitados do usuário
no terminal, via função scanf.*/

#include <stdio.h>

float calcula_area_retangulo(float base, float altura);

int main()
{
   float base = 5.6;
   float altura = 8.5;
   float area_retangulo = calcula_area_retangulo(base,altura);

   printf("\nArea do Retangulo de Base: %.2f e Altura: %.2f eh: %.2f", base, altura, area_retangulo);

   return 0;
}

float calcula_area_retangulo(float base_retangulo, float altura_retangulo)
{
   return (base_retangulo * altura_retangulo);
}
