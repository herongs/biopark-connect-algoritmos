#include <stdio.h>
#include <stdlib.h>

/*Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
a. para cada aluno, leia a informa��o de suas 2 notas, calcule a m�dia e informe se o
b. aluno est� aprovado ou reprovado. O aluno est� aprovado apenas se a sua m�dia for maior
ou igual a 6. */

int main()
{

    int quantAlun;
    float nota1, nota2, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantAlun);

    for ( int i = 0; i < quantAlun ; i++){
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2)/2;

        if (media >= 6){
            printf("\nA media foi: %f \n", media);
            printf("O aluno esta aprovado\n \n");
        }
        else{
            printf("\nA media foi: %f\n", media);
            printf("O aluno esta reprovado\n\n");
        }

    }





}
