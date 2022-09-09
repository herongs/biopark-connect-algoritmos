#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aux, aux1;

    FILE *arq1 = fopen ("arq.txt", "r");
    FILE *arq2 = fopen ("arq2.txt", "r");
    FILE *arq3 = fopen ("arq3.txt", "w");

    while(fscanf(arq1, "%c", &aux)!= EOF)
        fprintf(arq3, "%c", aux);

    fprintf(arq3, " ");

    while(fscanf(arq2, "%c", &aux1) != EOF)
        fprintf(arq3, "%c", aux1);

}
