#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
maiores do que 8*/

int main()
{
    float num;
    int total;

    for ( int i = 0; i < 20; i++ ){
        printf("Qual e o numero?\n");
        scanf("%f", &num);
       if ( num > 8 )
           total++;

    }
    printf("%d numeros sao maiores que 8.", total);

}
