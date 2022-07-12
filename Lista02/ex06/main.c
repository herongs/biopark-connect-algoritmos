#include <stdio.h>
#include <stdlib.h>


    // Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente.

int main()
{
   int n1, n2, n3;

    printf("Digite um numero:\n");
    scanf("%d",&n1);
    printf("Digite outro numero:\n");
    scanf("%d",&n2);
    printf("Digite mais um numero:\n");
    scanf("%d",&n3);

    if ((n1 >= n2) && (n1 >= n3)){
        if (n2 >= n3)
            printf("%d,%d,%d",n1,n2,n3);
        else
            printf("%d,%d,%d",n1,n3,n2);
    }
    if ((n2 >= n1) && (n2 >= n3)){
        if (n1 >= n3)
            printf("%d,%d,%d",n2,n1,n3);
        else
            printf("%d,%d,%d",n2,n3,n1);
    }
    if ((n3 >= n1) && (n3 >= n2)){
        if (n2 >= n1)
            printf("%d,%d,%d",n3,n2,n1);
        else
            printf("%d,%d,%d",n3,n1,n2);
    }
}

