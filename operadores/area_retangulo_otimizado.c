/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

//protótipo da função
int calcular_area_retangulo(int base, int altura);


int main()
{
   int base, altura;

   printf("\nDigite a base e altura do retangulo separados por espaco: ");
   scanf("%d %d", &base, &altura);

   printf("\na area do retangulo eh: %d", calcular_area_retangulo(base, altura));

   return 0;
}

int calcular_area_retangulo(int base, int altura)
{
   return (base * altura);
}
