/*Exercício 6. Faça um programa que leia um nº inteiro e
mostre uma mensagem indicando se este número é par ou ímpar,
e se é positivo ou negativo. Ex: 'O número 2 é par e é positivo'.*/

#include <stdio.h>

int main() {
    int number;
    
    printf("\nDigite um número inteiro: ");
    scanf("%d", &number);
    
    // Verifica se é par ou ímpar
    if (number % 2 == 0) {
        printf("\nO número %d é par", number);
    } else {
        printf("\nO número %d é ímpar", number);
    }
    
    // Verifica se é positivo ou negativo
    if (number > 0) {
        printf(" e é positivo.");
    } else if (number < 0) {
        printf(" e é negativo.");
    } else {
        printf(" e é zero.");
    }
    
    return 0;
}
