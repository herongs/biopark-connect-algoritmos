#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se que este
sofreu um desconto de 10%. */

int main()
{
    float valor, valorDesc;

    printf("Qual e o valor da compra? \n");
    scanf("%f", &valor);


    valorDesc = valor * 0.9;

    printf("A compra com 10 de desconto fica: %.2f", valorDesc);
}
