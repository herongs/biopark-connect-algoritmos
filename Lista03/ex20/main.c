#include <stdio.h>
#include <stdlib.h>
/*
Uma loja de animais vende gatos e cachorros. Escreva um algoritmo que leia a quantidade de
animais da loja e, para cada animal, leia a informação da espécie do animal (se é gato ou
cachorro). Ao final, exiba a quantidade de animais que são gatos e a quantidade de animais que
são cachorros existentes na loja*/


int main()
{
  int animais, gato = 0, dog = 0, especie;

  printf("Quantos animais a loja possui?\n");
  scanf("%d", &animais);

  for (int i = 1; i <= animais ; i++){
    printf("Qual a especie do animal [%d]? (0 - gato/1 - cachorro)\n", i);
    scanf("%d", &especie);

    if (especie == 0)
        gato++;
    if (especie == 1)
        dog++;

  }

  printf("A loja possui %d gatos e %d cachorros...", gato, dog);





}
