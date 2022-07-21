#include <stdio.h>
#include <stdlib.h>

/*Criar um vetor A com 8 elementos inteiros.
Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados por 2, ou seja: B[i] = A[i] * 2. */

int main()
{
    int TAM = 8;
    int vetorA[8], vetorB[8];

    for (int i = 0; i < TAM ; i++){
        printf("Qual o valor do vetor A: \n");
        scanf("%d", &vetorA[i]);

        vetorB[i] = vetorA[i] * 2;

    }
    for (int i = 0; i < TAM ; i++){
        printf("Vetor B =[%d] \n ", vetorB[i]);
    }




}
