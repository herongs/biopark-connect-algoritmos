#include <stdio.h>
#include <stdlib.h>

 /*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado. */

int main()
{
    float peso, pesoEngorda, pesoEmagrece;

    printf("Qual o seu peso? \n");
    scanf("%f", &peso);

    pesoEngorda = peso * 1.15;
    pesoEmagrece = peso * 0.8;

    printf("Se voce engordar 15 por cento tera: %.2f kg \n", pesoEngorda);
    printf("Se voce emagrecer por cento tera: %.2f kg \n", pesoEmagrece);
}
