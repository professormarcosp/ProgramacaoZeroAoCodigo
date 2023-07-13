/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
funções getchar() e putchar()
*/

#include <stdio.h>

int main() {
    int c;

    printf("Digite um caractere: ");
    c = getchar();

    //printf("O caractere digitado foi: %c ",c);
    putchar(c);

    return 0;
}
