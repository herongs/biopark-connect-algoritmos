#include <stdio.h>
#include <stdlib.h>

 //Leia a idade de 20 pessoas e exiba quantas pessoas s�o maiores de idade.

int main()
{
    float num;
    int i, total;

    total = 0;

    for ( int i = 0; i < 5 ; i++){
        printf("Qual a sua idade?:\n");
        scanf("%f", &num );

        if (num >= 18)
            total = total + 1;
    }

    printf("Maiores de idade:%d \n\n", total);
    system ("pause");

    return 0;




}
