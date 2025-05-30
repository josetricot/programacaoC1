/******************************************************************************
Matrizes e Vetores - Exercícios
2 - Escreva um programa que leia 10 números inteiros. Apresente a soma dos 10
números. 



*******************************************************************************/
#include <stdio.h>

int main() {
    int vetA[10],i,soma;
    
    
    //lê 10 entradas
    for(i=0; i<10; i++){
        printf("Digite um número para posição %d: ",i);
        scanf("%d",&vetA[i]);
        soma=soma+vetA[i];
    }
    printf("\nA soma dos 10 números é: %d\n", soma);
    
    return 0;
}