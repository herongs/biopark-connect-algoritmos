#include <stdio.h>
#include <stdlib.h>

/*. Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS:
Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os
valores de n! para n = 1, . . . , 20.*/

float fatorial(float num);

int main()
{
    float num, resultado ;

    printf("O fatorial de %.2f e :%.2f \n", num, fatorial(num));

}

float fatorial(float num){

    float resultado;

    for(int num = 1; num <= 20; num++){
    resultado = 1;
    for (int i = 1; i <= num; i++){
        if (num > 0){
        resultado = resultado * i;}
        else
        resultado = 1;
    }
    printf("\nO fatorial de %d e :%.2f", num, resultado);
    }
    return resultado;

}

