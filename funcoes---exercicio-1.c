/******************************************************************************

1 - Escreva um programa que leia um número e escreva este número elevado ao quadrado.
O programa deve ter uma função que recebe um número como parâmetro e retorne este número elevado ao quadrado 

*******************************************************************************/
#include <stdio.h>

float prod(float x){
    return x*x;
}

int main(){
    float a;
    printf("CALCULA QUADRADO NÚMERO");
    printf("\nDigite um número: ");
    scanf("%f",&a);
    printf("\nO quadrado do número é: %f",prod(a));
}