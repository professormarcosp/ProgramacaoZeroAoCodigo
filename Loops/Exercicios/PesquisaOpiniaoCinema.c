/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int contador_otimo = 0, contador_bom = 0, contador_regular = 0;
    int contador_ruim = 0, contador_pessimo = 0, contador_acima_65_pessimo = 0;
    int soma_idade_ruim = 0, total_respostas = 0;

    while (true)
    {
        int idade, opiniao;
        printf("\nDigite a idade do espectador (ou -1 para encerrar): ");
        scanf("%d", &idade);

        if (idade == -1) // condicao de parada do loop
            break;

        printf("Digite a opiniao sobre o filme (1-otimo, 2-bom, 3-regular, 4-ruim, 5-pesimo): ");
        scanf("%d", &opiniao);

        total_respostas++; // incrementa o número de respostas

        if (opiniao == 1)
            contador_otimo++;
        else if (opiniao == 2)
            contador_bom++;
        else if(opiniao == 3)
            contador_regular++;
        else if (opiniao == 4)
        {
            contador_ruim++;
            soma_idade_ruim +=idade;
        }
        else if (opiniao == 5)
        {
            contador_pessimo++;
            if (idade > 65)
                contador_acima_65_pessimo++;
        }

    } // fim while

    //calculo da porcentagem e media
        if (total_respostas > 0)
        {
            float porcentagem_bom_regular = 0.0;
            float media_idade_ruim = 0.0;

            //calculo de porcentagem de respostas 'bom' e 'regular'
            porcentagem_bom_regular = ((contador_bom + contador_regular) * 100) / total_respostas;

            //calculo da media de idade para respostas 'ruim'
            if (contador_ruim > 0)
            {
                media_idade_ruim = (float)soma_idade_ruim / contador_ruim;
            }
            else
            {
                media_idade_ruim = 0;
            }

            //exibicao dos resultados
            printf("\nQuantidade de respostas 'otimo': %d",contador_otimo );
            printf("\nPorcentagem de respostas 'bom' e regular: %.2f%%", porcentagem_bom_regular );
            printf("\nMedia de idade das pessoas que responderam 'ruim': %.0f", media_idade_ruim);
            printf("\nQuantidade de pessoas acima de 65 anos que responderam 'pessimo': %d\n", contador_acima_65_pessimo);
        }
        else
        {
            printf("\nNenhuma resposta foi registrada.\n");

        }

    

    return 0;
}
