/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */
/*Certifique-se de que o protótipo de função seja colocado
acima da função main para evitar erros de compilação.*/

/*Crie um programa em C que: Declara e define uma função chamada calcular_media que contém três parâmetros inteiros, representando as notas de um aluno(a), e retorna a média aritmética dessas notas como um valor de ponto flutuante (float).
No corpo principal do programa (função main), atribua valores às três notas do aluno.
Exiba a média calculada das notas na tela com uma mensagem apropriada.
Obs: Certifique-se de que o protótipo de função seja colocado acima da função main para evitar erros de compilação.
Utilize formatação adequada ao exibir a média na tela, mostrando até duas casas decimais.
*/

//protótipo da função (declaração da função)
float calcular_media(int nota1, int nota2, int nota3);

#include <stdio.h>


int main()
{
   /*No corpo principal do programa (função main),
   atribua valores às três notas do aluno.*/
   int n1 = 9;
   int n2 = 7;
   int n3 = 7;

   /*Exiba a média calculada das notas na tela
   com uma mensagem apropriada.*/
   /*Utilize formatação adequada ao exibir a
   média na tela, mostrando até duas casas decimais.*/

   printf("\n\nA media das notas %d, %d e %d eh: %.2f",n1, n2, n3, calcular_media(n1,n2,n3));

   return 0;
}

float calcular_media(int nota1, int nota2, int nota3)
{
   //int dividido por int dá int
   //então é preciso int dividido por float! 3.0
   return (float)(nota1 + nota2 + nota3) / (float)3;
}
