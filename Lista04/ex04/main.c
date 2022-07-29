#include <stdio.h>
#include <stdlib.h>

/*Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
é a soma dos respectivos elementos em A e B, ou seja:
C[i] = A[i] + B[i]. */

int main()
{
    int vetA[10], vetB[10], vetC[10];

    for (int i = 0; i < 10; i++){
        printf("\nQual o valor na posicao [%d] do vetor A: ", i);
        scanf("%d", &vetA[i]);
        printf("\n Qual o valor na posicao [%d] do vetor B: ", i);
        scanf("%d", &vetB[i]);

        vetC[i] = vetA[i] + vetB[i];

        printf("\n\nA posicao [%d] do vetor C tem valor: %d \n\n", i, vetC[i]);
    }


}
