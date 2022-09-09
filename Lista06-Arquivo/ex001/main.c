#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FILE *arq;
    //arq = fopen("arq.txt","w");

    int aux = 1;
    char ler;
    FILE *f = fopen ("arq.txt", "r");

    //
    /*do{
    scanf("%d", &aux);
    fprintf(f,"%d", aux);
    }
    while (aux != 0);*/

    //le o texto e imprime na tela
    //while(fscanf(f,"%d",&aux) != EOF)
    //printf("%d", aux);

    while(fscanf(f, "%c", &ler) != EOF){
        if (ler == '\n')
            aux++;
    }

    printf("%d linhas", aux);


    fclose(f);
}
