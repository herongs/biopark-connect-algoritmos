#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo, conforme a tabela abaixo.
Fa�a um algoritmo que leia o sal�rio e o cargo de um funcion�rio e calcule o novo sal�rio.
Se o cargo do funcion�rio n�o estiver na tabela, ele dever�, ent�o, receber 40% de aumento. Mostre o
sal�rio antigo, o novo sal�rio e a diferen�a.
C�digo Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30%*/

int main()
{
   int codigo;
   float novoSal, salario;

   printf("Qual o seu salario?\n");
   scanf("%f", &salario);
   printf("Qual o codigo do funcionario?\n");
   scanf("%d", &codigo);

   if ( codigo == 101){
        novoSal = (salario * 1.1);
   }
   else if ( codigo == 102){
        novoSal = (salario * 1.2);
   }
   else if ( codigo == 103){
        novoSal = (salario * 1.3);
   }
   else {
        novoSal = (salario * 1.4);
   }

   printf("O salario antigo do funcionario era de %.2f. \n O seu novo salario e de %.2f. \n A diferenca deles e de: %.2f", salario, novoSal, novoSal-salario);
}
