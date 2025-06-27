/*Exercício 1.  Leia 03 (três) notas de um aluno, calcule sua média.
Caso a média seja menor que 7 ele será reprovado.
Apresente a média calculada e a situação (aprovado ou reprovado).*/

#include <stdio.h>

int main() {
    float score1, score2, score3, average;
    
    printf("\nDigite a primeira nota: ");
    scanf("%f", &score1);
    printf("\nDigite a segunda nota: ");
    scanf("%f", &score2);
    printf("\nDigite a terceira nota: ");
    scanf("%f", &score3);
    
    average = (score1 + score2 + score3) / 3;
    
    if (average >= 7) {
        printf("\nA média das notas é: %.1f. Aprovado!", average);
    } else {
        printf("\nA média das notas é: %.1f. Reprovado!", average);
    }
    
    return 0;
}
