/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse aqui meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

#include <stdio.h>

int main() 
{
    int dia;
    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    if (dia == 1)
    {
        printf("Domingo\n");
    }
    else if (dia == 2)
    {
        printf("Segunda-feira\n");
    }
    else if (dia == 3)
    {
        printf("Terça-feira\n");
    }
    else if (dia == 4)
    {
        printf("Quarta-feira\n");
    }
    else if (dia == 5)
    {
        printf("Quinta-feira\n");
    }
    else if (dia == 6)
    {
        printf("Sexta-feira\n");
    }
    else if (dia == 7)
    {
        printf("Sabado\n");
    }
    else
    {
        printf("Numero invalido\n");
    }

    return 0;
}
