#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário. */

int main()
{
    float salario, quantSal;

    printf("Qual o seu salario? \n");
    scanf("%f", &salario);

    quantSal = salario/1200;

    printf("Seu salario equivale a %.2f salarios minimos.", quantSal);

}
