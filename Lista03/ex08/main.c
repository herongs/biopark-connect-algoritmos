#include <stdio.h>
#include <stdlib.h>


//Leia o nome e a idade de 10 pessoas e exiba o nome da pessoa mais nova.


int main()
{
    char nome[50];
    int i, idade, menor = 9999;


    for (i = 0 ; i < 10  ; i++){

    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    printf("Qual a sua idade?\n");
    scanf("%d", &idade);

    if (menor < idade)
        menor = menor;
    else
        menor = idade;

    fflush(stdin);

    }
    printf("%s e o mais novo com %d anos...", nome, menor);


    return 0;
}
