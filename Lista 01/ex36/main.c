#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio. */

int main()
{
    float salario, quantSal;

    printf("Qual o seu salario? \n");
    scanf("%f", &salario);

    quantSal = salario/1200;

    printf("Seu salario equivale a %.2f salarios minimos.", quantSal);

}
