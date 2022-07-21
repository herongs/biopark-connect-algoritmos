#include <stdio.h>
#include <stdlib.h>

/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */

int main()
{
    int TAM=3;
    int vetor[TAM], somaInf = 0, somaIgual = 0, somaSup = 0, somaMaior = 0, result, i;

    for( int i = 0; i < TAM; i++){
        printf("Qual o valor do vetor:\n");
        scanf("%d", &vetor[i]);

        if ( vetor[i] < 15)
            somaInf = somaInf + vetor[i];
        if (vetor[i] == 15)
            somaIgual++;
        if (vetor[i] > 15){
            somaMaior++;
            somaSup = somaSup + vetor[i];
            result = somaSup / somaMaior;}

    }
    printf("Numeros menor que 15: %d \n", somaInf);
    printf("Numeros iguais a 15: %d \n", somaIgual);
    printf("Media dos numeros : %d \n", result);


}
