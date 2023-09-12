/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
    int decimal;
    int octal;
    int hexadecimal;

    printf("Digite um numero decimal: ");
    scanf("%i", &decimal);//base10
    fflush(stdin); //limpa buffer teclado

    printf("Digite um numero octal: ");
    scanf("%i", &octal); //base8  colocar 0(zero) na frente do numero octal
    fflush(stdin);

    printf("Digite um numero hexadecimal: ");
    scanf("%i", &hexadecimal); //base16 colocar 0x na frente do numero hexadecimal
    fflush(stdin);

    printf("Valor decimal: %i\n", decimal);
    printf("Valor decimal do octal: %i\n", octal);
    printf("Valor decimal do hexadecimal: %i\n", hexadecimal);

    return 0;
}
