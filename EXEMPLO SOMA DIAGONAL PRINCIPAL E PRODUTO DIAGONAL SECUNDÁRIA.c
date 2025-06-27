/******************************************************************************

EXEMPLO SOMA DIAGONAL PRINCIPAL E PRODUTO DIAGONAL SECUNDÁRIA

*******************************************************************************/
#include <stdio.h>

int main() {
    int matriz[3][3]; // Matriz 3x3
    int i, j;
    int somaDiagonalPrincipal = 0;
    int multiplicacaoDiagonalSecundaria = 1;

    // Leitura da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibindo a matriz
    printf("\nMatriz informada:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Calculando a soma da diagonal principal
    for (i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i]; // Índices iguais (0,0), (1,1), (2,2)
    }

    // Calculando a multiplicação da diagonal secundária
    for (i = 0; i < 3; i++) {
        multiplicacaoDiagonalSecundaria *= matriz[i][2 - i]; // (0,2), (1,1), (2,0)
    }

    // Exibindo os resultados
    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Multiplicação da diagonal secundária: %d\n", multiplicacaoDiagonalSecundaria);

    return 0;
}

/*
Se o usuário digitar:

1 2 3
4 5 6
7 8 9

A saída será:

Soma da diagonal principal: 15   // 1 + 5 + 9
Multiplicação da diagonal secundária: 105   // 3 * 5 * 7
*/