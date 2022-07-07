#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne
necessários para compra. */


int main()
{
    float queijo, presunto, hamburguer, quantSand;

    printf("Qual a quantidade de sanduiches?\n");
    scanf("%f",&quantSand);

    queijo = (quantSand * 50)/1000;
    presunto = (quantSand * 50)/1000;
    hamburguer = (quantSand * 100)/1000;

    printf("Serao necessarios %.2f kg de queijo \n", queijo);
    printf("Serao necessarios %.2f kg de presunto \n", presunto);
    printf("Serao necessarios %.2f kg de hamburguer \n", hamburguer);
}
