#include <stdio.h>
#include <stdlib.h>

 // Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas

int main()
{
    float peso, pesoGrama;

    printf("Qual o peso em kg? \n");
    scanf("%f", &peso);

    pesoGrama = peso * 1000;

    printf("%.2f kg corresponde a %.2f gramas", peso, pesoGrama);

}
