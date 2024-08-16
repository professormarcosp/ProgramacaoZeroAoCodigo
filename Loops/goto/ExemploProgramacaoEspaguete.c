/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main() {
    int opcao;

inicio:
    printf("Menu:\n");
    printf("1. Opção 1\n");
    printf("2. Opção 2\n");
    printf("3. Voltar ao Menu\n");
    printf("4. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Você escolheu a Opção 1.\n");
        goto opcao_1;
    } else if (opcao == 2) {
        printf("Você escolheu a Opção 2.\n");
        goto opcao_2;
    } else if (opcao == 3) {
        goto inicio;
    } else if (opcao == 4) {
        goto sair;
    } else {
        printf("Opção inválida. Tente novamente.\n");
        goto inicio;
    }

opcao_1:
    printf("Executando a Opção 1...\n");
    goto retorno_menu;

opcao_2:
    printf("Executando a Opção 2...\n");
    goto retorno_menu;

retorno_menu:
    printf("Deseja voltar ao menu? (1 = Sim, 2 = Não): ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        goto inicio;
    } else {
        goto sair;
    }

sair:
    printf("Saindo do programa...\n");
    return 0;
}
