/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
 
int calcula_indice(int base, int deslocamento)
{
    return base + deslocamento; // calcula o indice
}


int main()
{
    int numeros[] = {10, 20, 30, 40, 50};
    int base = 1, deslocamento = 2;
    
    printf("\nO Valor no indice %d ", calcula_indice(base, deslocamento));
    printf("eh %d\n", numeros[calcula_indice(base, deslocamento)]); // 1 + 2

    return 0;
}
