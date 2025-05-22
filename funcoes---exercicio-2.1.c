/******************************************************************************

2.1 - Escreva um programa que leia 3 números. 
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
    printf("CALCULA PRODUTO E SOMA\n");
    printf("Digite os três números separados por espaço (ex: 1.5 2.5 3.5): ");
    scanf("%f %f %f", &a, &b, &c);
    printf("\nO produto dos números é: %f",prod(a,b,c));
    printf("\nA soma dos número é: %f",som(a,b,c));
}