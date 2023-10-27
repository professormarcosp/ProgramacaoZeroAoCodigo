/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>

int main() {
    int numero = 10;  // Inicialmente, atribui o valor 10 a 'numero'

    // Utilize os operadores de atribuição simplificada
    numero += 5;  // Adicione 5 a 'numero'  numero = 10 + 5 = 15
    numero -= 3;  // Subtraia 3 de 'numero'  numero = 15 -3 = 12
    numero *= 4;  // Multiplique 'numero' por 4 numero = 12 * 4 = 48
    numero /= 2;  // Divida 'numero' por 2 numero = 48/2 = 24
    numero %= 7;  // Encontre o resto da divisão de 'numero' por 7
    //numero = 24%7 como 24/7 é 3 pois 7 *3 =21 logo resto 24-21 que é 3
    //resultado será 3

    // Imprima o valor final de 'numero'
    printf("O valor final de 'numero' eh: %d\n", numero);

    return 0;
}
