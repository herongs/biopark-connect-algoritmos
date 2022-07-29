#include <stdio.h>
#include <stdlib.h>

/* Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta.
A seguir imprima quantos pontos fez o apostador. */

int main()
{
    int vet1[] = {1,2,3,4,5}, vet2[10], vet = 0;

    for(int i = 1; i <=10; i++){
        printf("Qual o [%d] numero apostado: ", i);
        scanf("%d", &vet2[i]);
        for(int j = 1; j <= 5; j++){
            if (vet2[i] == vet1[j]){
                vet++;
            }
        }
      }
    printf("Acertou: %d ", vet);


}
