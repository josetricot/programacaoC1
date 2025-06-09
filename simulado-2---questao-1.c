/******************************************************************************

Simulado 2
Questão 1
Programador: José Athaulpa Kolesny Tricot
Nota: os Programas devem conter comentários e o nome do autor.
Cada um dos programas deve escrever o nome do programador em algum
momento.

Questão 1(5,0): Desenvolver um programa que cria uma matriz 7 X 7 de INT e
efetuar as seguintes operações:

O programa deve preencher automaticamente a matriz com múltiplos de 7, iniciando
no 7 conforme segue:
Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*7
7 14 21 28 35 42 49
56 63 70 77 84 91 98
105 112 119 126 133 140 147
154 161 168 175 182 189 196
203 210 217 224 231 238 245
252 259 266 273 280 287 294
301 308 315 322 329 336 343
a) preenchimento correto da matriz e exibir corretamente a matriz (0,5pts). (usar
repetição
b) Apresentar o maior Elemento da matriz (usar repetição). (1pt)
c) Quantidade de elementos pares diagonal principal (usar repetição) (1pt)
d) media dos elementos de cada linha e escrever a media
e) Definir função que calcula a quantidade números ímpares de uma coluna
(função recebe a matriz como parâmetro e o número da coluna)
f) Usando a função definida no item e, definir função que calcula a
quantidade de números ímpares da matriz (definir função que recebe a
matriz como parâmetro)
g) Apresentar o resultado dos itens b/c/d/e/f

*******************************************************************************/
#include <stdio.h>

//função conta ímpares coluna
void contarImparesPorColuna(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j; // declarar índices
    int quantImparesColuna; // declarar contador

    for (j = 0; j < colunas; j++) {
        quantImparesColuna = 0; // zera o contador no começo de cada coluna

        for (i = 0; i < linhas; i++) {
            if (matriz[i][j] % 2 != 0) {
                quantImparesColuna++;
            }
        }

        printf("\nA quantidade de ímpares na coluna %d é: %d", j + 1, quantImparesColuna);
    }
}

//função conta ímpares matriz
void contarImparesMatriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j; // declarar índices
    int quantImparesMatriz = 0; // declarar contador

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (matriz[i][j] % 2 != 0) {
                quantImparesMatriz++;
            }
        }
    }
    printf("\nA quantidade de ímpares da matriz é: %d", quantImparesMatriz);
}

int main() {
    int matrizA[7][7];
    int i, j;
    int maiorValor, quantParesDiag=0, somaLinha=1, quantImparesColuna=0;
    float mediaLinha=0.0;
    
    //preenche automaticamente e imprimi a Matriz
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            matrizA[i][j] = (i*7+j+1)*7;
            printf("%3d ",matrizA[i][j]);
        }
        printf("\n");
    }
    //apresenta maior número da matriz
    maiorValor=matrizA[0][0];
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (matrizA[i][j] > maiorValor) {
                maiorValor = matrizA[i][j];
            }     
        }        
    }
    printf("\nO maior valor da matrizA é: %d",maiorValor);
    
    //quantidade de elementos pares na diagonal principal
    for (i = 0; i < 7; i++) {
            if (matrizA[i][i] % 2 == 0) {
                quantParesDiag=quantParesDiag+1;
            }     
    }
    printf("\nA quantidade de elementos pares na diagonal principal é: %d",quantParesDiag);
    
    //calcula e mostra a média das linhas
    for (i = 0; i < 7; i++) {
        somaLinha=0;
        for (j = 0; j < 7; j++) {
            somaLinha=somaLinha+matrizA[i][j];
        }        
        mediaLinha=somaLinha/7.0;
        printf("\nA média da linha %d é: %.2f", i+1, mediaLinha);
    }
/*    //calcula os ímpares de uma coluna
    for (j = 0; j < 7; j++) {
        quantImparesColuna=0;
        
        for (i = 0; i < 7; i++) {    
            if (matrizA[i][j] % 2 != 0) {
                quantImparesColuna++;
            }
        }           
    printf("\nA quantidade de ímpares na coluna %d é: %d", j+1, quantImparesColuna);
    }
*/
    //chama função conta impares coluna
    contarImparesPorColuna(7, 7, matrizA); 
    //chama função conta impares matriz
    contarImparesMatriz(7, 7, matrizA);
    
    printf("\nProgramador: José Athaulpa Kolesny Tricot.\n");
}
