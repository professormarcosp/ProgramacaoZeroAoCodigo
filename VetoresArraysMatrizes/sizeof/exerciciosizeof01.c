#include <stdio.h>

int main()
{
    char vetor_char[10];
    double vetor_double[10];
    float vetor_float[10];

    /*sizeof retorna um valor do tipo size_t, que é sem sinal. O código funciona, mas
    o compilador avisar que %zu pode não estar perfeitamente alinhado com size_t na sua plataforma
    o correto é usar %zu que é o especificador específico para size_t conforme padrão C99*/

    printf("\nTamanho total do vetor de char: %zu bytes", sizeof(vetor_char));
    printf("\nTamanho de cada elemento do vetor de char: %zu bytes", sizeof(vetor_char[0]));
    printf("\nQuantidade de elementos no vetor de char: %zu", sizeof(vetor_char) / sizeof(vetor_char[0]));

    printf("\nTamanho total do vetor de double: %zu bytes", sizeof(vetor_double));
    printf("\nTamanho de cada elemento do vetor de double: %zu bytes", sizeof(vetor_double[0]));
    printf("\nQuantidade de elementos no vetor de double: %zu", sizeof(vetor_double) / sizeof(vetor_double[0]));

    printf("\nTamanho total do vetor de float: %zu bytes", sizeof(vetor_float));
    printf("\nTamanho de cada elemento do vetor de float: %zu bytes", sizeof(vetor_float[0]));
    printf("\nQuantidade de elementos no vetor de float: %zu", sizeof(vetor_float) / sizeof(vetor_float[0]));

    return 0;
}
