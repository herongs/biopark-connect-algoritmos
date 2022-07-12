#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado
por nota*/

int main()
{
    int ident;
    float nota1, nota2, nota3, notaMedia;

    printf("Ola, vamos ao calculo da media\n");
    printf("Qual o numero de identificacao do aluno?\n");
    scanf("%d", &ident);
    printf("\nEntendido, agora vamos as notas\n");
    printf("Qual foi a primeira nota?\n");
    scanf("%f", &nota1);
    printf("Qual foi a segunda nota?\n");
    scanf("%f", &nota2);
    printf("Qual foi a terceira nota?\n\n");
    scanf("%f", &nota3);

    notaMedia = (nota1 + nota2 + nota3) / 3;

    printf("O aluno com o numero de identificacao %d, teve uma media final de: %.2f \n\n", ident, notaMedia);

    if (notaMedia >= 70)
        printf("Parabens, o aluno foi aprovado!");
    else if (40 <= notaMedia < 70)
        printf("Que pena, o aluno ficou em recuperacao");
    else
        printf("O alunos foi reprovado");

    return 0;

}
