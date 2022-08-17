#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que leia 10 numeros inteiros e os armazene em um vetor. Imprima ´
o vetor, o maior elemento e a posic¸ao que ele se encontra. */

void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}

int imprimirMaior(int vet[], int tam){

    int maior = vet[0];
    int posicao = 0;

    for(int i = 0; i < tam; i++){

        if (maior < vet[i]){
            maior = vet[i];
            posicao = i;
        }
    }

    printf("O maior valor esta na posicao: %d", posicao);

    return maior;
}


int main()
{
    int tam = 10;
    int vet[tam];

    lerVetor(vet, tam);
    printf("\n O maior valor do vetor e: %d \n", imprimirMaior(vet, tam));


}
