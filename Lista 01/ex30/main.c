#include <stdio.h>
#include <stdlib.h>

 /*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário. */

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
