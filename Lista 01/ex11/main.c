#include <stdio.h>
#include <stdlib.h>

/*Uma f�brica controla o tempo de trabalho sem acidentes pela quantidade de dias. Fa�a um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada m�s possui sempre 30 dias.*/

int main()
{
    int dias, mes, anos, n, sobra;

    printf("Ha quantos dias estamos sem acidentes? \n");
    scanf("%d", &n);

    anos = n / 365;
    sobra = n - (anos * 365);
    mes = sobra / 30;
    dias = sobra - (mes * 30);


    printf("Estamos a %d anos,%d mes e %d dias sem acidentes! ", anos, mes, dias);

}
