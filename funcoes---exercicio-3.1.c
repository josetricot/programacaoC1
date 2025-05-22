/******************************************************************************

3.1 - Escreva um programa que apresente leia dois números e apresente as seguintes opções:
A - Somar 2 números
B - Multiplicar 2 números
C - Dividir 2 Números
D -  Subtrair 2 Números

Cada um dos items deve ser uma função 

*******************************************************************************/
#include <stdio.h>

void som(float x, float y) {
    printf("\nA soma dos números é: %f", x + y);
}

void mult(float x, float y) {
    printf("\nA multiplicação dos números é: %f", x * y);
}

void divi(float x, float y) {
    if(y != 0) {
        printf("\nA divisão dos números é: %f", x / y);
    } else {
        printf("\nErro: divisão por zero!");
    }
}

void sub(float x, float y) {
    printf("\nA subtração dos números é: %f", x - y);
}

int main() {
    float a, b;
    char escolha;
    
    printf("CALCULADORA COM FUNÇÕES");
    printf("\nDigite dois números, separado com espaço: ");
    scanf("%f %f", &a, &b);
    
    // Adicionei um espaço antes do %c para consumir o caractere de nova linha
    printf("Escolha a operação que deseja realizar (+ soma, * multiplicação, / divisão, - subtração): ");
    scanf(" %c", &escolha);
    
    switch (escolha) {
        case '+':
            som(a, b);
            break;
        case '*':
            mult(a, b);
            break;
        case '/':
            divi(a, b);
            break;
        case '-':
            sub(a, b);
            break;
        default:
            printf("\nDigite apenas + soma, * multiplicação, / divisão, - subtração");
    }
}