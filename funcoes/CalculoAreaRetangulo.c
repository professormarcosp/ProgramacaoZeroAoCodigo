/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

float calcula_area_retangulo(float base, float altura);

int main()
{
   //essas variáveis pertencem ao escopo da função main!
   //logo são visíveis, acessíveis dentro dela!
   float base = 5.6;
   float altura = 8.5;
   float area_retangulo = calcula_area_retangulo(base,altura);

   printf("\nArea do Retangulo de %p Base: %.2f e Altura: %.2f eh: %.2f", &base, base, altura, area_retangulo);

   return 0;
}
//base e altura só pertencem ao escopo da função calcula_area_retangulo
//as variáveis locais base e altura não estão visíveis, acessíveis dentro
//da função main
float calcula_area_retangulo(float base_retangulo, float altura_retangulo)
{
   return (base_retangulo * altura_retangulo);
}
