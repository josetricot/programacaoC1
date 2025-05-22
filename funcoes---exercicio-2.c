/******************************************************************************

2 - Escreva um programa que leia 3 números. 
O programa deve apresentar a soma e o produto dos 3 números. 
O programa deve ter uma função que recebe os três números e retorna a soma,
e outra função que recebe os três números e retorna o produto.

*******************************************************************************/
#include <stdio.h>

float prod(float x, float y, float z){
    return x*y*z;
}

float som(float x, float y, float z){
    return x+y+z;
}

int main(){
    float a, b, c;
    printf("CALCULA PRODUTO E SOMA");
    printf("\nDigite o primeiro número: ");
    scanf("%f",&a);
    printf("\nDigite o segundo número: ");
    scanf("%f",&b);
    printf("\nDigite o terceiro número: ");
    scanf("%f",&c);
    printf("\nO produto dos números é: %f",prod(a,b,c));
    printf("\nA soma dos número é: %f",som(a,b,c));
}