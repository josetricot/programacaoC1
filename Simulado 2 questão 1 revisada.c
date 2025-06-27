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

//e) Definir função que calcula a quantidade números ímpares de uma coluna (função recebe a matriz como parâmetro e o número da coluna)

int contarImparesColuna(int j, int matriz[7][7]) {
    int resposta = 0;
    int i;
    for (i = 0; i < 7; i++) {
        if (matriz[i][j] % 2 != 0) {
            resposta++;
        }
    }
    return resposta;
}

/*f) Usando a função definida no item e, definir função que calcula a
quantidade de números ímpares da matriz (definir função que recebe a
matriz como parâmetro)*/

int contarImparesMatriz(int matriz[7][7]) {
    int resposta = 0;
    int j;
    for (j = 0; j < 7; j++) {
        resposta += contarImparesColuna(j, matriz);
    }
    return resposta;
}

int main() {
    int matrizA[7][7];
    int i, j;
    int maiorValor, quantParesDiag = 0, somaLinha;
    float mediaLinha;

    //a) preenchimento correto da matriz e exibir corretamente a matriz (0,5pts). usarrepetição
    
    printf("Matriz preenchida com múltiplos de 7:\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            matrizA[i][j] = (i * 7 + j + 1) * 7;
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }

    //b) Apresentar o maior Elemento da matriz (usar repetição). (1pt)

    maiorValor = matrizA[0][0];
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            if (matrizA[i][j] > maiorValor) {
                maiorValor = matrizA[i][j];
            }
        }
    }
    printf("\nO maior valor da matrizA é: %d\n", maiorValor);

    //c) Quantidade de elementos pares diagonal principal (usar repetição) (1pt)
    
    for (i = 0; i < 7; i++) {
        if (matrizA[i][i] % 2 == 0) {
            quantParesDiag++;
        }
    }
    printf("A quantidade de elementos pares na diagonal principal é: %d\n", quantParesDiag);

    //d) media dos elementos de cada linha e escrever a media
    
    for (i = 0; i < 7; i++) {
        somaLinha = 0;
        for (j = 0; j < 7; j++) {
            somaLinha += matrizA[i][j];
        }
        mediaLinha = somaLinha / 7.0;
        printf("A média da linha %d é: %.2f\n", i + 1, mediaLinha);
    }
    
    //g) Apresentar o resultado dos itens b/c/d/e/f (b c e já apresentados anteriormente)
    
    printf("\nQuantidade de ímpares por coluna:\n");
    for (j = 0; j < 7; j++) {
        printf("Coluna %d: %d ímpares\n", j, contarImparesColuna(j, matrizA));
    }

    printf("Total de ímpares na matriz: %d\n", contarImparesMatriz(matrizA));

    printf("\nProgramador: José Athaulpa Kolesny Tricot.\n");
    return 0;
}
