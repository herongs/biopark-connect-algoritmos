#include <stdio.h>
#include <stdlib.h>


//. A imobili�ria Im�bilis vende apenas terrenos retangulares. Fa�a um algoritmo para ler as dimens�es de um
//terreno e depois exibir a �rea do terreno


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
