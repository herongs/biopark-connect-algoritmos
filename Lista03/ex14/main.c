#include <stdio.h>
#include <stdlib.h>

 /*Fa�a um algoritmo escreva a diversas vezes a pergunta �Ol� tudo bem?� e leia a
a. resposta do usu�rio enquanto ele responde n�o. S� encerre a execu��o quando a resposta
for igual a �Sim�.*/

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
