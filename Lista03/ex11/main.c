#include <stdio.h>
#include <stdlib.h>


//Fa�a um algoritmo que leia 20 n�meros e, ao final, escreva quantos est�o entre 0 e 100.

int main()
{
    int total, num;

    for ( int i = 0; i < 20; i++ ){
        printf("Qual e o numero?\n");
        scanf("%d", &num);

       if ( (0 < num) && (num < 100))
           total++;

    }
    printf("%d numeros estao entre 0 e 100.", total);
}
