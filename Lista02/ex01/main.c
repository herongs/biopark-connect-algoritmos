#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que leia dois valores A e B e imprima o maior deles


int main()
{
    float a, b;

    printf("Digite o primeiro valor: \n");
    scanf("%f",&a);
     printf("Digite o segundo valor: \n");
    scanf("%f",&b);

    if (a > b)
        printf("O maior valor e %.2f", a);
    else if (a < b)
        printf("O maior valor e %.2f", b);
    else
        printf("O maior valor e %.2f", b);

    return 0;
}
