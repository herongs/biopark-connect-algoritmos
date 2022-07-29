#include <stdio.h>
#include <stdlib.h>

/*Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X. */

int main()
{
    int vet1[5],vet2[10], vet3[5], vet = 0;

    for(int i = 0; i < 10; i++){
        printf("Qual o valor do vetor 2: ");
        scanf("%d", &vet2[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("Qual o valor do vetor 1: ");
        scanf("%d", &vet1[i]);
        for(int j = 0; j < 10; j++){
            if (vet1[i] == vet2[j]){
                vet3[vet] = vet2[j];
                vet++;
            }
        }
      }
    for(int i = 0; i < 5; i++){
        printf("Vetor 3 - Posicao [%d]: %d \n", i, vet3[i]);
    }
}
