#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Calcule o volume de uma caixa d'água cilíndrica

int main()
{

    float raioCaixa, alturaCaixa, volumeCaixa;

    printf("Qual o raio da caixa? \n");
    scanf("%f", &raioCaixa);
    printf("Qual a altura da caixa? \n");
    scanf("%f", &alturaCaixa);


    volumeCaixa = pow(raioCaixa, 2) * alturaCaixa * M_PI;

    printf("O volume da caixa calculado e de: %.2f", volumeCaixa);


}
