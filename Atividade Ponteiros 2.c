/******************************************************************************

Atividade Ponteiros 2

a - Crie um programa que leia 4 variáveis int, informe o endereço e o conteúdo de cada uma delas

b- Crie uma função que recebe dois ponteiros inteiros como parâmetros e devolva a media aritmética dos conteúdos apontados (float); (fazer a média dos numeros, não dos endereços)

c - Crie uma função que receba como parâmetro 3 ponteiros variáveis inteiras e devolva o maior valor (maior conteúdo, não o maior endereço);

d - Crie uma função que receba como parâmetro 3 ponteiros para inteiro e devolva o endereço que aponta para a variável de maior valor; (importante: quero o endereço do maior valor, não o maior endereço...)

*******************************************************************************/
#include <stdio.h>

float calculaMediaConteudo (int *a, int *b) {
    float media=0.0;
    
    media=(*a+*b)/2.0;
    return media;
}

int calculaMaiorValor (int *a, int *b, int *c) {
    int maiorValor=*a;
    
    if (*b>maiorValor) {
        maiorValor=*b;
    }
    
    if (*c>maiorValor) {
        maiorValor=*c;
    }
    
    return maiorValor;
}

int *informaEndMaiorPonteiro (int *a, int *b, int *c) {
    int *enderecoMaior=a;
    
    if (*b>*enderecoMaior) {
    enderecoMaior = b;
    }
    
    if (*c>*enderecoMaior) {
    enderecoMaior = c;
    }

    return enderecoMaior;
}

int main() {
    
    int i;
    int vet[4];
    int A, B, C, D;
    
    for (i=0; i<4; i++) {
       printf("Digite um valor para variável %c: ", 65+i);
       scanf("%d", &vet[i]);
    }
    
    A = vet[0];
    B = vet[1];
    C = vet[2];
    D = vet[3];

    
    printf("\nVariável A | Endereço de Memória: %p | Conteúdo: %d", &A, A);
    printf("\nVariável B | Endereço de Memória: %p | Conteúdo: %d", &B, B);
    printf("\nVariável C | Endereço de Memória: %p | Conteúdo: %d", &C, C);
    printf("\nVariável D | Endereço de Memória: %p | Conteúdo: %d", &D, D);

    printf("\n\nA média entre A e B é %.2f", calculaMediaConteudo(&A, &B));
    
    printf("\n\nO maior valor dos conteúdos dos ponteiros de A, B e C é %d", calculaMaiorValor(&A, &B, &C));
    
    printf("\n\nO endereço de maior valor entre A, B e C é %p", informaEndMaiorPonteiro(&A, &B, &C));
    
    return 0;
}
