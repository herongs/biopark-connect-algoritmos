#include <stdio.h>
#include <stdlib.h>
#define TAM 5

//Realizar Busca Binaria

struct Pessoa{
int rg;
int cpf;
char nome[80];
};

int recebeRG(struct Pessoa cadastro[TAM]){

    for(int i = 0; i < TAM; i++){
        printf("\n Digite o RG: ");
        scanf("%d", &cadastro[i].rg);
    }
}

int buscaBinaria (struct Pessoa cadastro[TAM], int x){

    int e = -1, d = TAM; // atenção!

    while (e < d-1) {
      int m = (e + d)/2;

      if (cadastro[m].rg < x)
        e = m;

      else
        d = m;
   }
   if (d < TAM)
   return d + 1;
   else
    return 0;
}


int main()
{
    int x;
    struct Pessoa cadastro[100];

    recebeRG(cadastro);

    printf("Qual numero deseja: ");
    scanf("%d", &x);

    printf("%d",buscaBinaria (cadastro, x));



}

