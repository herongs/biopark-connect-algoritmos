#include <stdio.h>
#include <stdlib.h>

/* Fa�a um algoritmo que calcule e mostre a �rea de um trap�zio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; */


int main()
{

    float baseMaior, baseMenor, altura, area;

    printf("Qual o tamanho da base maior? \n");
    scanf("%f", &baseMaior);
    printf("Qual o tamanho da base menor? \n");
    scanf("%f", &baseMenor);
    printf("Qual e a altura? \n");
    scanf("%f", &altura);

    area = ((baseMaior + baseMenor) * altura)/2;

    printf("A area de trapezio e de %.2f.", area);

}
