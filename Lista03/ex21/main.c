#include <stdio.h>
#include <stdlib.h>

 /*O restaurante da questão 17 realiza reservas de mesas através de ligações telefônicas e possui 50
mesas disponíveis para reserva. Dessas mesas, 25 são na área de fumantes e 25 na área de não
fumantes. Para cada ligação recebida, o restaurante deve verificar se a reserva é para a mesa na
área de fumantes ou de não fumantes e contabilizar a quantidade de mesas restantes disponíveis
em cada área. Construa um algoritmo que realize a reserva das mesas e encerre a execução
quando não houver mais mesas disponíveis (nem na área de fumantes, nem na área de não
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

