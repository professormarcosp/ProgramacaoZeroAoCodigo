/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char string1[50];
    char string2[50];

    printf("\nDigite a primeira string (maximo de 49 caracteres): ");
    /*este caractere de espaço antes de %49 indica para scanf ignorar 
    qualquer caractere de espaço, ENTER ou tabulação antes da leitura 
    começar*/
    scanf(" %49[^\n]", string1);
    /*este espaço antes de %49 é essencial quando o programa lê uma string
    após um scanf anterior que não consumiu o \n, como %d, %f, %c, por 
    exemplo */
    getchar(); //limpa o \n que sobrou no buffer

    printf("\nDigite a segunda string (maximo de 49 caracteres): ");
    scanf(" %49[^\n]", string2);
    getchar(); //limpa o \n que sobrou no buffer

    if(strcmp(string1, string2) == 0)
    {
        printf("\nAs Strings sao iguais.\n");
    }
    else
    {
        printf("\nAs Strings sao diferentes\n");
    }
    
    
  return 0;
    
}
