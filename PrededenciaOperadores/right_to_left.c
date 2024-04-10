/* Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main() {
    int a, b, c;
    int result;

    // Inicializando os valores das variáveis
    a = 5;
    b = 3;
    c = 2;

    // Usando o operador de atribuição com associatividade da direita para a esquerda
    result = a = b = c; // Atribui o valor de c a b, e depois o valor de b a a

    // Imprimindo os resultados
    printf("a: %d\n", a); // Saída esperada: 2
    printf("b: %d\n", b); // Saída esperada: 2
    printf("c: %d\n", c); // Saída esperada: 2
    printf("result: %d\n", result); // Saída esperada: 2

    return 0;
}
