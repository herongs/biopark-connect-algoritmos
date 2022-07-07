#include <stdio.h>
#include <stdlib.h>

 /*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato.*/

int main()
{
    float pesoPrato, valorQuilo, valorTotal;

    valorQuilo = 12;
    printf("Bom dia querido cliente o quilo esta custando R$%.2f, vamos ao peso do seu prato...\n", valorQuilo);
    system("pause");
    printf("Qual o peso do prato que voce montou (em quilos)?\n");
    scanf("%f", &pesoPrato);

    valorTotal = pesoPrato * valorQuilo;

    printf("Seu prato pesou %.2f quilos, tendo um valor final de %.2f reais", pesoPrato, valorTotal);

    return 0;
}
