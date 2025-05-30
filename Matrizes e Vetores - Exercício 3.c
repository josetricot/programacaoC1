/******************************************************************************
Matrizes e Vetores - Exercícios
3 - Escreva um programa que leia 10 números reais. Apresente o resultado da
multiplicação destes. 



*******************************************************************************/
#include <stdio.h>

int main() {
    int i;
    float mult=1.0,vetA[10];
    
    
    //lê 10 entradas
    for(i=0; i<10; i++){
        printf("Digite um número para posição %d: ",i);
        scanf("%f",&vetA[i]);
        mult=mult*vetA[i];
    }
    printf("\nA multiplicação dos 10 números é: %f\n", mult);
        
    return 0;
}