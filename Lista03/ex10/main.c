#include <stdio.h>
#include <stdlib.h>

 /*Escreva um algoritmo que leia 20 n�meros informados pelo usu�rio e exiba quantos n�meros s�o
pares*/

int main()
{
    int total, num;

    for ( int i = 0; i < 20; i++ ){
        printf("Qual e o numero?\n");
        scanf("%d", &num);

       if ( (num%2) == 0)
           total++;

    }
    printf("%d numeros sao pares.", total);
}
