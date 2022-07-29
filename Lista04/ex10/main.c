#include <stdio.h>
#include <stdlib.h>

//Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordenação que preferir


int main()
{
         int vet[] = {8,7,6,5,4,3,2,1};
    int tam = sizeof(vet)/sizeof(int);
    int aux;
    int x = 1;


    for( int j=tam-1; j>=1;j--) {
        for ( int i = 0; i <j; i++){
            if (vet[i] > vet[i+1]){
                aux = vet[i+1];
                vet[i+1]=vet[i];
                vet[i]=aux;

            }
        }
    }


    for(int i=0;i<tam;i++) {
        printf("%d ", vet[i]);

}
}

