#include <stdio.h>
#include <stdlib.h>

 //Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros

int main()
{
    float num1, num2, num3, numTotal;

    printf("Qual o primeiro numero? \n");
    scanf("%f", &num1);
    printf("Qual o segundo numero? \n");
    scanf("%f", &num2);
    printf("Qual o terceiro numero? \n");
    scanf("%f", &num3);


    numTotal = num1 * num2 * num3;

    printf("%.2f x %.2f x %.2f = %.2f", num1, num2, num3, numTotal);
}
