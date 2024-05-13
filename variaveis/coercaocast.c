/*
Professor Marcos Pacheco
professormarcosp@gmail.com
Aprendendo Programação do Zero ao Código com a Linguagem C
Acesse meus cursos em: https://www.udemy.com/user/marcostim/
https://linkedin.com/in/professor-marcos-pacheco/
*/

int main() 
{

   int a = 10; //a é uma variável do tipo int
   int b = 3;  //b é uma variável do tipo int
   float resultado = (float)a / b; // a divisao de a por b dará um resultado inteiro pois
   //int não comporta partes decimais. Logo 10/3 dará 3 e não 3.33333

   printf("Resultado de %d / %d = %f",a,b,resultado);
   /*Para que a divisão ocorra com casas decimais será necessário fazer um cast
   para float*/

   return 0;
}

/*float resultado = a / b; aqui mesmo resultado sendo float a divisão dará 3
pois ainda será uma divisão inteira entre dois int. O resultado será 3
e depois 3 será convertido em float ficando 3.000000*/

/*(float)a / b; agora o valor de a será convertido explicitamente
para um float e será 10.00000 e então o resultado da divisão será 3.333333*/
