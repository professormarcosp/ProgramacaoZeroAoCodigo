/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

double calcular_area_triangulo(double base, double altura);


int main()
{
   double base, altura;

   printf("\nDigite a base e a altura do triangulo (separados por espaco): ");
   scanf("%lf %lf", &base, &altura);

   double area = calcular_area_triangulo(base, altura);

   printf("A área do trinagulo eh: %.2lf\n", area);

   return 0;
}

double calcular_area_triangulo(double base, double altura)
{
   return (base * altura) / 2.0;
}
