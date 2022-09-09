#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char aux;

    FILE *f = fopen ("arq.txt", "r");
    FILE *n = fopen ("arq2.txt", "w");

    while(fscanf(f, "%c", &aux)!= EOF){
        fprintf(n, "%c", toupper(aux));
    }

     fclose(f);
     fclose(n);
}
