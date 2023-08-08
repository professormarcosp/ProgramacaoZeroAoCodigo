/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/

#include <stdio.h>
#include <locale.h>

//Definição da função exibir_mensagem
/*a função não retorna um valor, portanto não retorna nada
void (vazio) a função também não tem parâmetros*/
void exibir_mensagem()
{
   printf("Bem-Vindo(a) ao mundo das funções em C!\n");
}


int main()
{
   setlocale(LC_ALL,"");
   //Chamando a função exibir_mensagem
   //aqui a função será chamada na execução do
   //código e o fluxo de execução será enviado para
   //o trecho de código da função!
   //erro comum: chamar a função com a assinatura
   //chame apenas com nome e passe argumentos para
   //a função se for o caso
   exibir_mensagem();

   return 0;
}
