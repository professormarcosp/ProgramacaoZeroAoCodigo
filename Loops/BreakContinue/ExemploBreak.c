/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 5) {
            break;  // Interrompe o loop quando i é igual a 5
        }
        printf("Valor de i: %d\n", i);
        i++;
    }
    return 0;
}
// CTRL + - no Linux para zoom
