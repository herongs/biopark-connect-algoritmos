#include <stdio.h>
#include <stdlib.h>

 /*Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
pelo usuário. */

int main()
{
    int num, result = 1;

    printf("Qual e o numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        result = result * i;
    }
    printf("Resultado: %d", result);
}
