#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int soma2 = 0;
    int TAM = 0;
    int m[TAM][TAM];
    int n = 0;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &TAM);

    n = TAM;

    for (int lin = 1; lin <= TAM; lin++){
        for (int col = 1; col <= TAM; col++){
            printf("Qual o numero da linha[%d,%d]?", lin,col);
            scanf("%d", &m[lin][col]);
        }
    }

    for (int lin = 1; lin <= TAM; lin++){
        for (int col = 1; col <= TAM; col++){
            if (lin == col){
                soma += m[lin][col];}
            if ((lin + col) == ( n - 1)){
                soma2 += m[lin][col];
            }
            printf("[%d]", m[lin][col]);
        }

    printf("\n");
}
        printf("A soma da diagonal principal e: %d", soma);
        printf("\n A soma da diagonal secundaria e: %d", soma2);

}

