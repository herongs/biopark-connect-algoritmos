#include <stdio.h>
#include <stdlib.h>

/*Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo
para calcular quantos novelos de l� ela gasta por blusa. */


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
