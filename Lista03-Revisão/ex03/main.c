#include <stdio.h>
#include <stdlib.h>

/*. Escreva uma fun��o que recebe um n�mero inteiro n passado por par�metro e devolve o primeiro
n�mero da s�rie de fibonacci que � maior ou igual a n.*/

int contFibonacci(int n);

int main()
{
    int n;
    printf("Digite um numero inteiro:");
    scanf("%d", &n);
    printf("%d", contFibonacci(n));


}

int contFibonacci(int n) {

    int fibonacci = 1, termoAnterior1 = 0, termoAnterior2 = 0;
        while(fibonacci < n){
        termoAnterior2 = termoAnterior1;
        termoAnterior1 = fibonacci;
        fibonacci = termoAnterior1 + termoAnterior2;
    }
    if(fibonacci == n)
        return n;
    else{
    printf("%d \n", termoAnterior1);
    printf("%d\n", termoAnterior2);
    return termoAnterior1 + termoAnterior2;}
}






