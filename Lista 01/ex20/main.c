#include <stdio.h>
#include <stdlib.h>

/*Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça um algoritmo
para calcular quantos novelos de lã ela gasta por blusa. */


int main()
{
    float blusas, novelos, quantNovelos;

    printf("Quantas blusas foram produzidas?\n");
    scanf("%f", &blusas);
    printf("Quantas novelos foram utilizados?\n");
    scanf("%f", &novelos);

    quantNovelos = novelos / blusas;

    printf("Foram gastos %.2f novelos por blusas", quantNovelos);
}
