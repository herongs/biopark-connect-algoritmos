#include <stdio.h>
#include <stdlib.h>

/* Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ; */


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
