#include <stdio.h>
#include <stdlib.h>

/*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53
para Felipe. */

int main()
{

    int carlos, andre;
    float felipe, conta;

    printf("Qual o valor da conta? \n");
    scanf("%f", &conta);

    carlos = conta/3;
    andre = conta /3;
    felipe = conta - (carlos + andre);

    printf("Carlos vai pagar : R$ %d \n",carlos);
    printf("Andre vai pagar : R$ %d \n",andre);
    printf("Felipevai pagar : R$ %.2f \n",felipe);

}
