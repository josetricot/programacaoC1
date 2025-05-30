/******************************************************************************
Matrizes e Vetores - Exercícios
1 - Escreva um programa que leia 10 números inteiros. Escrevas os 10 números na
ordem em que foram informados e depois os 10 números na ordem inversa
(da posição 10 para a primeira). 



*******************************************************************************/
#include <stdio.h>

int main() {
    int vetA[10],i;
    
    //lê 10 entradas
    for(i=0; i<10; i++){
        printf("Digite um número para posição %d: ",i);
        scanf("%d",&vetA[i]);
    }
    //escreve 10 entradas
    printf("\nOrdem informada: \n");
    for(i=0; i<10; i++){
        printf("vetA[%d]: %d\n", i, vetA[i]);
    }
    //escreve 10 entradas ordem inversa
    printf("\nOrdem inversa: \n");
    for(i=9; i>=0; i--){
        printf("vetA[%d]: %d\n", i, vetA[i]);
    }
    return 0;
}