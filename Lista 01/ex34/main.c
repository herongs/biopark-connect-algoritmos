#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que calcule e mostre a �rea de um quadrado. Sabe-se que: A = lado * lado; */

int main()
{
    float lado;

    printf("Qual e a medida do lado? \n");
    scanf("%f", &lado);

    printf("%.2f", lado*lado);
}
