#include <stdio.h>
#include <stdlib.h>

/*Foi feita uma pesquisa de canal de TV em várias casas da cidade de João Câmara. Para cada
casa visitada, foi preenchida uma ficha contendo o número do canal (3, 5, 8, 11 ou 13) e o número
de pessoas que estavam assistindo o canal naquela casa. Faça um algoritmo que:
a. Leia a informação da quantidade de casas participantes da pesquisa.
b. Receba as informações coletadas em cada uma das casas participantes da
c. pesquisa: a informação do canal que estava sendo assistido e a quantidade de
d. pessoas que estava assistindo aquele canal na casa.
e. Contabilize quantas pessoas estava assistindo cada canal (leve em conta a
f. quantidade de pessoas que assistia cada canal em cada casa)
g. Ao finalizar a leitura de todas as fichas, escreva o número do canal e sua
h. respectiva porcentagem de audiência
*/


int main()
{

    int casas, pessoas, canal, contPessoas = 0 ,somacanal3 = 0, somacanal5 = 0, somacanal8 = 0, somacanal11 = 0, somacanal13 = 0;
    float porcent3, porcent5, porcent8, porcent11, porcent13;

    printf("Qual foi a quantidade de casas: ");
    scanf("%d", &casas);

    for (int i = 0; i < casas; i++){
        printf("Qual o canal assistido pela casa %d (3/5/8/11/13)? ", i);
        scanf("%d", &canal);
        printf("Qual a quantidade de pessoas da casa? ");
        scanf("%d", &pessoas);

        contPessoas += pessoas;

        if (canal == 3){
            somacanal3 += pessoas;
        }
        if (canal == 5)
            somacanal5 += pessoas;
        if (canal == 8)
            somacanal8 += pessoas;
        if (canal == 11)
            somacanal11 += pessoas;
        if (canal == 13)
            somacanal13 += pessoas;

    }

    porcent3 = (somacanal3*100.00)/contPessoas;
    porcent5 = (somacanal5*100.00)/contPessoas;
    porcent8 = (somacanal8*100.00)/contPessoas;
    porcent11 = (somacanal11*100.00)/contPessoas;
    porcent13 = (somacanal13*100.00)/contPessoas;

    printf("A quantidade de pessoas ouvidas foi de %d \n", contPessoas);
    printf("O canal 3 possui %.2f porcento da audiencia \n", porcent3);
    printf("O canal 5 possui %.2f porcento da audiencia \n", porcent5);
    printf("O canal 8 possui %.2f porcento da audiencia \n", porcent8);
    printf("O canal 11 possui %.2f porcento da audiencia \n", porcent11);
    printf("O canal 13 possui %.2f porcento da audiencia \n", porcent13);

}
