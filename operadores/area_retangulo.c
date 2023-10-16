/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

//código sem otimização
#include <stdio.h>

//protótipo da função
int calcular_area_retangulo(int base, int altura);


int main()
{
   int base, altura;

   printf("\nDigite a base e altura do retangulo separados por espaco: ");
   scanf("%d %d", &base, &altura);

   int area = calcular_area_retangulo(base, altura);
   printf("\na area do retangulo eh: %d", area);

   return 0;
}

int calcular_area_retangulo(int base, int altura)
{
   int area = (base * altura);
   return area;
}
