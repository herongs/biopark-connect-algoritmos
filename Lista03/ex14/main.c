#include <stdio.h>
#include <stdlib.h>

 /*Faça um algoritmo escreva a diversas vezes a pergunta “Olá tudo bem?” e leia a
a. resposta do usuário enquanto ele responde não. Só encerre a execução quando a resposta
for igual a “Sim”.*/

int main()
{

    char resposta[4];

    printf("Ola, tudo bem?");
    fgets(resposta, 4, stdin);

    while ((resposta[0] == 'n') && (resposta[1] == 'a') && (resposta[2] == 'o')){
        printf("Ola, tudo bem?");
        fflush(stdin);
        fgets(resposta, 4, stdin);
    }











}
