#include <stdio.h>
#include <stdlib.h>

 /*Fac¸a um programa que possua um vetor denominado A que armazene 6 numeros intei- ´
ros. O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posic¸ ´ oes ˜
A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posic¸ao 4, atribuindo a esta posic¸ ˜ ao o valor 100. ˜
(d) Mostre na tela cada valor do vetor A, um em cada linha*/

void printaVetor(int vet[], int tam);
int somaVetor(int vet[]);
void mudaVetor(int vet[]);
void printaVetorQuebra(int vet[], int tam);


int main()
{
    int tam = 6;
    int vet[]={1, 0, 5, -2, -5, 7};

    printaVetor(vet, tam);
    somaVetor(vet);
    mudaVetor(vet);
    printaVetorQuebra(vet, tam);
}


void printaVetor(int vet[], int tam){

    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("[%d]", vet[i]);
    }
}

int somaVetor(int vet[]){

    int soma;

    soma = vet[0] + vet [1] + vet[5];

    printf("\n\n");
    printf("Soma: %d \n", soma);
}

void mudaVetor(int vet[]){

    vet[4] = 100;

}

void printaVetorQuebra(int vet[], int tam){
    printf("\n");
    for(int i = 0; i < tam; i++){
        printf("[%d]\n", vet[i]);
    }
}
