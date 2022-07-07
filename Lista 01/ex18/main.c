#include <stdio.h>
#include <stdlib.h>


/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra. Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado funcionário. Considere
que o salário líquido é igual ao salário bruto descontando-se 10% de impostos.*/

int main()
{
    float horaNormal, horaExtra, salBruto, salLiquido;

    printf("Quantas horas normais foram feitas no mes?\n");
    scanf("%f",&horaNormal);
    printf("Quantas horas extras foram feitas no mes?\n");
    scanf("%f",&horaExtra);

    salBruto = ((horaNormal * 10) + (horaExtra * 15));
    salLiquido = salBruto * 0.9;

    printf("O salario bruto considerando %.2f horas normais e %.2f horas extras foi de: %.2f \n", horaNormal, horaExtra, salBruto);
    printf("E o salario liquido foi de %.2f", salLiquido);
}
