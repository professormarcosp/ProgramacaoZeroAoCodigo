/*Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
professormarcosp@gmail.com
*/

/*Crie um programa em C no Windows, que coloque na tela o número 1234
e depois e 4 segundos retroceda 4 caracteres com 4  \b 
e em seguida espere 4 segundos e escreva 4 caracteres 
espaços para apagar da tela o número 1234*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
	printf("\n\t\t1234");
	Sleep(4000);
	printf("\b\b\b\b");
	Sleep(4000);
	printf("    ");
	system("Pause > Nul");
		
	return 0;
}
