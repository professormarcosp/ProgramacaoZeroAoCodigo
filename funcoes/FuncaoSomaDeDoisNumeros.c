/*Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Meus cursos em: https://www.udemy.com/user/marcostim/
*/
#include <stdio.h>
//funcao que recebe dois valores reais e retorna
//a soma destes valores.
//o retorno da função será do tipo float
/*Observe que estes parâmetros podem ter nomes diferentes das variáveis declaradas
na função main. numero1 e numero2 são variaveis locais da função soma_numeros_reais*/
float soma_numeros_reais(float numero1, float numero2)
{
   return (numero1 + numero2);
   //estas variaveis numero1 e numero2 que são os parâmetros
   //da função são destruídas da memória
   //logo após a função ser encerrada e concluir
   //a operaçao e códigos dela

}

int main()
{
   //num1 e num2 são variáveis locais da função main()
   //e também podem ter mesmo nome
   //contudo são variaveis com endereços de memória e localização
   //na memória ram diferentes!!!
   float numero1 = 10.5;
   float numero2 = 5.3;
   float result;

   //chamada da função para somar os números reais
   //soma_numeros_reais é chamada com dois argumentos (num1 e num2) que são variaveis
   //que contem os valores 10.5 e 5.3
   //o compilador vai buscar estes valores na memória RAM e
   //enviar como argumentos na chamada da função
   //ficará assim na execução soma_numeros_reais(10.5,5.3)
   //e então 10.5 é enviado ao parâmetro num1 da função e 5.3
   //ao parâmetro num2 da função

   result = soma_numeros_reais(numero1,numero2);
   printf("A soma dos numeros %.1f e %.1f\n eh: %.1f",numero1, numero2, result);

   return 0;
}
