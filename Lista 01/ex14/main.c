#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float  raio, area;

    printf("Qual e o raio da pizza \n");
    scanf("%f", &raio);

    area = M_PI * pow(raio, 2);

    printf("A area e de %.2f", area);
}
