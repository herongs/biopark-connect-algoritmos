#include <stdio.h>
#include <stdlib.h>

int main()
{

    char aux;

    FILE *f = fopen ("arq.txt", "r");
    FILE *n = fopen ("arqVogais.txt", "w");

    while(fscanf(f, "%c", &aux)!= EOF){
        if (aux == 'a' || aux == 'e' || aux == 'o' || aux == 'i' || aux == 'u'){
            fprintf(n, "*");
        }
        else
            fprintf(n,"%c", aux);
    }

    fclose(f);
    fclose(n);
}
