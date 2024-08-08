/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>
#include <ctype.h> //para usar isdigit
#include <stdlib.h> //para usar atoi

void exibir_menu();

int main()
{
    int opcao;
    char entrada[10]; //é uma string, um vetor(array) de caracteres

    do
    {
      exibir_menu();
      printf("\nEscolha uma opcao: ");
      scanf("%s", entrada); // a entrada será avaliada apenas o primeiro caractere
      //que será entrada[0] primeiro elemento do vetor

      if (isdigit(entrada[0]))
      {
         //se for um digito (numero) entre neste if
         opcao = atoi(entrada);
         //atoi transforma o primeiro caractere do vetor de caracteres (string) 
         //entrada em inteiro!
         //o nome de um vetor em C é o mesmo que o endereço do primeiro 
         //elmento do vetor, ou seja entrada é o mesmo que &entrada[0]
         //opcao = atoi(&entrada[0]);
      }
      else
      {
        //senão indique opcao = 0;
        opcao = 0;
      }

      switch (opcao)
      {
        case 1:
            printf("Voce escolher a opcao 1\n");
            break;
        case 2:
            printf("Voce escolher a opcao 2\n");
            break;
        case 3:
            printf("Voce escolher a opcao 3\n");
            break;
        case 4:
            printf("Voce escolher a opcao 4\n");
            break;
        default:
            printf("\nEntrada invalida. Tente novamente. \n");
            break;
      }
         

    } while (opcao != 4);
    

    return 0;
}

void exibir_menu()
{
    printf("\n1. Opcao 1\n");
    printf("\n2. Opcao 2\n");
    printf("\n3. Opcao 3\n");
    printf("\n4. Opcao 4\n");
}
