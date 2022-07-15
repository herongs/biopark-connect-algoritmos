#include <stdio.h>
#include <stdlib.h>

 //Leia o nome do usuário e escreva o nome dele na tela 10 vezes.

int main()
{
    char nome[50];

    printf("Qual o seu nome?");
    scanf("%s", nome);

    for ( int i = 0; i < 10 ; i++){
        printf("%s \n", nome);}

    return 0;
}
