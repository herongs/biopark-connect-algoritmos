#include <stdio.h>
#include <stdlib.h>

/*Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas
pequenas, m�dias e grandes referentes a uma venda, e a m�quina informe quanto ser� o valor arrecadado.*/


int main()
{

    int tamP, tamM, tamG, calcValor;

    printf("Quantas camisetas de tamanho P foram vendidas? \n");
    scanf("%d", &tamP);
    printf("Quantas camisetas de tamanho M foram vendidas? \n");
    scanf("%d", &tamM);
    printf("Quantas camisetas de tamanho G foram vendidas? \n");
    scanf("%d", &tamG);

    calcValor = (tamP * 10) + (tamM * 12) + (tamG * 15);

    printf("O valor arrecadado foi de %d reais", calcValor);

}
