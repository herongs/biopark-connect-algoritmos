#include <stdio.h>
#include <stdlib.h>

/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio. */

int main()
{
    float sombraPessoa, sombraPredio, alturaPessoa, calcAltura;

    printf("Qual o tamanho da sua sombra?\n");
    scanf("%f", &sombraPessoa);
    printf("Qual a altura da sombra do predio?\n");
    scanf("%f", &sombraPredio);
    printf("Qual a sua altura?\n");
    scanf("%f", &alturaPessoa);

    calcAltura = (alturaPessoa * sombraPredio)/ sombraPessoa;

    printf("A altura do predio aproximada e de %.2f metros", calcAltura);


}
