/******************************************************************************

Simulado 2
Questão 2
Programador: José Athaulpa Kolesny Tricot
2 - Escreva um programa que leia do usuário 6 valores INT a,b,c,d,e,f. (2,0pts)
a- Leitura dos valores e apresentar os resultados dos itens b,c,d (0,5pts)
b- Escreva uma função que recebe como parâmetro os valores do tipo int
A,B,C,D,E,F e retorne o maior elemento. (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int
A,B,C,D,E,F e retorne a quantidade de elementos pares. (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo float
A,B,C,D,E,F e escreve na tela a SOMA dos valores (0,5pts)

Nota: os Programas devem conter comentários e o nome do autor.
Cada um dos programas deve escrever o nome do programador em algum
momento.

*******************************************************************************/
#include <stdio.h>

float soma(int posicoes, int vetor[posicoes]) {
    int i;
    float soma = 0.0;
    
    for (i = 0; i < posicoes; i++){    
        soma=soma+vetor[i];
    }
    return soma;
}

int contadorMaiorValor(int posicoes, int vetor[posicoes]) {
    int i;
    int maiorValor = vetor[0]; // inicia com o primeiro valor válido
    
    for (i = 0; i < posicoes; i++){    
        if (vetor[i]>maiorValor) {
            maiorValor=vetor[i];
        }
    }
    return maiorValor;
}

int main()
{
    int vetorA[6];
    int i;
    int maiorValor;
    
    printf("\nEscreva 6 valores inteiros: \n");
    for (i = 0; i < 6; i++){
        scanf("%d", &vetorA[i]);
    }
    
    printf("\nVocê digitou: ");
    for (i = 0; i < 6; i++){
        printf("%d ", vetorA[i]);
    }
    
/*
    maiorValor=vetorA[0];
    for (i = 0; i < 6; i++){    
        if (vetorA[i]>maiorValor) {
            maiorValor=vetorA[i];
        }
    }
*/

    maiorValor = contadorMaiorValor(6, vetorA);
    
    printf("\nO maior valor digitado é: %d", maiorValor);
    
    float total = soma(6, vetorA); //chama função soma
    
    printf("\nA soma dos valores é: %f", total);
    
    printf("\nProgramador: José Athaulpa Kolesny Tricot.\n");
}
