#include <stdio.h>
#include <stdlib.h>

struct Data{
int dia;
int mes;
int ano;
};

void ordena(struct Data vet[], int tam){
    struct Data aux;
    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++ ){
            if(vet[i].dia > vet[j].dia){
                aux = vet[j];
                vet[j]= vet[i];
                vet[i]=aux;
            }

        }
    }
    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++ ){
            if(vet[i].mes > vet[j].mes){
                aux = vet[j];
                vet[j]= vet[i];
                vet[i]=aux;
            }
        }
    }
    for(int i = 0; i < tam; i++){
        for(int j = i+1; j < tam; j++ ){
            if(vet[i].ano > vet[j].ano){
                aux = vet[j];
                vet[j]= vet[i];
                vet[i]=aux;
            }
        }
    }

}

void imprime(struct Data vet[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d/%d/%d\n", vet[i].dia, vet[i].mes, vet[i].ano);
}
}

int main()
{
    struct Data vet[3];

    vet[0].dia = 16;
    vet[0].mes = 1;
    vet[0].ano = 2022;
    vet[1].dia = 14;
    vet[1].mes = 10;
    vet[1].ano = 2022;
    vet[2].dia = 5;
    vet[2].mes = 3;
    vet[2].ano = 2022;
    ordena(vet, 3);
    imprime(vet, 3);
    return 0;

}
