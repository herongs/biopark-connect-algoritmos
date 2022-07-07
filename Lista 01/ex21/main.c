#include <stdio.h>
#include <stdlib.h>

/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato,
 faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

int main()
{

    float quantLatas, quantGarrafas6, quantGarrafas2, litros;

    printf("Quantas latas de 350ml foram compradas?\n");
    scanf("%f", &quantLatas);
    printf("Quantas garrafas de 600ml foram compradas?\n");
    scanf("%f", &quantGarrafas6);
    printf("Quantas garrafas de 2 litros foram compradas?\n");
    scanf("%f", &quantGarrafas2);

    litros = (quantLatas * 0.35) + (quantGarrafas6 * 0.6) + (quantGarrafas2 * 2);

    printf("Foram comprados %.2f litros de refrigerante.", litros);

}
