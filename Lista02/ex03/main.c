#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado. */


int main()
{
    float a, b, c, d;

    printf("Digite o primeiro valor: \n");
    scanf("%f",&a);
     printf("Digite o segundo valor: \n");
    scanf("%f",&b);

    if (a == b){
        c  = a + b;
        printf("A soma dos valores e %.2f", c);
    }
    else {
        c = a * b ;
        printf("Os valores multiplicados sao %.2f", c);
    }


    return 0;
}
