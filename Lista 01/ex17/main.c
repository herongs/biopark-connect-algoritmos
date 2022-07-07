#include <stdio.h>
#include <stdlib.h>

/* Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão).*/

int main()
{
    float tempCel, tempFahr;

    printf("Qual a temperatura em graus Celsius?\n");
    scanf("%f", &tempCel);

    tempFahr = ((1.8 * tempCel) + 32);

    printf("A temperatura %.2f em Celsius, corresponde a %.2f graus em Fahrenheit", tempCel, tempFahr);
}
