#include <stdio.h>
#include <stdlib.h>

int main()
{
     int cavalos,calcferraduras;

    printf("Ola, vamos calcular quantas ferraduras e necessario comprar...\n");
    printf("Quantos cavalos foram comprados?\n");
    scanf("%d", &cavalos);

    calcferraduras = cavalos*4;

    printf("Existem %d cavalos no haras, que correspondem a %d ferraduras",cavalos,calcferraduras);

    return 0;
}
