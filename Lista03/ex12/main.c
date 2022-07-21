#include <stdio.h>
#include <stdlib.h>

 /* Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e
a. 100, quantos estão entre 101 e 200 e quantos são maiores de 200*/

int main()
{
    int total = 0, total1 = 0, total2 = 0 , num;

    for ( int i = 0; i < 20; i++ ){
        printf("Qual e o numero?\n");
        scanf("%d", &num);

        if ( (0 <= num) && (num <= 100))
           total++;
        if  ( (101 <= num) && (num <= 200))
           total1++;
        if  (num > 200)
           total2++;
    }
    printf("%d numeros estao entre 0 e 100, %d numeros estao entre 101 e 200 e %d sao maiores que 200.", total, total1, total2);
}
