#include <stdio.h>
#include <stdlib.h>

/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado). Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
*/
int main()
{
    float calcPaes,calcBroas,quantPaes,quantBroas,calcTotal,calcPoup;

    printf("Ola, como foi seu dia?\n");
    printf("Vamos ao calculo dos lucros...\n");
    system("pause");

    printf("Qual foi a quantidade de paes vendidos no dia?...\n");
    scanf("%f", &quantPaes);
    printf("Qual foi a quantidade de broas vendidas no dia?\n");
    scanf("%f", &quantBroas);

    calcPaes = quantPaes*0.12;
    calcBroas = quantBroas*1.50;

    calcTotal = calcPaes + calcBroas;
    calcPoup = calcTotal * 0.10;

    printf("Valor total arrecadado no dia: %.2f \n",calcTotal);
    printf("Valor guardado na poupanca: %.2f",calcPoup);

    return 0;
}

