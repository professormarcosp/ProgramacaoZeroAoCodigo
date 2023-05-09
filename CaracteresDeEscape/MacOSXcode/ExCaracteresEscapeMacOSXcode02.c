/*Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código 
com a Linguagem C
professormarcosp@gmail.com
*/

//Professor Marcos Pacheco
/*Criando e Compilando Programa em C com Xcode no macOS*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   printf("\n\n\n\t\t\t \"Como Colocar Apóstrofo \' Aspas Duplas \" e Barra Invertida \\ na tela?\"");
   system("read -n 1 -s -p \"\tPressione Qualquer Tecla para Continuar\"");
   
   return 0;

}

/* -n 1 significa que deve ser lido apenas um caractere do teclado
- s torna a entrada do teclado silenciosa, ou seja, os caracteres digitados pelo usuário não serão exibidos na tela
-p "Pressione Qualquer Tecla para Continuar" exibe esta mensagem no terminal
*/
