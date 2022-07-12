#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*. Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo, escrever a mensagem.
Considere as seguintes propriedades:
a. O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
b. Equil�teros: tem os comprimentos dos tr�s lados iguais;
c. Is�sceles: tem os comprimentos de dois lados iguais;
d. Escaleno: tem os comprimentos dos tr�s lados diferentes. */


int main()
{
    float lado1, lado2, lado3;

    printf("Qual o valor do primeiro lado?\n");
    scanf("%f", &lado1);
    printf("Qual o valor do segundo lado?\n");
    scanf("%f", &lado2);
    printf("Qual o valor do primeiro lado?\n");
    scanf("%f", &lado3);

    if (((lado1+lado2) > lado3)  && ((lado1+lado3) > lado2) && ((lado2+lado3) > lado1)){
        printf("E um triangulo \n");
        if (( lado1 == lado2) && (lado1 == lado3) & (lado2 == lado3))
            printf("O triangulo e equilatero");
        else if ((lado1 != lado2 ) && (lado1 != lado3) && (lado3 != lado2))
            printf("O triangulo e escaleno");
        else
            printf("O triangulo e isosceles");
    }
    else
        printf("Nao e um triagulo");

    return 0;
}
