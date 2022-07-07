#include <stdio.h>
#include <stdlib.h>

/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero. */

int main()
{

    float moeda1, moeda5, moeda10, moeda25, moeda50, real1, valorTotal;

    printf("Quantas moedas de 1 centavo tem?\n");
    scanf("%f", &moeda1);
    printf("Quantas moedas de 5 centavos tem?\n");
    scanf("%f", &moeda5);
    printf("Quantas moedas de 10 centavos tem?\n");
    scanf("%f", &moeda10);
    printf("Quantas moedas de 25 centavos tem?\n");
    scanf("%f", &moeda25);
    printf("Quantas moedas de 50 centavos tem?\n");
    scanf("%f", &moeda50);
    printf("Quantas moedas de 1 real tem?\n");
    scanf("%f", &real1);

    valorTotal = (moeda1 * 0.01) + (moeda5 * 0.05) + (moeda10 * 0.10) + (moeda25 * 0.25) + (moeda50 * 0.50) + real1;

    printf("O valor total arrecadado foi de: %.2f reais", valorTotal);

}
