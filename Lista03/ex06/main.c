#include <stdio.h>
#include <stdlib.h>

// Leia a idade de 20 pessoas e exiba a média das idades.

int main()
{
    float total, num;
    int i;

    for ( int i = 0; i < 20 ; i++){
        printf("Qual a sua idade?:\n");
        scanf("%f", &num );

        total = total + num;
    }

    printf("Media das idades:%.2f \n\n", total/20);
    system ("pause");

    return 0;
}
