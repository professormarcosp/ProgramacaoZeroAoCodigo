/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main() 
{
    float nota1, nota2, nota3;
    float media_ponderada;

    printf(“\nDigite a primeira nota: ");  scanf("%f", &nota1);

    printf(“\nDigite a segunda nota: "); scanf("%f", &nota2);

    printf(“\nDigite a terceira nota: ");    scanf("%f", &nota3);

    media_ponderada = (nota1 * 2 + nota2 * 3 + nota3 * 5) / (2 + 3 + 5);

   printf(“\nA media ponderada das notas %.2f, %.2f e %.2f, com pesos 2, 3 e 5, respectivamente, eh: %.2f\n", nota1, nota2, nota3, media_ponderada);

    return 0;
}
