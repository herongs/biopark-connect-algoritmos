#include <stdio.h>
#include <stdlib.h>

 /*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio. */

int main()
{
    float salFixo, valorVendas, salTotal;

    printf("Qual o salario fixo do funcionario? \n");
    scanf("%f", &salFixo);
    printf("Qual o valor das vendas do funcionario? \n");
    scanf("%f", &valorVendas);

    salTotal = salFixo + (valorVendas * 0.04);

    printf("O salario final do funcionario foi de: %.2f", salTotal);
}
