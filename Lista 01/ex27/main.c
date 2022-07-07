#include <stdio.h>
#include <stdlib.h>

 //Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.

int main()
{
    float num1, num2, numTotal;

    printf("Qual o primeiro numero? \n");
    scanf("%f", &num1);
    printf("Qual o segundo numero? \n");
    scanf("%f", &num2);

    numTotal = num1 / num2 ;

    printf("%.2f / %.2f = %.2f", num1, num2,  numTotal);
}
