/*Exercício 2.  Leia 04 (quatro) notas de um aluno, a primeira tem peso 1,
a segunda peso 2, a terceira peso 3, a quarta peso 4.
Calcule a média e informe se o aluno foi aprovado ou não.
Usar 'else'. Caso a nota seja menor que 7 ele será reprovado.*/

#include <stdio.h>

int main()

{
    float score1, score2, score3, score4, average;
    printf("\nDigite a primeira nota: ");
    scanf("%f",&score1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",&score2);
    printf("\nDigite a terceira nota: ");
    scanf("%f",&score3);
    printf("\nDigite a quarta nota: ");
    scanf("%f",&score4);
    
    average= (score1*1+score2*2+score3*3+score4*4)/(1+2+3+4);

    if (average >= 7) {
        printf("\nA média das notas é: %.1f. Aprovado!", average);
    } else {
        printf("\nA média das notas é: %.1f. Reprovado!", average);
    }
    
    return 0;
}
