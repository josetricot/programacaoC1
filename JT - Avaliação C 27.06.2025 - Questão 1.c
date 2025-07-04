/******************************************************************************

Avaliação C 27/06/2025
Questão 1
Programador: José Athaualpa Kolesny Tricot

Prova de Linguagem de Programação I - Fabio Okuyama 27/06/2025
Envie os fontes .C em um único arquivo .ZIP
Após o envio final, baixe os arquivos e verifique se os arquivos enviados são os corretos.
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

Questão 1(5,0): Fazer um programa que cria uma matriz 10 X 10 de INT e efetuar as seguintes
operações:
O programa deve preencher automaticamente a matriz com múltiplos de 4, iniciando no 4 conforme
segue:
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
31 32 33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48 49 50
51 52 53 54 55 56 57 58 59 60
61 62 63 64 65 66 67 68 69 70
71 72 73 74 75 76 77 78 79 80
81 82 83 84 85 86 87 88 89 90
91 92 93 94 95 96 97 98 99 100
101 102 103 104 105 106 107 108 109 110

Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*1+10
a) preenchimento correto da matriz/exibir corretamente a matriz (usar repetição). (1pt)
b) Média dos elementos da diagonal principal (usar repetição). (1pt)
c) Definir função que calcule Quantidade de primos em cada linha (a função deve receber a
matriz e o número da linha como parâmetros). Usando repetição , apresentar a quantidade de
cada linha (1pt)
d) Definir função que calcule a quantidade de primos na matriz inteira. A função deve receber a
matriz como parâmetro. A deve fazer uso da função definida no item C. (1pt)
e) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 7 valor (definir função que recebe a matriz
como parâmetro). (1pt)

*******************************************************************************/
#include <stdio.h>

/*c) Definir função que calcule Quantidade de primos em cada linha (a função deve receber a
matriz e o número da linha como parâmetros). Usando repetição , apresentar a quantidade de
cada linha (1pt)*/
//Número primo é aquele que só é divisível por 1 e por ele próprio
int ehPrimo(int numero) {
    int k;

    if (numero <= 1) return 0; // Não é primo (por definição, 0 e 1 não são primos)

    for (k = 2; k < numero; k++) {
        if (numero % k == 0) {
            return 0; // Se achar um divisor além de 1 e dele mesmo, não é primo
        }
    }

    return 1; // Se nenhum divisor for encontrado, é primo
}

int contarPrimosLinha(int i, int matriz[10][10]) {
    int resposta = 0;
    int j;
    for (j = 0; j < 10; j++) {
        if (ehPrimo(matriz[i][j])) {
            resposta++;
        }
    }
    return resposta;
}

/* ou dentro de uma só função

int contarPrimosLinha(int i, int matriz[10][10]) {
    int resposta = 0;
    int j, k, ehPrimo;

    for (j = 0; j < 10; j++) {  // percorre as 10 colunas da linha i
        int numero = matriz[i][j];

        if (numero <= 1) {
            continue; // não é primo
        }

        ehPrimo = 1; // Assume que é primo

        for (k = 2; k < numero; k++) {
            if (numero % k == 0) {
                ehPrimo = 0; // achou divisor → não é primo
                break;
            }
        }

        if (ehPrimo == 1) {
            resposta++; // é primo
        }
    }

    return resposta;
}
*/

/*d) Definir função que calcule a quantidade de primos na matriz inteira. A função deve receber a
matriz como parâmetro. A deve fazer uso da função definida no item C. (1pt)*/
int contarPrimosMatriz(int matriz[10][10]) {
    int resposta = 0;
    int i;
    for (i = 0; i < 10; i++) {
        resposta += contarPrimosLinha(i, matriz);
    }
    return resposta;
}

/*e) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 7 valor (definir função que recebe a matriz
como parâmetro). (1pt)*/

int somaDivisiveis7(int matriz[10][10]) {
    int resposta = 0;
    int i, j;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (matriz[i][j]%7==0) {
                resposta=resposta+matriz[i][j];
            }
        }
    }
    return resposta;
}

int main() {
    
    int matrizA[10][10];
    int i, j;
    int somaDiagPrinc=0;
    float mediaDiagPrinc=0.0;
    
    //a) preenchimento correto da matriz/exibir corretamente a matriz (usar repetição). (1pt)
    //Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*1+10
    printf("a) Matriz preenchida com múltiplos de 4:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            matrizA[i][j] = (i * 10 + j + 1) * 4;
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    //b) Média dos elementos da diagonal principal (usar repetição). (1pt)
    for (i = 0; i < 10; i++) {
        somaDiagPrinc += matrizA[i][i];
    }
    mediaDiagPrinc = somaDiagPrinc / 10.0;
    printf("\nb) A média da Diagonal Principal é: %.2f\n", mediaDiagPrinc);
    
    /*c) Definir função que calcule Quantidade de primos em cada linha (a função deve receber a
    matriz e o número da linha como parâmetros). Usando repetição , apresentar a quantidade de
    cada linha (1pt)*/
    
    printf("\nc) Quantidade de primos por linha:\n");
    printf("\n");
    for (i = 0; i < 10; i++) {
        printf("Linha %d: %d primos\n", i+1, contarPrimosLinha(i, matrizA));
    }
    
    /*d) Definir função que calcule a quantidade de primos na matriz inteira. A função deve receber a
    matriz como parâmetro. A deve fazer uso da função definida no item C. (1pt)*/
    printf("\nd) Total de primos da matriz: %d\n", contarPrimosMatriz(matrizA));
    
    /*e) Encontrar a SOMA DOS NÚMEROS DIVISÍVEIS POR 7 valor (definir função que recebe a matriz
    como parâmetro). (1pt)*/
    
    printf("\ne) A soma dos números divisivéis por 7 é: %d\n", somaDivisiveis7(matrizA));
    
    printf("\nProgramador: José Athaualpa Kolesny Tricot");
    
    return 0;
}
