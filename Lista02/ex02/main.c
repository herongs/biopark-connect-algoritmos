#include <stdio.h>
#include <stdlib.h>

//Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar.


int main()
{
    int num, verif;

    printf("Digite um valor: \n");
    scanf("%d",&num);

    verif = num % 2;

    if (verif == 0)
        printf("O valor e par");
    else
        printf("O valor e impar");

    return 0;
}
