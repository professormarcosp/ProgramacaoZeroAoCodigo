/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main()
{
    int numeros[10];
    int vetor_pares[10], vetor_impares[10];
    int i, contador_pares = 0, contador_impares = 0;

    printf("\nDigite 10 numeros inteiros:\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nNumero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        //se for par
        if(numeros[i] % 2 == 0)
        {
            //vetor no indice 0 (que é valor inicial de contador_pares)
            //recebe o valor contido em numeros[i]
            vetor_pares[contador_pares] = numeros[i];
            //depois o valor de contador_pares é incrementado ficando 1
            contador_pares++;            
        }
        else
        {
            //se for impar ocorre a mesma lógica
            vetor_impares[contador_impares] = numeros[i];
            contador_impares++; 
        }
    }
    printf("\nNumeros digitados: \n[");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", numeros[i]);
        if(i < 9) // quando chegar em 9 é o último indice logo não colocar virgula
        //i == 9 não entra neste if e o vetor de 10 elementos tem indices de 0 a 9
        {
            printf(", ");
        }
    }
    printf("]");

    printf("\n\nNumeros pares:\n[");
    //aqui importante na lógica contador_pares que indica
    //a quantidade de elementos pares contidos no vetor
    //e indica até quando o for vai percorrer o vetor
    for(i = 0; i < contador_pares; i++)
    {
        printf("%d ", vetor_pares[i]);
        if(i < contador_pares - 1) // quando chegar em contador_pares -1 é o último indice 
        //logo não colocar virgula
        //Digamos 3 pares i == 2 não entra neste if e o vetor de 3 elementos 
        //tem indices de 0 a 2
        {
            printf(", ");
        }
    }
    printf("]");

    printf("\n\nNumeros impares:\n[");
    //aqui importante na lógica contador_impares que indica
    //a quantidade de elementos pares contidos no vetor
    //e indica até quando o for vai percorrer o vetor
    for(i = 0; i < contador_impares; i++)
    {
        printf("%d ", vetor_impares[i]);
        if ( i < contador_impares - 1)
        {
            printf(", ");
        }
    }
    printf("]");


    return 0;
}
