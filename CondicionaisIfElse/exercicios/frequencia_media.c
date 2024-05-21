#include <stdio.h>

int main() 
{
  float nota1, nota2, nota3, frequencia;

  printf("\nDigite a nota 1: ");
  scanf("%f", &nota1);

  printf("\nDigite a nota 2: ");
  scanf("%f", &nota2);

  printf("\nDigite a nota 3: ");
  scanf("%f", &nota3);

  printf("\nDigite a frequencia (porcentagem): ");
  scanf("%f", &frequencia);

  float media = (nota1 + nota2 + nota3) / 3;

  if (media >= 6 && frequencia >= 75) 
  {
    printf("\nAluno aprovado!\nMedia: %.1f\nFrequencia: %.1f%%\n", media, frequencia);
  } 
  else 
  {
    printf("\nAluno reprovado!\nMedia: %.1f\nFrequencia: %.1f%%\n", media, frequencia);
  }

  return 0;
}
