
/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[] = {10 ,20 ,30, 40, 50};
    
    printf("\nEndereco do vetor (usando nome do vetor): %p", numeros);
    printf("\nEndereco do primeiro elemento (&numeros[0]): %p", &numeros[0]);


    return 0;
}
