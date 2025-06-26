//2 - Escreva um programa que lê três numeros e imprima o resultado da multiplicação.

#include <stdio.h>

int main()

{
    float number1, number2, number3, result;
    printf("\nDigite o primeiro número: ");
    scanf("%f",&number1);
    printf("\nDigite o segundo número: ");
    scanf("%f",&number2);
    printf("\nDigite o terceiro número: ");
    scanf("%f",&number3);
    
    result= number1*number2*number3;

    printf("\nO resultamos da multiplicação dos três números é: %.2f", result);
}
