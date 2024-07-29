/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

void exibir_menu()
{
    printf("\n1. Opção 1\n");
    printf("\n2. Opção 2\n");
    printf("\n3. Opção 3\n");
    printf("\n4. Sair\n");
} //fim exibir_menu()

    int main()
    {
        int opcao;
        int contador1 = 0, contador2 = 0, contador3 = 0;

        do
        {
            exibir_menu();
            printf("\nEscolha uma opcao: ");
            scanf("%d", &opcao);

            switch (opcao)
            {
                case 1:
                    contador1++;
                    printf("\n Você escolheu a Opção 1");
                    break;

                case 2:
                    contador2++;
                    printf("\n Você escolheu a Opção 2");
                    break;
                
                case 3:
                    contador3++;
                    printf("\n Você escolheu a Opção 3");
                    break;
                
                case 4:
                    printf("\n Saindo...");
                    printf("\nOpção 1 foi escolhida %d vezes\n", contador1);
                    printf("\nOpção 2 foi escolhida %d vezes\n", contador2);
                    printf("\nOpção 3 foi escolhida %d vezes\n", contador3);
                    break;
            
                default:
                    printf("\nOpcao inválida. Tente novamente.\n");
                    break;
                    
            } //fim switch-case


        } while (opcao !=4);
        
    } // fim main()
