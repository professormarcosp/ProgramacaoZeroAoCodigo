/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int main()
{
    char nome[21]; // 20 caracteres + '\0'

    printf("\nDigite um nome com espacos (max 20 caracteres): ");

    scanf("%20[^\n]", nome);

    printf("\nNome digitado: %s\n", nome);

    return 0;
}
