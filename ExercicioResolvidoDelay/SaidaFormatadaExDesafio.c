/*Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
professormarcosp@gmail.com

Exercício: Crie um programa em C, que coloque na tela a frase: “Herrar é Umano!” 
e depois de 3 segundos apague esta frase usando 17 caracteres de escape \b 
e depois 17 caracteres espaço. Então passados 3 segundos coloque na tela Ops! Errar é Humano!
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	printf("\"Herrar é Umano!\"");
	Sleep(3000);
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	Sleep(3000);
	printf("                 ");
	Sleep(3000);
	printf("\n\"Ops! Errar é Humano!\"");
	system("Pause > Nul");
	
	return 0;
}
