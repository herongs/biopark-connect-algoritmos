#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses
n�meros. Encerre a execu��o quando um n�mero negativo for digitado*/

int main()
{
     int total = 0,  num, quant = 0;

    for ( int i = 0;  ; i++ ){
        printf("Qual e o numero?\n");
        scanf("%d", &num);

        if ( num > 0){
            total = total + num;
            quant++;
        }
        else
            break;
    }
    printf("A soma dos numero e: %d \n", total);
    printf("Foram somados %d numeros", quant);
}
