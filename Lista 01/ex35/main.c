#include <stdio.h>
#include <stdlib.h>

//Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;


int main()
{
  float diagonalMaior, diagonalMenor, area;

    printf("Qual o tamanho da diagonal maior? \n");
    scanf("%f", &diagonalMaior);
    printf("Qual o tamanho da base menor? \n");
    scanf("%f", &diagonalMenor);


    area = (diagonalMaior * diagonalMenor) /2;

    printf("A area do losango e de %.2f.", area);
}
