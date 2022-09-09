#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    FILE *p;

    char nome[20], redacao[200], command[50];

    printf("Digite o nome do arquivo: ");
    gets(nome);

    strcat(nome,".txt");
    p = fopen(nome, "w");

    printf("O que deseja escrever no arquivo?\n");
    gets(redacao);

    fprintf(p, "%s", redacao);


    fclose(p);

    strcpy(command, "notepad ");
    strcat(command, nome);
    system(command);

}
