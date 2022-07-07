#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, calcDias;
    char nome[61]; //espaços para a entrada de caracters

    printf("Ola, qual e o seu nome?\n");
    scanf("%s", nome);
    printf("Quantos anos voce tem?\n");
    scanf("%d", &idade);

    calcDias= idade * 365;

    printf("%s, voce tem %d dias de vida", nome, calcDias);

    return 0;
}
