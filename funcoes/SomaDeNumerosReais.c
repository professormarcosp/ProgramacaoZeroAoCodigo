/*Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
professormarcosp@gmail.com
*/

#include <stdio.h>

// Declaração da função de soma de números reais
float soma_numeros_reais(float num1, float num2);

int main() {
    float num1 = 10.5; // Exemplo: substitua pelos valores desejados
    float num2 = 5.3;  // Exemplo: substitua pelos valores desejados
    float result;

    // Chamada da função para somar os números reais
    result = soma_numeros_reais(num1, num2);

    printf("A soma dos números %.2f e %.2f é: %.2f\n", num1, num2, result);

    return 0;
}

// Definição da função de soma de números reais
float soma_numeros_reais(float num1, float num2) {
    return num1 + num2;
}
