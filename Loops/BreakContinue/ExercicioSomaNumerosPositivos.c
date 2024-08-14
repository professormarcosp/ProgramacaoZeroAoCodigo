/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int numero;
    int soma = 0; // importante iniciar acumlador com zero

    printf("\nDigite numeros inteiros (digite 0 (zero) para sair): ");

    while(1)  //o mesmo que while (true) crie loop quase infinito, pois neste caso 
    //temos uma condição de sair do loop com usuário digitando zero
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);

        if (numero == 0)
        {
            break; // se numero for zero é condição de parada do loop
            //irá sair do loop e encerrar o programa exibindo a soma acumulada
        }

        if (numero < 0)
        {
            continue; // se numero for negativo continue irá fazer com que a instrução 
            //restante do loop seja ignorada e retorna ao inicio do loop
        }

        soma += numero; // o mesmo que soma = soma + numero;
    } // fim while

    printf("\nA soma de todos os numeros positivos digitados foi: %d\n", soma);

    return 0;
}
