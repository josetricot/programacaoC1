/******************************************************************************

Ex Matriz Multiplicação Elemento por Elemento - Hadamard

*******************************************************************************/
#include <stdio.h>

void multiplicaMatriz(int matrizA[2][2], int matrizB[2][2]) {
    int matrizC[2][2];
    int i, j;
    
    printf("\nA matriz C da multiplicacao elemento por elemento é:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
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