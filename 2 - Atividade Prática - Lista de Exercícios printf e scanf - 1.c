//1 - Escreva um programa que lê dois numeros e imprima o resultado da soma dos dois numeros.

#include <stdio.h>

int main()

{
    float number1, number2, result;
    printf("\nDigite o primeiro número: ");
    scanf("%f",&number1);
    printf("\nDigite o segundo número: ");
    scanf("%f",&number2);
    
    result= number1+number2;

    printf("\nA soma dos dois números é: %.2f", result);
}
