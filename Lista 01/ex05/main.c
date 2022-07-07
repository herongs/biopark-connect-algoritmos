#include <stdio.h>
#include <stdlib.h>

/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque. */

int main()
{
    float valorLitro, valorPgto, quantLitros;

    printf("Qual o valor da gasolina?\n");
    scanf("%f", &valorLitro);
    printf("Qual o valor do pagamento?\n");
    scanf("%f", &valorPgto);

    quantLitros = valorPgto / valorLitro;

    printf("Com %.2f reais e a gasolina custando %.2f o litro, e possivel abastecer %.2f litro", valorPgto, valorLitro ,quantLitros);

    return 0;
}
