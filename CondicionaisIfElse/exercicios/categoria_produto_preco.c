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
    float preco;
    
    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco < 50) 
    {
      printf("Barato\n");
    } 
    else if (preco >= 50 && preco <= 100) 
    {
      printf("Médio\n");
    } 
    else 
    {
        printf("Caro\n");
    }
    
    return 0;
}
