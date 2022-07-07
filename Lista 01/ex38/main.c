#include <stdio.h>
#include <stdlib.h>

 /*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas. */


int main()
{
    float anoNasc, anoAtual, anos, meses, dias, semanas;

    printf("Qual e o ano que voce nasceu? \n");
    scanf("%f", &anoNasc);
    printf("Qual e o ano atual? \n");
    scanf("%f", &anoAtual);

    anos = anoAtual - anoNasc;
    meses = anos * 12;
    dias = anos * 365;
    semanas = dias / 7;

    printf("Sua idade corresponde a %.2f anos \n", anos);
    printf("Sua idade corresponde a %.2f meses \n", meses);
    printf("Sua idade corresponde a %.2f dias \n", dias);
    printf("Sua idade corresponde a %.2f semanas \n", semanas);

}
