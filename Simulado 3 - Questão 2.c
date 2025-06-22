/******************************************************************************
Simulado 3 questão 2
programador: José Athaualpa Kolesny Tricot

Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)
a- Leitura dos valores (0,5pts)
b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
maior valor ímpar . (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne o
menor valor par . (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a média inteira dos valores (0,5pts)
Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d.

*******************************************************************************/
#include <stdio.h>

//b função recebe vetor e retorna maior impar

int calculaMaiorValorImpar(int vetA[7]) {
    int i;
    int maiorValorImpar = -1;
    
    for (i=0; i<7; i++) {
        if ((vetA[i]%2==1)&&(vetA[i]>maiorValorImpar)) {
            maiorValorImpar=vetA[i];
        }    
    }
    return maiorValorImpar;    
}

//c função recebe vetor e retorna menor par

int calculaMenorValorPar(int vetA[7]) {
    int i;
    int menorValorPar = -1;

    for (i = 0; i < 7; i++) {
        if (vetA[i] % 2 == 0) { // Verifica se é par
            if (menorValorPar == -1 || vetA[i] < menorValorPar) {
                menorValorPar = vetA[i];
            }
        }
    }
    return menorValorPar;
}

//d função recebe vetor e media inteira dos valores

int calculaMedia(int vetA[7]) {
    int i;
    int soma = 0, media=0;

    for (i = 0; i < 7; i++) {
        soma=soma+vetA[i];
    }
    media=soma/7;
    return media;
}

int main()
{
    int vetA[7];
    int i;
    char c[7];
    
    //a) leitura dos valores
    printf("a)\n");
    for (i=0; i<7; i++) {
        printf("Escreva um valor para %c: ", 65+i);
        scanf("%d", &vetA[i]);
    }
    
    //b maior valor impar
    int maiorImpar = calculaMaiorValorImpar(vetA);

    if (maiorImpar != -1) {
        printf("\nb)\nO maior valor ímpar é: %d\n", maiorImpar);
    } else {
        printf("\nb)\nNão há valores ímpares.\n");
    }
    
    // c) Menor valor par
    int menorPar = calculaMenorValorPar(vetA);

    if (menorPar != -1) {
        printf("\nc)\nO menor valor par é: %d\n", menorPar);
    } else {
        printf("\nc)\nNão há valores pares.\n");
    }
    
    // d) Média inteira dos valores
    printf("\nd)\n");
    printf("A média inteira dos valores é: %d\n", calculaMedia(vetA));

    printf("\nProgramador: José Athaualpa Kolesny Tricot\n");
    return 0;
}
