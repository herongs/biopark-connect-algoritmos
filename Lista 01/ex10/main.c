#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y).*/

int main()
{
    double x1, y1, x2, y2, calcDist, resultDist;

    printf("Informe a coordenada x do primeiro ponto: \n");
    scanf("%lf", &x1);
    printf("Informe a coordenada y do primeiro ponto: \n");
    scanf("%lf", &y1);
    printf("Informe a coordenada x do segundo ponto: \n");
    scanf("%lf", &x2);
    printf("Informe a coordenada x do segundo ponto: \n");
    scanf("%lf", &y2);

    calcDist = (pow((x2-x1), 2)) + (pow((y2-y1), 2));
    resultDist = sqrt(calcDist);

    printf("%.2lf", resultDist);
}
