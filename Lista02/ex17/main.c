#include <stdio.h>
#include <stdlib.h>

 /* Para uma lanchonete, escrever um algoritmo que leia o código do item pedido, a quantidade e calcule o valor
a ser pago por aquele lanche. Considere que a cada execução somente será calculado um item. O cardápio
é o seguinte:
Produto Preço
Cachorro quente R$11,00
Bauru R$ 8,50
Misto Quente R$ 8,00
Hamburger R$ 9,00
Cheeseburger R$10,00
Refrigerante R$ 4,50 */

int main()
{
    int produto, c1,c2,c3,c4,c5,c6;
    float total;


    printf("Bem vindo a Lanchonete Cleberson...\n\n");
    printf("Esse e o nosso cardapio:\n");
    printf("1 - Cachorro quente R$11,00\n");
    printf("2 - Bauru R$ 8,50\n");
    printf("3 - Misto Quente R$ 8,00\n");
    printf("4 - Hamburger R$ 9,00\n");
    printf("5 - Cheeseburger R$10,00\n");
    printf("6 - Refrigerante R$ 4,50\n\n");

    c1 = 0;
    c2 = 0;
    c3 = 0;
    c4 = 0;
    c5 = 0;
    c6 = 0;

    do {

    printf("Digite o codigo do produto para adiona-lo a sua conta:\n");
    scanf("%d", &produto);

    switch (produto){
        case 1:
            c1++;
            printf("Cachorro quente SELECIONADO!\n");
            break;
        case 2:
            c2++;
            printf("Bauru SELECIONADO\n");
            break;
        case 3:
            c3++;
            printf("Misto Quente SELECIONADO\n");
            break;
        case 4:
            c4++;
            printf("Hamburger SELECIONADO\n");
            break;
        case 5:
            c5++;
            printf("Cheeseburger SELECIONADO\n");
            break;
        case 6:
            c6++;
            printf("Refrigerante SELECIONADO\n");
            break;
        case 7:
            system ("pause");
            system ("cls");
            printf("Conta encerrada\n\n");
            break;
        default:
            printf("\n\nOpcao invalida \n");
    }
    }
    while ( produto > 0 && produto < 7);

    total = (c1 * 11) + (c2 * 8.5) + (c3 * 8) + (c4 * 9) + (c5 * 10) + (c6 * 4.5);

    printf("O total da conta foi de: %.2f", total);
    printf("\n\nVolte sempre!!!!\n\n");

    return 0;
}
