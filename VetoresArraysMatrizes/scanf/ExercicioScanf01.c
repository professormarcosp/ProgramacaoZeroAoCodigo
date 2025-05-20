/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numeros[5]; // 5 elementos, índices de 0 a 4
    int i; // aqui i declarado uma única vez
    
    for(i = 0; i < 5; i++)
    {
        //i + 1 tornará mais amigável a visualização das posições
        //para o usuário que não sabe que na linguagem C começa com zero
        //Mas lembre que i + 1 não altera o valor de i, apenas usa este valor
        //perceba que não há atribuição, logo não haverá mudanas no valor de i
        //só existe modificação de valor se fosse i = i + 1 ou i++ ou ++i
        printf("\nDigite o valor da posicao %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nValores do vetor inseridos: ");
    printf("[");
    //aqui pode ser usado i apenas nos dois for
    //i será novamente iniciado com zero logo o valor de i após o 
    //primeiro for que é 5 será novamente zero e tudo dará certo
    //no entanto ainda assim você está declarando duas vezes i
    //o melhor é apenas uma vez declarar i, para não usar duas posições
    //de memória. Em sistema embarcados e críticos isso faz diferença
    for (i = 0; i < 5; i++)
    {
        printf(" %d ", numeros[i]);
    }
    printf("]");

    return 0;
}
