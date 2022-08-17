#include <stdio.h>
#include <stdlib.h>

/*Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das ´
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos temˆ
10 elementos cada. Imprimir todos os conjuntos.*/

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

void quadradoVetor(int vet[], int vet2[], int tam){

    for(int i = 0; i < tam; i++){
    vet2[i] = vet[i] * vet[i];
    }
}


int main()
{

    int tam = 10;
    int vet[tam];
    int vet2[tam];

    lerVetor(vet, tam);
    quadradoVetor(vet, vet2, tam);
    printaVetor(vet, tam);
    printaVetor(vet2, tam);

}
