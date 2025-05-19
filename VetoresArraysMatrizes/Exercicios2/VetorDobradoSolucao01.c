/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int vetor_original[6] = {2, 4, 6, 8, 10, 12};
    int vetor_dobrado[6];
    int i;

    //aqui você multiplica por dois o valor de cada elemento
    //do vetor_original e atribui a cada elemento do vetor_dobrado
    //exemplo quando i = 0 ficará
    //vetor_dobrado[0] = vetor_original[0] * 2;
    //ficar vetor_dobrado[0] = 2*2;
    //assim vetor_dobrado[0] = 4;
    //será feito em todos os elementos e seus respectivos índices
    for (i = 0; i < 6; i++)
    {
        vetor_dobrado[i] = vetor_original[i] * 2;
    }

    printf("\nVetor Original: ");
    printf("[");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", vetor_original[i]);
    }
    printf("]");

    printf("\nVetor Dobrado:  ");
    printf("[");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", vetor_dobrado[i]);
    }
    printf("]");
    
    return 0;
}
