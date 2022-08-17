#include <stdio.h>
#include <stdlib.h>

//Leia um vetor de 10 posic¸oes. Contar e escrever quantos valores pares ele possui.

void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}

void imprimirPares(int vet[], int tam){

    for (int i = 0; i < tam; i++){
    if ((vet[i]%2)== 0)
    printf(" E par o valor [%d]na posicao %d. \n", vet[i], i);
    }
}

int contarPares(int vet[], int tam){

    int cont = 0;

    for (int i = 0; i < tam; i++){
        if ((vet[i]%2)== 0)
            cont++;
    }
    return cont;
}



int main()
{
    int tam = 10;
    int vet[tam];

    lerVetor(vet, tam);
    imprimirPares(vet, tam);
    printf("O vetor possui %d numeros pares...", contarPares(vet, tam));

}
