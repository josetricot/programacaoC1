/******************************************************************************

Ex Matriz Multiplicação produto escalar de linhas por colunas

*******************************************************************************/
#include <stdio.h>

void multiplicaMatriz(int matrizA[2][2], int matrizB[2][2]) {
    int matrizC[2][2] = {{0, 0}, {0, 0}};
    int i, j, k;
    
    printf("\nA matriz C da multiplicacao é:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 2; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[2][2] = {{1, 2}, {3, 4}};
    int matrizB[2][2] = {{5, 6}, {7, 8}};
    
    multiplicaMatriz(matrizA, matrizB);
    return 0;
}

//[[1*5+2*7, 1*6+2*8], [3*5+4*7, 3*6+4*8]] = [[19, 22], [43, 50]]