/******************************************************************************

Avaliação C 27/06/2025
Questão 2
Programador: José Athaualpa Kolesny Tricot

Prova de Linguagem de Programação I - Fabio Okuyama 27/06/2025
Envie os fontes .C em um único arquivo .ZIP
Após o envio final, baixe os arquivos e verifique se os arquivos enviados são os corretos.
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

2 - Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)
a- Leitura dos valores (0,5pts) e apresentar em tela os valores lidos em cada variável.
b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
quantidade de números primos. (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
quantidade de pares. (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a tabuada da soma dos números (0,5pts)
Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d.

*******************************************************************************/
#include <stdio.h>

/*b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G
    e retorne a quantidade de números primos. (0,5 pts)*/
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

int calculaPrimos(int vetA[7]) {
    int i;
    int quantPrimos = 0;
    
    for (i=0; i<7; i++) {
        if (ehPrimo(vetA[i])) {
            quantPrimos++;
        }    
    }
    return quantPrimos;    
}    

/*c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
quantidade de pares. (0,5 pts)*/

int calculaPares(int vetA[7]) {
    int i;
    int pares =0;

    for (i = 0; i < 7; i++) {
        if (vetA[i] % 2 == 0) { // Verifica se é par
            pares++;
            }
        }
    return pares;
}

/*d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a tabuada da soma dos números (0,5pts)*/

void escrevaTabuada(int vet[7]) {
    int i, j; // declarar índices
    int resultMult=0;
    int soma=0;

    for (i = 0; i < 7; i++) {
        soma=soma+vet[i];
    }
        printf("\nA soma dos números do vetor é %d", soma);
        printf("\nA tabulbuada da soma é: \n");
        for (j = 1; j <= 10; j++) {
        resultMult=soma*j;    
        printf("\n%dx%d=%d", soma, j, resultMult);
        }
    printf("\n");

}

int main() {
        int vetA[7];
    int i;
    char c[7];
    
    //a) leitura dos valores
    printf("a)\n");
    for (i=0; i<7; i++) {
        printf("Escreva um valor para %c: ", 65+i);
        scanf("%d", &vetA[i]);
    }
    //a) escrita dos valores
    printf("\n");
    for (i=0; i<7; i++) {
        printf("%c: %d", 65+i, vetA[i]);
        printf("\n");
    }
    /*b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G
    e retorne a quantidade de números primos. (0,5 pts)*/
    printf("\nb) A quantidade de número primos é: %d\n", calculaPrimos(vetA));
    
    /*c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
    quantidade de pares. (0,5 pts)*/
    printf("\nc) A quantidade de números pares é: %d\n", calculaPares(vetA));
    
    /*d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
    tela a tabuada da soma dos números (0,5pts)*/
    //chama função conta impares coluna
    printf("\nd) ");
    escrevaTabuada(vetA);
    
    printf("\nProgramador: José Athaualpa Kolesny Tricot");
    
    return 0;
}
