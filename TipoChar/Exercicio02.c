/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C

Utilizando o código decimal da tabela ASCII crie um programa
em C que coloque na tela as vogais maiúsculas do alfabeto.
*/

#include <stdio.h>

int main() {

    int vogal_A = 65;
    int vogal_E = 69;
    int vogal_I = 73;
    int vogal_O = 79;
    int vogal_U = 85;

    printf("\nVogais do nosso alfabeto: %c %c %c %c %c",vogal_A,vogal_E,vogal_I,vogal_O,vogal_U);

    return 0;
}
