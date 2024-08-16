
/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>

int main() 
{
    int opcao;
    int voltar_ao_menu = 1;

    while (voltar_ao_menu)
    {
        printf("\nMenu:\n");
        printf("1. Opcao 1\n");
        printf("2. Opcao 2\n");
        printf("3. Voltar ao Menu\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) 
        {
            case 1:
                printf("\nVoce escolheu a Opcao 1.\n");
                printf("Executando a Opcao 1...\n");
                break;

            case 2:
                printf("\nVoce escolheu a Opcao 2.\n");
                printf("Executando a Opcao 2...\n");
                break;

            case 3:
                // Volta ao menu principal
                break;

            case 4:
                printf("\nSaindo do programa...\n");
                return 0;

            default:
                printf("\nOpcao invalida. Tente novamente.\n");
                continue; // Volta ao início do loop
        }

        // Pergunta se o usuário deseja voltar ao menu
        if (opcao != 4)
        {
            printf("\nDeseja voltar ao menu? (1 = Sim, 2 = Nao): ");
            scanf("%d", &opcao);
            if (opcao != 1)
            {
                break;
            }
        }
    }

    return 0;
}
