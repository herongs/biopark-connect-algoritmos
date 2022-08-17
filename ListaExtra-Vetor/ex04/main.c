#include <stdio.h>
#include <stdlib.h>

/*Fac¸a um programa que leia um vetor de 8 posic¸oes e, em seguida, leia tamb ˜ em dois va- ´
lores X e Y quaisquer correspondentes a duas posic¸oes no vetor. Ao final seu programa ˜
devera escrever a soma dos valores encontrados nas respectivas posic¸ ´ oes ˜ X e Y .*/

void lerVetor(int vet [], int tam){

    for(int i = 0; i < tam; i++){
        printf("Insira o valor:");
        scanf("%d", &vet[i]);

    }
}


int somaXY(int vet[], int x, int y){

    int soma;

    soma = vet[x] + vet[y];

    return soma;
}

int main()
{
    int x, y;
    int tam = 8;
    int vet[tam];

    lerVetor(vet, tam);
    printf("Insira o valor de X: ");
    scanf("%d", &x);
    printf("Insira o valor de Y: ");
    scanf("%d", &y);

    printf("A soma das posições x e y resulta em %d", somaXY(vet, x, y));

}
