#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que computa a pot�ncia ab para valores a (double) e b (int) passados por par�metro (n�o use bibliotecas como math.h). Use a fun��o anterior e crie um programa que imprima todas
as pot�ncias: */

int main()
{

    int x, n, potencia, contador;

  printf("\n\tCalculo de potencias\n");
  printf("\nDigite um numero inteiro: ");
  scanf("%d", &x);
  printf("Digite um numero um inteiro nao-negativo: ");
  scanf("%d", &n);



  /* Inicializacoes */
  potencia = 1;
  contador = 0;

  /* Calculo da potencia */
 int potenci  while (contador != n) {
    potencia = potencia * x;
    contador = contador + 1;
  }

  printf("\nO valor de %d elevado a %d: %d\n", x, n, potencia);
  return 0;
}
