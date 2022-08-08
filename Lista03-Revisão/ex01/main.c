#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que computa a pot�ncia ab para valores a (double) e b (int) passados por par�metro (n�o use bibliotecas como math.h). Use a fun��o anterior e crie um programa que imprima todas
as pot�ncias: */


double potenciacao (double num, int elevado);

int main()
{
    double num;
    int elevado;

    printf("Insira o primeiro numero: ");
    scanf("%lf", &num);
    printf("Insira a potencia: ");
    scanf("%d", &elevado);

    printf("\n potencia: %.2lf",  potenciacao (num, elevado) );

}


double potenciacao (double num, int elevado){

    int contador;
    double potencia;

    //Limitadores
    potencia = 1;

    for (int i = 1; i <= elevado; i++){
        potencia = potencia * num;
        printf("%.2lf ^ %d: %.2lf \n", num , i, potencia);
    }

    return potencia;
}
