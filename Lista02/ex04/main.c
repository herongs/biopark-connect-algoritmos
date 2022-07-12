#include <stdio.h>
#include <stdlib.h>

//Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado

int main()
{
       float a;

    printf("Digite o valor valor: \n");
    scanf("%f",&a);


    if (a > 0)
        printf("A multiplicacao por dois e %.2f", a * 2);
    else if (a < 0)
        printf("A multiplicacao por tres e %.2f", a * 3);
    else
        printf("%.2f", a );


    return 0;
}

