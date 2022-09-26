#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3

struct Produto{
char nome[80];
double preco;
int quantidade;
};

void recebeItens(struct Produto vet[]){

    for(int i = 0; i < TAM; i++){
        printf("Digite o nome: ");
        gets(vet[i].nome);
        printf("Digite o preco: ");
        scanf("%lf", &vet[i].preco);
        printf("Digite a quantidade: ");
        scanf("%d", &vet[i].quantidade);
        fflush(stdin);
    }
}

void imprimeItens(struct Produto vet[]){

    for(int i = 0; i < TAM; i++){
        printf("Nome %d: %s \n", i, vet[i].nome);
        printf("Preco %d: %.2lf \n",i,vet[i].preco);
        printf("Quantidade %d: %d \n",i,vet[i].quantidade);
    }



}

void ordenaPreco(struct Produto vet[TAM]){

    struct Produto aux;
    int menor;

    for(int i = 0; i < TAM; i++){
            menor = i;
        for(int j = i+1; j < TAM; j++){
            if (vet[menor].preco > vet[j].preco){
            aux = vet[menor];
            vet[menor] = vet[j];
            vet[j] = aux;
        }
    }
}
}

void imprimeOrdem(struct Produto vet[TAM]){

    for(int i = 0; i < TAM; i++){
        printf("Preco %d: %.2lf \n",i,vet[i].preco);

    }



}

void ordenaQntd(struct Produto vet[TAM]){

    struct Produto aux;
    int menor;

    for(int i = 0; i < TAM; i++){
            menor = i;
        for(int qntd = i+1; qntd < TAM; qntd++){
            if (vet[menor].quantidade > vet[qntd].quantidade){
            aux = vet[menor];
            vet[menor] = vet[qntd];
            vet[qntd] = aux;
        }
    }
}
}

void imprimeOrdemQntd(struct Produto vet[TAM]){

    for(int i = 0; i < TAM; i++){
        printf("Qntd %d: %d \n",i,vet[i].quantidade);

    }
}




int main(){

    struct Produto vet[TAM];

   recebeItens(vet);
   ordenaPreco(vet);
   imprimeOrdem(vet);
   ordenaQntd(vet);
   imprimeOrdemQntd(vet);
   return 0;

}
