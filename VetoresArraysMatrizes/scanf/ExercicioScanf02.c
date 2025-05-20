/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
 
 int main()
 {
    int valores[4]; 
    int i;

    for(i = 0; i < 4; i++)
    {
        printf("\nDigite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    // dobrar valores de cada elemento do vetor
    for(i = 0; i < 4; i++)
    {
        // nomevetor[indice] = nomevetor[indice] * 2;
        //sendo que indice vai variar de 0 até 3 e por isso usamos for
        valores[i] = valores[i] * 2;
    }

    printf("\nValores Dobrados: ");
    printf("[");
    //quando i < 4 for falso sai do loop e não executa
    //a linha que você deseja do operador ternário
    //precisa ser i == 3
    for(i = 0; i < 4; i++)
    {   
        //se i for 3 true então coloque sem espaço e sem virgula
        //se for falso que i == 3 então coloque espaço e virgula
        //como i vai de 0, 1, 2 até 3 então para 0, 1 e 2
        //i == 3 será false e será executado esta parte false 
        //do operador ternario ? printf("%d, ", valores[i]);
        //se i == 3 ai sim coloca sem espaço e sem vírgula
        (i == 3) ? printf("%d", valores[i]) : printf("%d, ", valores[i]);  
    }
    printf("]");
   
    return 0;
 }
