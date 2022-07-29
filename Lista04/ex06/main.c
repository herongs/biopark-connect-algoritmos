#include <stdio.h>
#include <stdlib.h>

/*Ler um vetor A com 10 elementos inteiros correspondentes as idades de um grupo de pessoas. Escreva um
programa que determine e escreva a menor e a maior idades e suas respectivas posições. */


int main()
{
    int vet[10], menor = 999, maior = 0, posiMenor = 0, posiMaior = 0;

    for (int i = 0; i<10; i++){
        printf("Qual a idade da pessoa [%d]?", i);
        scanf("%d", &vet[i]);

        if (menor > vet[i]){
            menor = vet[i];
            posiMenor = i;}
        if (maior < vet[i]){
            maior = vet[i];
            posiMaior = i;}
    }
        printf("A menor idade esta na posicao %d sendo ela %d anos \n", posiMenor, menor);
        printf("A maior idade esta na posicao %d sendo ela %d anos \n", posiMaior, maior);
}
