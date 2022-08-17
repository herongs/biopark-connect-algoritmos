#include <stdio.h>
#include <stdlib.h>

//Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos.


void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}

void printaVetor(int vet[], int tam){

    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("[%d] ", vet[i]);
    }

}

int main()
{
    int tam = 6;
    int vet[tam];

    lerVetor(vet, tam);
    printaVetor(vet, tam);

}
