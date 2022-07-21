#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia uma sequência de números do usuário e realize a soma desses
números. Encerre a execução quando um número negativo for digitado*/

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
