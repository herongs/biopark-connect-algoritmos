#include <stdio.h>
#include <stdlib.h>

/*Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
Fa�a um algoritmo para calcular quantos litros de �gua e de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio). */

int main()
{

    float quantLitros, totalAgua, totalSuco;

    printf("Quantos litros de refresco serao feitos ? \n");
    scanf("%f", &quantLitros);

    totalAgua = quantLitros * 0.8;
    totalSuco = quantLitros * 0.2;

    printf("Serao necessario %.2f litros de agua e %.2f litros de suco de maracuja.", totalAgua, totalSuco);

}
