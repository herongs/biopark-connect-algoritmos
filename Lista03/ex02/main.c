#include <stdio.h>
#include <stdlib.h>

 /*Escreva um algoritmo que calcule o somat�rio dos n�meros de um intervalo informado pelo
usu�rio.*/


int main()
{
    int i,n, total= 0;

    printf("Qual e o primeiro numero?");
    scanf("%d", &i);
    printf("Qual e o segundo numero numero?");
    scanf("%d", &n);


    for ( ; i <= n ; i++){
        total = total + i;

    }

    printf("A soma dos numero e: %d \n", total);

    return 0;

}
