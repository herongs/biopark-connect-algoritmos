#include <stdio.h>
#include <stdlib.h>

 /*Escreva uma função que recebe um número inteiro n passado por parâmetro e devolve o maior número
primo que é menor ou igual a n.*/

int primo(int n);



int main()
{
    int n;

    printf("Digite o numero:");
    scanf("%d", &n);

    printf("%d", MenorOuIgual(n));
}


int contPrimo(int n)
{

    int cont = 0;

    for(int i = n; i > 0; i--)
    {
        if(n % i == 0)
            cont++;
    }
    if (cont > 2)
                return 0;
            return 1;

}


