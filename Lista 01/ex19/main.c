#include <stdio.h>
#include <stdlib.h>

/*A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */


int main()
{
    float valorIdent, valorAlim, valorTotal, quantFrango;

    printf("Quantos frangos vao ser marcados?\n");
    scanf("%f", &quantFrango);

    valorIdent = quantFrango * 4;
    valorAlim = quantFrango * 7;
    valorTotal = valorIdent + valorAlim;

    printf("O valor gasto para a granja identificar os frangos vai ser de: R$ %.2f", valorTotal);

}
