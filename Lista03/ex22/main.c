#include <stdio.h>
#include <stdlib.h>
/*Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quil�metro 0 at�
ultrapassar o quil�metro 4000, parando em v�rias cidades durante o
a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
b. informa��o da quilometragem percorrida e adicione ao valor da quilometragem total.
c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
d. ultrapassar os 4000 km.*/


int main()
{

    float km, soma = 0;

    while (soma < 4000){
        printf("Quantos km tu andou?");
        scanf("%f", &km);

        soma += km;
    }
    printf("\n A quilometragem ultrapassou os 4000 km");
}
