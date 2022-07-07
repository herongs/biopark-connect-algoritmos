#include <stdio.h>
#include <stdlib.h>

 /*Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota.*/

int main()
{
   float nota1, nota2, notaTotal;

    printf("Qual a primeira nota? \n");
    scanf("%f", &nota1);
    printf("Qual a segunda nota? \n");
    scanf("%f", &nota2);

    notaTotal = ((nota1 * 2) + (nota2 * 3))/ 5;

    printf("A media ponderada das duas notas e de: %.2f", notaTotal);
}
