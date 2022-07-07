#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, nota3, calcMedia;

   printf("Qual foi a primeira nota? \n");
   scanf("%f", &nota1);
   printf("Qual foi a segunda nota? \n");
   scanf("%f", &nota2);
   printf("Qual foi a terceira nota nota? \n");
   scanf("%f", &nota3);

   calcMedia = (nota1 + (nota2 * 2) + (nota3 * 3)) / 6;

   printf("A sua media final foi de %.2f", calcMedia);

}
