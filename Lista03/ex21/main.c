#include <stdio.h>
#include <stdlib.h>

 /*O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
�rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
fumantes).*/


int main()
{

    int area,  somafumantes = 0, somanaofumantes = 0;

    for (int i = 0; i < 50; i++){

    int soma = 0;
    printf("Qual a area de reserva da mesa? ");
    scanf("%d",  &area);

    if (area == 1){
        somafumantes++;
        if (somafumantes <=25){
        soma++;
        printf("Reserva realizada na area de fumantes!\n\n");}
        else
        printf("Reservas de fumantes cheias, tente outra opcao...");
    }
    if (area == 2){
        somanaofumantes++;
        if (somanaofumantes <= 25){
        soma++;
        printf("Reserva realizada na area de nao fumantes!\n\n ");}
        else
        printf("Reservas de nao fumantes cheias, tente outra opcao...");
    }
    }
}

