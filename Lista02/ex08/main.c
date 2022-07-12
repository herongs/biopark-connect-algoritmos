#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição
de pagamento escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
a) À vista em dinheiro ou cheque, recebe 10% de desconto
b) À vista no cartão de crédito, recebe 15% de desconto
c) Em duas vezes, preço normal de etiqueta sem juros
d) Em duas vezes, preço normal de etiqueta mais juros de 10% */

int main()
{
    float valorEtiqueta;
    int condicao;

    printf("Qual o preco da etiqueta?\n");
    scanf("%f", &valorEtiqueta);

    printf("\nEssas sao as condicoes de pagamento:\n");
    printf("1) A vista em dinheiro ou cheque, recebe 10 de desconto\n");
    printf("2) A vista no cartao de credito, recebe 15 de desconto\n");
    printf("3) Em duas vezes, preco normal de etiqueta sem juros\n");
    printf("4) Em duas vezes, preco normal de etiqueta mais juros de 10%\n\n");

    printf("Qual seria a opcao de pagamento?\n");
    scanf("%d", &condicao);

    if (condicao == 1){
        valorEtiqueta = valorEtiqueta * 0.9;
        printf("O pagamento sera a vista, em dinheiro ou cheque, com 10 de desconto o valor fica: %.2f\n", valorEtiqueta);
    }
    else if (condicao == 2){
        valorEtiqueta = valorEtiqueta * 0.85;
        printf("O pagamento sera a vista, no cartao de credito, com 15 de desconto o valor fica: %.2f\n", valorEtiqueta);
    }
    else if (condicao == 3){
        valorEtiqueta = valorEtiqueta / 2;
        printf("O pagamento sera em duas vezes, cada parcela tera o valor de: %.2f\n", valorEtiqueta);
    }
    else if (condicao == 4){
        valorEtiqueta = (valorEtiqueta * 1.1) / 2;
        printf("O pagamento sera em duas vezes, com 10 de juros, o valor de cada parcela sera de: %.2f\n", valorEtiqueta);
    }
    else
        printf("Opcao invalida");
    return 0;
}
