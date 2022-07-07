#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 //Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.

int main()
{

    float catetoAdj, catetoOpost, hipotenusa;

    printf("Qual o tamanho do cateto adjacente? \n");
    scanf("%f", &catetoAdj);
    printf("Qual o tamanho do cateto oposto? \n");
    scanf("%f", &catetoOpost);


    hipotenusa = sqrt((pow(catetoAdj, 2)) + (pow(catetoOpost, 2)));

    printf("A hipotenusa mede %.2f.", hipotenusa);
}
