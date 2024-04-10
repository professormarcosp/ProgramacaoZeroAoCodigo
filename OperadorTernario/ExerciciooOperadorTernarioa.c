/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

/*
ENTRADA:
valor total da compra e uma variável booleana tem_desconto
PROCESSAMENTO:
calcular desconto de uma compra
Se tem_desconto for verdadeira, o programa deve aplicar um desconto de 10% sobre o valor total da compra.
Caso contrário, o programa deve manter o valor total inalterado

SAÍDA:
exibir o valor final da compra.*/

#include <stdio.h>
#include <stdbool.h>


int main()
{

   //ENTRADA
   double total_compra;
   bool tem_desconto;

   printf("\nDigite o valor total da compra: ");;
   scanf("%lf", &total_compra);

   printf("\nO desconto esta disponveil? (Digite 1 para Sim, ou 0 para nao): ");
   scanf("%d", &tem_desconto);

   //se tem_desconto for true: aplicar o desconto de 10%
   //0.9 é 90% logo se multiplicar 0.9 pelo valor estaremos retirandpo
   //0.1 que é 10%
   
   double valor_final = (tem_desconto) ? (0.9 * total_compra) : total_compra;

   printf("O valor final da compra eh: R$%.2lf\n", valor_final);


   return 0;
}
