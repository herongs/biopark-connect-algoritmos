#include <stdio.h>
#include <stdlib.h>

 /*Uma escola faz o pagamento de seus professores por hora/aula. Fa�a um algoritmo que solicite ao usu�rio, o
n�vel do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o sal�rio de
um professor sabendo que a f�rmula para o c�lculo do sal�rio � salario = valorHoraAula * qtdAula * 4.5. O valor
da hora/aula do professor � dado em fun��o do seu n�vel:
Professor N�vel 1 R$12,00 por hora/aula
Professor N�vel 2 R$17,00 por hora/aula
Professor N�vel 3 R$25,00 por hora/aula
*/

int main()
{
    int nivelProf, horasAula;
    float salario;

    printf("Qual e o nivel do professor?\n");
    scanf("%d", &nivelProf);
    printf("Quantas horas aulas o professor tem por semana?\n");
    scanf("%d", &horasAula);

    if ( nivelProf == 1){
        salario = 12 * horasAula * 4.5;
        printf("O salario do professor e de: %.2f", salario);
    }
    else if ( nivelProf == 2){
        salario = 17 * horasAula * 4.5;
        printf("O salario do professor e de: %.2f", salario);
    }
    else if ( nivelProf == 3){
        salario = 25 * horasAula * 4.5;
        printf("O salario do professor e de: %.2f", salario);
    }
    else
        printf("Dados Invalidos");

    return 0;

}
