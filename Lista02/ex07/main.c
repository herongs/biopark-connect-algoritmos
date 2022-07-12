#include <stdio.h>
#include <stdlib.h>

/*Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
ideal, utilizando as seguintes fórmulas:
● para homens: (72.7 * h) – 58;
● para mulheres: (62.1 * h) – 44.7. */

int main()
{
    char s;
    float altura, peso;

    printf("Digite 'h' se for homem ou 'm' se for mulher\n");
    scanf("%c",&s);
    printf("Digite a sua altura:\n");
    scanf("%f",&altura);

    if ( s == 'm'){
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal e:%.2f \n", peso);
    }
    else if ( s == 'h'){
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal e: %.2f \n", peso);
    }
    else
        printf(" Opcao Invalida");
}
