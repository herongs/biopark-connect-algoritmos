#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 10 n�meros informados pelo usu�rio e calcule a soma desses
n�meros*/

int main()
{
    float total, num;

    for ( int i = 0; i < 10 ; i++){
        printf("Digite um numero:\n");
        scanf("%f", &num );

        total = total + num;
    }

    printf("Total:%.2f \n\n", total);
    system ("pause");

    return 0;
}
