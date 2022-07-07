#include <stdio.h>
#include <stdlib.h>


//. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as dimensões de um
//terreno e depois exibir a área do terreno


int main()
{
    int lado,area;

    printf("Ola, vamos calcular a area do seu terreno...\n");
    printf("Primeiro, qual a dimensao do terreno?\n");
    scanf("%d", &lado);

    area = lado*lado;

    printf("O seu terreno possui lados de %d, e uma area de %d",lado,area);

    return 0;
}
