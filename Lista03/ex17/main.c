#include <stdio.h>
#include <stdlib.h>

/*Em um restaurante Self-Service, o preço do quilo custa R$ 23,59. Crie um algoritmo
a. que, para cada cliente, leia o peso do prato e valor gasto com bebida e calcule o valor total
da conta que o cliente irá pagar [ valor da conta = bebida + (peso * 15) ]. Só encerre a
execução quando o peso do prato digitado for igual a 0 e o valor da bebida for também igual
a 0.*/

int main()
{

    float peso,bebida, valorTotal;

    printf("Bem vindo ao restaurante 123.\n O valor do quilo e de 23,59 reais... \n");
    system("pause");

    do {
        printf("Qual o peso do prato? \n");
        scanf("%f", &peso);
        printf("Qual o valor gasto com bebidas?\n");
        scanf("%f", &bebida);
        valorTotal = ((peso*15) + bebida);
        printf("\nO valor total a ser pago e: %.2f \n\n"  , valorTotal);

    }
    while (peso != 0 && bebida != 0) ;

    return 0;
}
