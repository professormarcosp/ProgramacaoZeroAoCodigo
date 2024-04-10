/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*
ENTRADA
números reais e fornecidos pelos usuário.
logo são três números
PROCESSAMENTO
calcule a média ponderada de três notas
Os pesos de cada nota são respectivamente:
2, 3 e 5
Certifique-se de usar parênteses para controlar a precedência dos operadores.
SAÍDA
a média ponderada das três notas

*/

#include <stdio.h>


int main()
{
   float nota1, nota2, nota3;
   float media_ponderada;

   //ENTRADA
   printf("\nDigite a nota 1: "); scanf("%f", &nota1);

   printf("\nDigite a nota 2: "); scanf("%f", &nota2);

   printf("\nDigite a nota 3: "); scanf("%f", &nota3);

   //PROCESSAMENTO
   media_ponderada = ( nota1 * 2 + nota2 * 3 + nota3 * 5 )/ (2 + 3 + 5);

   //SAIDA
   printf("\nA media ponderada das notas %.2f, %.2f, %.2f, com os pesos 2, 3 e 5 respectivamente, eh: %.2f\n", nota1, nota2, nota3, media_ponderada);

   return 0;
}

