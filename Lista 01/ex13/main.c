#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, centena, dezena, unidade, sobra;

    printf("Qual e o valor a ser calculado? \n");
    scanf("%d", &num);

    centena = num / 100;
    sobra = num - (centena * 100);
    dezena = sobra / 10;
    unidade = sobra - (dezena * 10);


    printf("CENTENA = %d \n", centena);
    printf("DEZENA = %d \n", dezena);
    printf("UNIDADE = %d \n", unidade);

}
