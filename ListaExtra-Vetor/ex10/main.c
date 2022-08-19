#include <stdio.h>
#include <stdlib.h>

/*Faca um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule
e imprima a media geral.*/

void lerVetorPar(int vet [], int tam){

    int nota;

    for(int i = 0; i < tam; i++){
        printf("Insira a nota do aluno [%d]: ", i);
        scanf("%d", &nota);
        vet[i]=nota;
    }
}


int calculaMedia(int vet[], int tam){

    int  soma = 0;
    float media;

    for(int i = 0 ; i < tam; i++){
    soma+=vet[i];
    }

    media = soma/tam;
    printf("\n\nA media das notas e: %.2f", media);
}

void imprimirVetor(int vet[], int tam){

    for(int i = 0 ; i < tam ; i++){
        printf("[%d]", vet[i]);
    }
}

int main()
{
    int tam = 6;
    int vet[tam];

    lerVetorPar(vet, tam);
    imprimirVetor(vet, tam);
    calculaMedia(vet, tam);

}







