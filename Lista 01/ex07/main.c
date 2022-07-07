#include <stdio.h>
#include <stdlib.h>

/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias. */


int main()
{
   int dia, mes, calcAno;

    printf("Que dia e hoje?\n");
    scanf("%d", &dia);
    printf("Qual o mes?\n");
    scanf("%d", &mes);

    calcAno = dia + ((mes-1)*30);

    printf("Ja se passaram %d dias desde o começo do ano", calcAno);

    return 0;
}
