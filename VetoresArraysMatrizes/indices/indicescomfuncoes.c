/*
Professor Marcos Pacheco
Curso: Aprendendo Programação do Zero ao Código com a Linguagem C
Disponível em: 
https://www.udemy.com/course/aprendendo-programacao-do-zero-ao-codigo-com-a-linguagem-c/?referralCode=B25C90BF63C49D7D9244
*/

#include <stdio.h>

int retorna_indice();

//dará erro, pois programação TOP-DOWN. Quando o compilador chegar na chamadada
//da função retorna_indice() não será encontrada a definicao da funcao e o compilador
//ira indicar que esta funcao nao existe. pois o compilador vai linha a linha checando o codigo
//você precisa indicar ao compilador que esta função existe e isso é feito com o conceito
//que você já estudou PROTÓTIPO DE FUNÇÃO
int main()
{
    int numeros[] = {10 ,20, 30, 40, 50};

    printf("\nO valor no indice %d eh %d\n",retorna_indice(), numeros[retorna_indice()]);

    return 0;
}

int retorna_indice()
{
    return 2;
}
