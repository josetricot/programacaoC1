/******************************************************************************

RESOLUÇÃO PROFESSOR

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

int divisores(int n){
    int resp=0, i;
    for(i=1;i<=n;i++){
        if(n%i==0) resp++;
    }
    return resp;
}

//item c
int primosLinha(int mat[10][10], int l){
    int coluna, resp=0;
    for(coluna=0;coluna<10;coluna++){
        if(divisores(mat[l][coluna])==2) resp++;
    }
    return resp;
}

//item d
int primosMatriz(int mat[10][10]){
    int resp=0,linha;
    for(linha=0;linha<10;linha++) resp=resp+primosLinha(mat,linha);
    return resp;
}

//item E
int somaDiv7(int mat[10][10]){
    int l,c,resp=0;
    for(l=0;l<10;l++){
        for(c=0;c<10;c++){
            if(mat[l][c]%7==0) resp=resp+mat[l][c];
        }
    }
    return resp;
}

int main() {
    int m[10][10];
    int lin,col;
    float somaDP=0;
    //item A
    for(lin=0;lin<10;lin++){
        for(col=0;col<10;col++){
            m[lin][col]=(lin*10+col+1)*1+10;
        }
    }
    for(lin=0;lin<10;lin++){
        for(col=0;col<10;col++){
            printf("%3d ",m[lin][col]);
        }
        printf("\n");
    }
    //item b
    for(lin=0;lin<10;lin++){
        somaDP=somaDP+m[lin][lin];
    }
    printf("Media da Diagonal principal: %.2f\n",somaDP/10);
    //item c
    for(lin=0;lin<10;lin++) printf("Primos da linha %d: %d\n",lin, primosLinha(m,lin));
    //item d
    printf("Primos na Matriz inteira: %d\n",primosMatriz(m));
    //item e
    printf("Soma dos divisiveis por 7: %d",somaDiv7(m));
    
}
