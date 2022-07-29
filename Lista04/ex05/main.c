#include <stdio.h>
#include <stdlib.h>

/*Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
a) a soma de elementos armazenados neste vetor que são inferiores a 15;
b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
c) a média dos elementos armazenados no vetor que são superiores a 15. */

int main()
{
    int vet[10], somaInf = 0, somaIgual = 0, somaMaior = 0, somaMedia = 0 ;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Qual o valor [%d] do vetor: ", i);
        scanf("%d", &vet[i]);

        if (vet[i] < 15)
            somaInf += vet[i];
        if (vet[i] == 15)
            somaIgual++;
        if (vet[i] > 15){
            somaMaior++;
            somaMedia += vet[i];}
    }
    media = somaMedia/somaMaior;
    printf("\nA soma de elementos que sao inferiores a 15: %d\n", somaInf);
    printf("A quantidade de elementos que sao iguais a 15: %d\n", somaIgual);
    printf("a média dos elementos armazenados no vetor que sao superiores a 15: %.2f\n", media);


}
