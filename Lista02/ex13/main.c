#include <stdio.h>
#include <stdlib.h>

/* Escrever um algoritmo que leia um valor em reais e calcule qual o menor número possível de notas de 100,
50, 10, 5 e 1 em que o valor lido pode ser decomposto. Escrever o valor lido e a relação de notas necessárias. */

int main()
{
    int valor, c100, c50, c10, c5, c1;

    printf("Qual e o valor\n");
    scanf("%d", &valor);

    c100 = valor / 100;
    c50 = (valor - (100 * c100))/50;
    c10 = (valor - (50 * c50) - (100 * c100)) / 10;
    c5 = (valor - (50 * c50) - (100 * c100) - (10*c10) ) / 5;
    c1 = (valor - (50 * c50) - (100 * c100) - (10*c10) - (5 * c5)) / 1;

    printf("Valor lido: %d\n", valor);
    printf("Quantidade de cedulas\n100: %d\n50: %d\n10: %d\n5: %d\n1: %d\n ", c100, c50, c10, c5, c1);

    return 0;
}
