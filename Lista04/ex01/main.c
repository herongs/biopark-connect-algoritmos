#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
colocando o resultado em um terceiro vetor. Mostre o vetor resultante. */

int main()
{
    int TAM=5;
    int vetor1[TAM], vetor2[TAM], vetor3[TAM], i;

    for( int i = 0; i < TAM; i++){
        printf("Qual o valor do primeiro vetor:\n");
        scanf("%d", &vetor1[i]);
        printf("Qual o valor do segundo vetor:\n");
        scanf("%d", &vetor2[i]);

        vetor3[i] = vetor1[i] + vetor2[i];
    }
    for( int i = 0; i < TAM; i++){
        printf("[%d] + [%d]= [%d]\n", vetor1[i],vetor2[i],vetor3[i]);
    }
}
