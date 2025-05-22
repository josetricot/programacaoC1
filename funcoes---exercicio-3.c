/******************************************************************************

3 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números

Cada um dos items deve ser uma função 

*******************************************************************************/
#include <stdio.h>

float som(float x, float y){
    return x+y;
}
float mult(float x, float y){
    return x*y;
}
float divi(float x, float y){
    return x/y;
}
float sub(float x, float y){
    return x-y;
}

int main()
{
    float a, b;
    char escolha;
    printf("CALCULADORA COM FUNÇÕES");
    printf("\nDigite dois números, separado com espaço: ");
    scanf("%f %f", &a, &b);
    printf("Escolha a operação que deseja realizar (+ soma, * multiplicação, / divisão, - subtração): ");
    scanf(" %c", &escolha);
    switch (escolha) {
    case '+':
        printf("\nA soma dos números é: %f",som(a,b));
        break;
    case '*':
        printf("\nA multiplicação dos números é: %f",mult(a,b));
        break;
    case '/':
        printf("\nA divisão dos números é: %f",divi(a,b));
        break;
    case '-':
        printf("\nA subtração dos números é: %f",sub(a,b));
        break;
    default:
        printf("\nDigite apenas + soma, * multiplicação, / divisão, - subtração");
    }
}