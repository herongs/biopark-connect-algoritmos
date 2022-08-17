#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ
na ordem inversa*/

void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}

void imprimirVetor(int vet[], int tam){

    for(int i = tam-1 ; i >= 0; i--){

        printf("[%d]", vet[i]);

    }



}



int main()
{
    int tam = 6;
    int vet[tam];

    lerVetor(vet, tam);
    imprimirVetor(vet, tam);



}
