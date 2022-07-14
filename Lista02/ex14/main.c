#include <stdio.h>
#include <stdlib.h>

/*Num determinado Estado, para transferências de veículos, o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados de 1990 em diante, a taxa incide sobre o
valor de tabela do carro. Elabore um algoritmo que leia o ano e o valor de tabela do carro, calcule e informe o
imposto a ser pago. */


int main()
{
    int ano;
    float valorCarro, imposto;

    printf("Qual e o anor de fabricacao do carro?\n");
    scanf("%d", &ano);
    printf("Qual o valor de tabela do carro?\n");
    scanf("%f", &valorCarro);

    if (ano < 1990)
        imposto = (valorCarro * 0.01);
    else if (ano >= 1990)
        imposto = (valorCarro * 0.0150);
    else {
        printf("Valors Invalidos...");
        }
    printf("O carro e do ano de %d, com valor de tabela de %.2f tera de pagar %.2f reais de imposto.", ano, valorCarro, imposto);
}
