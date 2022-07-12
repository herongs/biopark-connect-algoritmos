#include <stdio.h>
#include <stdlib.h>

 /*Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo
menor; */


int main()
{
    int num1, num2, result;

    printf("Qual o primeiro numero:");
    scanf("%d", &num1);
     printf("Qual o segundo numero:");
    scanf("%d", &num2);

    if (num1 > num2){
        result = num1 - num2;
        printf("O maior valor e %d e o menor e %d, a diferenca deles e: %d", num1, num2, result);
    }
    else if (num1 < num2){
        result = num2 - num1;
        printf("O maior valor e %d e o menor e %d, a diferenca deles e: %d", num2, num1, result);
    }
    else {
        result = num2 - num1;
        printf("Os dois numeros sao iguais, a diferenca deles e: %d", result);
    }
    return 0;

}
