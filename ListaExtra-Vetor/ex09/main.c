#include <stdio.h>
#include <stdlib.h>

/*Crie um programa que le 6 valores inteiros pares e, em seguida, mostre na tela os valores ˆ
lidos na ordem inversa.*/

void lerVetorPar(int vet [], int tam){

    int valor;

    for(int i = 0; i < tam; i++){
        printf("Insira um valor par:");
        scanf("%d", &valor);
        if ((valor%2) == 0){
            vet[i] = valor;
        }
        else {
        printf("Insira um valor par: ");
        scanf("%d", &valor);
        vet[i] = valor;
    }
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

    lerVetorPar(vet, tam);
    imprimirVetor(vet, tam);
}


