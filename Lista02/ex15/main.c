#include <stdio.h>
#include <stdlib.h>

/*
Uma empresa concederá um aumento de salário aos seus funcionários, variável de acordo com o cargo, conforme a tabela abaixo.
Faça um algoritmo que leia o salário e o cargo de um funcionário e calcule o novo salário.
Se o cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de aumento. Mostre o
salário antigo, o novo salário e a diferença.
Código Cargo Percentual
101 Gerente 10%
102 Engenheiro 20%
103 Técnico 30%*/

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
