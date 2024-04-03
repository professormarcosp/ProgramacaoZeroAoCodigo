#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número não é igual a 10 usando o operador NOT (!)
    // Se for verdadeiro, imprime "O número é diferente de 10", caso contrário, imprime "O número é igual a 10"
    printf("%s\n", (numero != 10) ? "O número é diferente de 10" : "O número é igual a 10");

    return 0;
}
