/*3 - Escreva um programa que leia 3 notas,
calcule a média simples e escreva na tela;*/

#include <stdio.h>

int main()

{
    float score1, score2, score3, average;
    printf("\nDigite a primeiro nota: ");
    scanf("%f",&score1);
    printf("\nDigite a segunda nota: ");
    scanf("%f",&score2);
    printf("\nDigite o terceira nota: ");
    scanf("%f",&score3);
    
    average= (score1+score2+score3)/3;

    printf("\nA méida simples das notas é: %.2f", average);
}
