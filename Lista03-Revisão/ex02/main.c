#include <stdio.h>
#include <stdlib.h>

/*. Escreva uma função que computa o fatorial de um número inteiro n passado por parâmetro. OBS:
Caso n ≤ 0 a função deve retornar 1. Use a função anterior e crie um programa que imprima os
valores de n! para n = 1, . . . , 20.*/

float fatorial(float num);

int main()
{

    float num, resultado;

    printf("Insira o fatorial: ");
    scanf("%f", &num);

    printf("%.2f", fatorial(resultado));

}

float fatorial(float num){

    float resultado;

    for (int i = 1; i <= num; i++){
        resultado = resultado * i;
    }

    return resultado;

}
