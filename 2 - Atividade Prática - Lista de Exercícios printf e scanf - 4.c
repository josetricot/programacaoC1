/*4 - Escreva um programa que leia 4 notas: a primeira com peso 1, a segunda com peso 2,
a terceira com peso 3,
a quarta com peso 4. Leia as 4 notas e cacule a média e escreva na tela.
Media = (N1*1+N2*2+N3*3+N4*4)/(1+2+3+4) */

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

    printf("\nA média das notas é: %.2f", average);
}
