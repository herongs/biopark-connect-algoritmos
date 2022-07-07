#include <stdio.h>
#include <stdlib.h>

 /*João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João*/


int main()
{
     float salario, multa1, multa2, multas, salarioFinal;

    printf("Qual o seu salario? \n");
    scanf("%f", &salario);

    multa1 = 200 * 1.02;
    multa2 = 120 * 1.02;
    multas = multa1 + multa2;
    salarioFinal= salario - multas;

    printf("O salario descontado e de %.2f.", salarioFinal);
}
