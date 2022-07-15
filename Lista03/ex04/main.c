#include <stdio.h>
#include <stdlib.h>

int main()
{
     char nome[50];
     int n,i;

    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Qual o numero?\n");
    scanf("%d", &n);

    for (i = 0 ; i < n  ; i++){
        printf("%s \n", nome);}



    return 0;


}
