/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    int contador = 0;
    float nota;
    float soma = 0.0;

    while (1) // loop infinito
    {
        //ENTRADA
        printf("\nDigite a nota (ou digite -1 para encerrar): ");
        scanf("%f", &nota);

        //Parada do loop. Se nota -1 entra neste if e break interrompe o 
        //loop indo para depois do while
        if (nota == -1)
            break; // sai do loop
        else if (nota < 0  || nota > 10.0) // aqui não permite notas menores que zero 
        //e maiores que 10 nota menor que zero OU nota maior que 10
        // para não entrar aqui as duas condições precisam ser falsas
        //pois o OU se alguma condição for verdadeira resultado sera true e entrará
        //no if pois será ou abaixo de zero ou nota acima de 10.0
        {
            printf("\nDigite um numero positivo entre 0 e 10 para nota!");
            continue; // volta ao inicio do loop
        }

        soma += nota;  // se nota não for -1 será acumulada em soma
        contador++; // conta a quantidade de notas inseridas

    } // fim while deve ser aqui e somente depois colocar as notas

        if(contador > 0)
        {
            float media = soma /contador; // calcula a media
            //que será a soma total de notas divido pelo numero de notas
            printf("\nA media das notas eh: %.2f\n", media);
        }
        else
        {
            printf("\nNenhuma nota foi inserida. \n");
        }
    

    return 0;
}
