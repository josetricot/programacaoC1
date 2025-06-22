/******************************************************************************

Simulado 3 Questão 1
Programador: José Athaualpa Kolesny Tricot

Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

Questão 1(5,0): Fazer um programa que cria uma matriz 4 X 4 de INT e efetuar as seguintes
operaçõe s:
O programa deve preencher automaticamente a matriz com múltiplos de 4, iniciando no 4 conforme
segue:

4 8 12 16
20 24 28 32
36 40 44 48
52 56 60 64

Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*4

a) preenchimento correto da matriz/exibir corretamente a matriz
b) Média dos elementos da diagonal secundária (usar repetição).
c) SOMA dos elementos da diagonal principal (usar repetição)
d) Média dos elementos de cada coluna (usar repetição), apresentar a média de cada coluna
e) Encontrar a Média da matriz valor (definir função que recebe a matriz como parâmetro)
f) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 5 valor (definir função que recebe a matriz
como parâmetro)

Implementação do item a: 0,5 pts
Implementação do item b: 1,0pts
Implementação do item c: 1,0pts
Implementação do item d: 1,0pts
Implementação do item e: 1,0pts
Implementação do item f: 0,5pts

*******************************************************************************/
#include <stdio.h>

//função que calcula média matriz e recebe a matriz como parâmetro

float calculaMediaMatriz(int matrizA[4][4]) {
    int i,j, somaMatriz=0;
    float mediaMatriz;
    
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++ ){
            somaMatriz=somaMatriz+matrizA[i][j];
        }
    }        
    mediaMatriz=somaMatriz/16.0;
    return mediaMatriz;
}

//função SOMA DOS NÚMEROS DIVISÍVEIS POR 5 valor, que recebe a matriz como parâmetro

float calculaSomaDivisiveisPor5(int matrizA[4][4]) {
    int i,j, somaMatrizDiv5=0;
    float mediaMatriz;
    
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++ ) {
            if (matrizA[i][j] % 5 == 0) {
                somaMatrizDiv5=somaMatrizDiv5+matrizA[i][j];
            }
        }
    }        
    return somaMatrizDiv5;
}

int main() {
    
    int matrizA[4][4];
    int i, j;
    int somaDiagSec=0;
    float mediaDiagSec;
    int somaDiagPrinc=0, somaColuna=0;

    //a) preenchimento correto da matriz/exibir corretamente a matriz
    
    printf("\na)\n");
    
    for (i=0; i<4; i++) {
        for (j=0; j<4; j++ ) {
            matrizA[i][j] = (i*4+j+1)*4;
            printf("%3d ",matrizA[i][j]);   
        }
    printf("\n");
    }
    
    //b) Média dos elementos da diagonal secundária (usar repetição).
    printf("\nb)\n");
    
    for (i=0; i<4; i++) {
        somaDiagSec=somaDiagSec+matrizA[i][3-i];
    }
    mediaDiagSec=somaDiagSec/4;
    printf("A média da diagonal secundária é: %.2f", mediaDiagSec);
    printf("\n");
    
    //c) SOMA dos elementos da diagonal principal (usar repetição)
    printf("\nc)\n");
    
    for (i=0; i<4; i++) {
        somaDiagPrinc=somaDiagPrinc+matrizA[i][i];
    }
    printf("A soma da diagonal principal é: %.2d", somaDiagPrinc);
    printf("\n");
    
    //d) Média dos elementos de cada coluna (usar repetição), apresentar a média de cada coluna
    printf("\nd)\n");
    for (i=0; i<4; i++) {
        somaColuna=0;
        for (j=0; j<4; j++ ){
        somaColuna=somaColuna+matrizA[i][j]; 
        }
    printf("A média da coluna %d é: %f\n", i+1, somaColuna/4.0);
    }
    
    //e) Encontrar a Média da matriz valor (definir função que recebe a matriz como parâmetro) 
    printf("\ne)\n");
    printf("A média da matriz é: %.2f\n", calculaMediaMatriz(matrizA));
    
    //f) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 5 valor (definir função que recebe a matriz como parâmetro)
    printf("\nf)\n");
    printf("A soma dos número divisíveis por 5 é: %.2f\n", calculaSomaDivisiveisPor5(matrizA));
    
    printf("\n");
    printf("\nProgramador: José Athaualpa Kolesny Tricot");
    return 0;
}