/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int verificar_par(int numero)
{
   return (numero % 2) == 0 ? 1 : 0;
   //Condição se Numero Mod 2 for zero é par retorne 1 (true)
   //Condição se Numero Mod 2 for diferente de zero é impar retorne 0 (false)
}

int main()
{
   int num;

   printf("\nDigite um numero inteiro: ");
   scanf("%d", &num);

   printf("%s\n", verificar_par(num) ? "Numero Par" : "Numero Impar");
   //Mas uma condicao. Se a chamada da função verificar_par
   //Retornar 1 significa que numero é Par logo Mostre esta string "Numero Par"
   //Porém se a chamada da função verificar_par(num) retornar diferente de zero
   //significa que num é impar e então mostre "Numero Impar"

   return 0;
}
