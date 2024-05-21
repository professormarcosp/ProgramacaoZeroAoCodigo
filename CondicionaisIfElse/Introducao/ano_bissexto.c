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
    int ano;
    printf("\nDigite um ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) 
    {
      printf("\nO ano %d eh bissexto.\n", ano);
    } 
    else 
    {
      printf("\nO ano %d nao eh bissexto.\n", ano);
    }

    return 0;
}
