#include <stdio.h>
#include <stdlib.h>

/*Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer X litros de refresco (informados pelo usuário). */

int main()
{

    float quantLitros, totalAgua, totalSuco;

    printf("Quantos litros de refresco serao feitos ? \n");
    scanf("%f", &quantLitros);

    totalAgua = quantLitros * 0.8;
    totalSuco = quantLitros * 0.2;

    printf("Serao necessario %.2f litros de agua e %.2f litros de suco de maracuja.", totalAgua, totalSuco);

}
