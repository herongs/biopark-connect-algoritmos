#include <stdio.h>
#include <stdlib.h>

/*Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias. */


int main()
{
   int dia, mes, calcAno;

    printf("Que dia e hoje?\n");
    scanf("%d", &dia);
    printf("Qual o mes?\n");
    scanf("%d", &mes);

    calcAno = dia + ((mes-1)*30);

    printf("Ja se passaram %d dias desde o come�o do ano", calcAno);

    return 0;
}
