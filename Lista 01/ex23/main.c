#include <stdio.h>
#include <stdlib.h>

/*Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
algoritmo para ler os dados necess�rios e calcular a altura do pr�dio. */

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
