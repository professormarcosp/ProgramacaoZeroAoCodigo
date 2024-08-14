/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) 
    {
        if (i == 3) 
        {
            continue;  // Pula a iteração quando i é igual a 3
        }
        /*quando i for igual a 3 irá ignorar esta parte específica do loop 
        e volta para incio do for para continuar com o próximo ciclo(iteração). */
        printf("Valor de i: %d\n", i); 

    }

    return 0;
}
