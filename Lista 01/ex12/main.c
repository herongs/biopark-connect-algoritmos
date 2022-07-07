#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */

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
