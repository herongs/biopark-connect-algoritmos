#include <stdio.h>
#include <stdlib.h>

/*Fa�a um algoritmo para ler o sal�rio de um funcion�rio e aument�-Io em 15%. Ap�s o aumento, desconte 8%
de impostos. Imprima o sal�rio inicial, o sal�rio com o aumento e o sal�rio final. */

int main()
{
    float salario, aumentoSalario, imposto;

    printf("Qual e o salario?\n");
    scanf("%f", &salario);

    aumentoSalario = salario * 1.15;
    imposto = aumentoSalario * 0.92;

    printf("Seu salario inicial era de %.2f . \n", salario);
    printf("Seu salario com aumento de 15 fica %.2f .\n", aumentoSalario);
    printf("Seu salario descontado o imposto e de %.2f .\n", imposto);
}
