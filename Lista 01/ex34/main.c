#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado; */

int main()
{
    float lado;

    printf("Qual e a medida do lado? \n");
    scanf("%f", &lado);

    printf("%.2f", lado*lado);
}
