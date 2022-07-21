#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que leia um vetor de 20 posições e informe:
a) Quantos números pares existem no vetor
b) Quantos números ímpares existem no vetor
c) Quantos números maiores do que 50
d) Quantos números menores do que 7 */


int main()
{
    int TAM=5;
    int vetor[TAM], somaPar = 0, somaImpar = 0, somaMaior = 0, somaMenor = 0, i;

    for( int i = 0; i < TAM; i++){
        printf("Qual o valor do vetor:\n");
        scanf("%d", &vetor[i]);

        if ((vetor[i]%2) == 0)
            somaPar++;
        if ((vetor[i]%2) != 0)
            somaImpar++;
        if (vetor[i] > 50)
            somaMaior++;
        if (vetor[i] < 7)
            somaMenor++;
    }
    printf("Numeros pares: %d \n", somaPar);
    printf("Numeros pares: %d \n", somaImpar);
    printf("Numeros maiores que 50: %d \n", somaMaior);
    printf("Numeros menores que 7: %d \n", somaMenor);


}







