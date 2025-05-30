/******************************************************************************
Matrizes e Vetores - Exercícios
4 - Faça um programa que carregue automaticamente 2 vetores. O primeiro com 10
elementos numéricos e o segundo com 10 caracteres. Imprima o conteúdo destes
vetores intercalados.
Ex:
1a2b3c4d5e...
Dica: char c[10]; for(i=0;i<10<i++) c[i]=65+i;



*******************************************************************************/
#include <stdio.h>

int main() {
    int vetA[10];
    char c[10];
    int i;

    // Preenche automaticamente
    for(i = 0; i < 10; i++) {
        vetA[i] = i + 1;      // Números de 1 a 10
        c[i] = 65 + i;        // Letras maiúsculas de 'A' a 'J' (65 é 'A' em ASCII)
    }

    // Imprime intercalado
    printf("\nResultado: ");
    for(i = 0; i < 10; i++) {
        printf("%d%c", vetA[i], c[i]);
    }

    return 0;
}