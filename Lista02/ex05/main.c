#include <stdio.h>
#include <stdlib.h>
//Faça um algoritmo que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar, imprimir o resultado desta operação.
int main()
{
    int num, verif, c, d;

    printf("Digite um valor: \n");
    scanf("%d",&num);

    verif = num % 2;

    if (verif == 0){
        c = num + 5;
        printf("O valor e par, e somado com 5 e %d", c);}
    else {
        d = (num + 8);
        printf("O valor e impar, e somado com 8 e %d", d);}

    return 0;
}
