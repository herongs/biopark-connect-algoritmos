#include <stdio.h>
#include <stdlib.h>

/*Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
após a retirada dos nulos e negativos.*/

int main()
{
    int vet[10];

    for (int i = 0; i < 10; i++){
        printf("Qual o numero: ");
        scanf("%d", &vet[i]);
        if ((vet[i] < 0) || (vet[i] == NULL))
            vet[i] = 0;
    }
    for (int i = 0; i < 10; i++){
        if (vet[i] != 0)
        printf("Posicao [%d]: %d \n", i, vet[i]);
    }
}
