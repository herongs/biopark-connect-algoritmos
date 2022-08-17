#include <stdio.h>
#include <stdlib.h>

/* . Fac¸a um programa que receba do usuario um vetor com 10 posic¸ ´ oes. Em seguida devera
ser impresso o maior e o menor elemento do vetor.
*/
void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}

int imprimirMaior(int vet[], int tam){

    int maior = vet[0];

    for(int i = 0; i < tam; i++){

        if (maior < vet[i]){
            maior = vet[i];
        }
    }

    return maior;
}

int imprimirMenor(int vet[], int tam){

    int menor = vet[0];

    for(int i = 0; i < tam; i++){

        if (menor > vet[i]){
            menor = vet[i];
        }
    }

    return menor;
}


int main()
{
    int tam = 10;
    int vet[tam];

    lerVetor(vet, tam);
    printf("\n O maior valor do vetor e: %d \n", imprimirMaior(vet, tam));
    printf("O menor valor do vetor e: %d", imprimirMenor(vet, tam));

}
