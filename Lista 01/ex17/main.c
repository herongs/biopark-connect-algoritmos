#include <stdio.h>
#include <stdlib.h>

/* Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o).*/

int main()
{
    float tempCel, tempFahr;

    printf("Qual a temperatura em graus Celsius?\n");
    scanf("%f", &tempCel);

    tempFahr = ((1.8 * tempCel) + 32);

    printf("A temperatura %.2f em Celsius, corresponde a %.2f graus em Fahrenheit", tempCel, tempFahr);
}
