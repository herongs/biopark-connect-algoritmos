#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
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
