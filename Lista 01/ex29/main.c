#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%. */

int main()
{
    float valor, valorDesc;

    printf("Qual e o valor da compra? \n");
    scanf("%f", &valor);


    valorDesc = valor * 0.9;

    printf("A compra com 10 de desconto fica: %.2f", valorDesc);
}
