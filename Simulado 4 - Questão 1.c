/******************************************************************************

Simulado 4 Questão 1
Programador: José Athaualpa Kolesny Tricot
CPF:009.400.920-18

Criar uma matriz de inteiro de dimensão X (veja sobre o valor do X abaixo).
A matriz deve ser preenchida automaticamente, fazendo uso de laço, o primeiro número deve ser Y e ir
aumentando em Y unidades em cada célula.
Você deve criar uma função que recebe como parâmetro a matriz e o número da coluna; essa função deve
calcular a soma da coluna indicada.

Apresentar:
a - A matriz preenchida (usando laço)
b - Soma de cada uma das linhas; (usar função)
c - Média dos elementos; (usar laço)
d - Percorrer a matriz e verificar qual o Maior número ímpar; (usar laço)
e - Quantidade de números divisíveis por 3; (usar laço)

O programa deve imprimir o NOME e o CPF do programador.

Para calcular o X: pegue o segundo dígito do seu CPF, realize o resto da divisão por 6 e some 5; Por
exemplo, se o seu segundo dígito é 8, o resto da divisão por 6 é 2. Somando cinco dá 7.
Para calcular o Y: pegue o terceiro dígito do seu CPF e some 9. Se o seu terceiro dígito é 5, seu Y é 14.

Exemplo: Para X=7 e Y=14 a matriz ficaria assim:

14 28 42 56 70 84 98
112 126 140 154 168 182 196
210 224 238 252 266 280 294
308 322 336 350 364 378 392
406 420 434 448 462 476 490
504 518 532 546 560 574 588
602 616 630 644 658 672 686

Dica: calcule manualmente os resultados dos itens b, c, d, e para saber se o seu programa calculou certo.
Dica 2: Lembre-se que na linguagem C as matrizes iniciam no 0,0. Enquanto no portugues estruturado é
convencionado iniciar no 1,1

*******************************************************************************/
#include <stdio.h>

//b - Soma de cada uma das linhas; (usar função)
int somaLinha(int i, int matrizA[5][5]) {
    int resposta = 0;
    int j;
    for (j = 0; j < 5; j++) {
        resposta=resposta+matrizA[i][j];
    }
    return resposta;
}

int main() {
    int vet[11]={0,0,9,4,0,0,9,2,0,1,8};
    int x, y;
    int i,j;
    int matrizA[5][5];
    float mediaElementos=0.0;
    int somaElementos=0;
    int maiorNumImpar, numerosDivisiveisPor3;
    
    x=(vet[1]%6+5);
    y=(vet[2]+9);
    
    if (vet[2]==5) y=14;
    
    printf("CPF: ");
    for (i=0; i<11; i++) {
        printf("%d", vet[i]);
    }
    
    printf("\n");
    printf("\nx=%d", x);
    printf("\ny=%d", y);
    printf("\n");
    
    //Dica: matriz[linha][coluna]=(linha*dimensao+coluna+1)*7
    //x é dimensão
    //y é o múltiplo
    
    //a - A matriz preenchida (usando laço)
    printf("\nMatriz preenchida com múltiplos de %d e dimensão %d:\n", y, x);
    printf("\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matrizA[i][j] = (i * 5 + j + 1) * 18;
            printf("%4d ", matrizA[i][j]);
        }
        printf("\n");
    }
    
    //b - Soma de cada uma das linhas; (usar função)
    printf("\nSoma das linhas:\n");
    for (i = 0; i < 5; i++) {
    printf("Linha %d soma= %d\n", i+1, somaLinha(i, matrizA));
    }
    
    //c - Média dos elementos; (usar laço)
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            somaElementos=somaElementos+matrizA[i][j];
        }
    }
    mediaElementos=somaElementos/25.0;
    printf("\nA média dos elementos é: %.2f", mediaElementos);
    printf("\n");
    //d - Percorrer a matriz e verificar qual o Maior número ímpar; (usar laço)
    maiorNumImpar=-1;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
                if ((matrizA[i][j]%2==1) && (matrizA[i][j]>maiorNumImpar)) {
                    maiorNumImpar=matrizA[i][j];
                }
        }
    }
    if (maiorNumImpar==-1) {
        printf("\nA matriz não tem número ímpar.");
    } else {
        printf("\nO maior número ímpar é: %d", maiorNumImpar);
    }
    
    printf("\n");
    //e - Quantidade de números divisíveis por 3; (usar laço)
    numerosDivisiveisPor3=0;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
                if (matrizA[i][j]%3==0) {
                    numerosDivisiveisPor3++;
                }
        }
    }
    if (numerosDivisiveisPor3==0) {
        printf("\nA matriz não números divisíveis por 3.");
    } else {
        printf("\nA quantidade de números divisíveis por 3 é: %d", numerosDivisiveisPor3);
    }    
    
    //Sempre que for contar, você começa com 0. O valor -1 normalmente é usado para sinalizar "não encontrado" em busca de máximo ou mínimo, mas não para contagem.
    
    printf("\n");
    printf("\nProgramador: José Athaualpa Kolesny Tricot");
    printf("\nCPF:009.400.920-18");
    
    return 0;
}