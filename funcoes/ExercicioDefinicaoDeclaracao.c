/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/ */
/*Crie um programa em C que: Declara e define uma função chamada calcular_media que contém três parâmetros inteiros, 
representando as notas de um aluno(a), e retorna a média aritmética dessas notas como um valor de ponto flutuante (float).
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
   int nota1 = 9;
   int nota2 = 7;
   int nota3 = 7;
   float media;
 
   media = calcular_media(nota1,nota2,nota3);
   printf("\n\nA media das notas %d, %d e %d eh: %.2f",nota1, nota2, nota3, media);

   return 0;
}

float calcular_media(int nota1, int nota2, int nota3)
{
    return (float)(nota1 + nota2 + nota3) / (float)3;
}
