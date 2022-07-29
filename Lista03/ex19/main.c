#include <stdio.h>
#include <stdlib.h>

/*Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
a. A menor altura do grupo;
b. A maior altura do grupo;*/


int main()
{
    float altura, menor = 999, maior = 0;

    for (int i = 0; i < 15; i++){
        printf("Qual a sua altura: \n");
        scanf("%f", &altura);

    if (altura < menor){
        menor = altura;
    }
    if (altura > maior){
        maior = altura;
    }
    }

    printf("A maior altura e: %.2f\n", maior);
    printf("A menor altura e: %.2f", menor);


}
