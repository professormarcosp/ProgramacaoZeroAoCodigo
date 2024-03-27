/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main() {
    float num1, num2;
    int resultado;

    // Solicita e lê o primeiro número
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    // Solicita e lê o segundo número
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Compara os números e armazena o resultado na variável 'resultado'
    resultado = num1 > num2;

    // Imprime o resultado da comparação usando o operador ternário
    printf("\n O resultado da comparacao num1 > num2: %s", resultado ? "Verdadeiro" : "Falso");

    return 0;
}
