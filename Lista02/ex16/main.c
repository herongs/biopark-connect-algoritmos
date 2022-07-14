#include <stdio.h>
#include <stdlib.h>

/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano. Faça
um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela abaixo.
Mostre uma mensagem informando o saldo médio e o valor do crédito.
Saldo Médio Percentual
De 0 a 200 Nenhum crédito
De 201 a 400 20%
De 401 a 600 30%
Acima de 601 40%*/


int main()
{
   float saldoMedio, credito;

   printf("Qual o seu saldo medio no ultimo ano?\n");
   scanf("%f", &saldoMedio);

   if ( 0 < saldoMedio && saldoMedio <= 200){
        credito = 0;
   }
   else if ( 201 <= saldoMedio && saldoMedio <=400){
        credito = saldoMedio * 0.2;
   }
   else if ( 401<= saldoMedio && saldoMedio<= 600){
        credito = saldoMedio * 0.3;
   }
   else {
        credito = saldoMedio * 0.4;}

   printf("O saldo medio do cliente e de %.2f, e seu credito e de %.2f", saldoMedio, credito);
}
