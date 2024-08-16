/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main() {
    int i = 0;

    start: // Rótulo
    if (i < 5) {
        printf("O valor de i é: %d\n", i);
        i++;
        goto start; // Salta para o rótulo 'start'
    }

    printf("Fim do loop.\n");
    return 0;
}
