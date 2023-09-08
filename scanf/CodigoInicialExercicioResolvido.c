/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main()
{
    int num1;
    int num2;

    //Leitura dos numeros a serem somados
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1); //lembre do &

    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);


    //int resultado = num1 + num2;

    printf("A soma de %d e %d eh %d\n", num1, num2, (num1 + num2));

    return 0;
}
