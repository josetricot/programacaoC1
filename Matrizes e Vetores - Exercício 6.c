/******************************************************************************
Matrizes e Vetores - Exercícios
6- CAIXA ELETRÔNICO. Escrever um programa que lê um valor inteiro em reais e
calcula qual o menor número possível de notas de 100, 50, 20, 10, 5, 2 e 1
em que o valor lido pode ser entregue ao cliente.
Escrever a relação de notas necessárias. Utilize um vetor para armazenar o valor
de cada tipo de nota. Notas = {100, 50, 20, 10, 5, 2, 1}


*******************************************************************************/
#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2, 1}; // Vetor com valores das notas
    int quantidade[7] = {0}; // Vetor armazena a quantidade de cada nota
    int i;
    
    printf("CAIXA ELETRÔNICO - CÁLCULO DE NOTAS\n");
    printf("Digite o valor em reais: ");
    scanf("%d", &valor);
    
    // Calcula quantidade de nota
    for(i = 0; i < 7; i++) {
        if(valor >= notas[i]) {
            quantidade[i] = valor / notas[i];
            valor = valor % notas[i]; // Atualiza o valor com o resto
        }
    }
    
    printf("\nNOTAS NECESSÁRIAS:\n");
    for(i = 0; i < 7; i++) {
        if(quantidade[i] > 0) {
            printf("%d nota(s) de R$ %d\n", quantidade[i], notas[i]);
        }
    }
    
    return 0;
}