/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


int main() {
    
    int matrizA[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int vetorA[3] = {
        1, 2, 3
    };
    int i, j;

    //exibe a matriz
    
    printf("Matriz preenchida é:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    //exibe o vetor
    
    printf("O vetor preenchido é:\n");
    for (i = 0; i < 3; i++) {
            printf("%3d ", vetorA[i]);
    }
}