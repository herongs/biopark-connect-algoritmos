#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que simule o funcionamento de um caixa de supermercado. O
a. seu algoritmo deve receber do a informação de quantos produtos o cliente comprou e, para
cada produto, deverá ler o seu preço. Ao final, deverá informar quanto o cliente deve pagar
pelas compras.*/

int main()
{
    int quantProd;
    float valor, total = 0;

    printf("Bem vindo ao SuperMarket...\n");
    printf("Se ja finalizou suas compras nos informe quantos produtos foram comprados: \n ");
    scanf("%d", &quantProd);

    for (int i=1; i <= quantProd ; i++){
        printf("Informe o valor do produto [%d]: \n", i);
        scanf("%f", &valor);
        total = total + valor;
    }
    printf("A conta de %d produtos deu um total de: %.2f reais", quantProd, total);
}
