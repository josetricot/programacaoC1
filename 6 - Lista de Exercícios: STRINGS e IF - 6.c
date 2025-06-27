/* 6 – Escreva um programa que:
 - leia duas strings;
 - compare as duas: informe se as duas são iguais ou diferentes entre si;
 - indique a capacidade de cada variável string
 - informe o espaço usado pelo conteúdo em cada string.
 - Concatenar as duas strings. Antes de concatenar verifique se a string de destino 
 tem espaço suficiente para a concatenação, caso o espaço não seja suficiente, escreva uma mensagem de erro. */

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100], string2[100];
    int retorno;
    int tamanhoDaString1, tamanhoDaString2;
    int capacidadeDaVariavel1, capacidadeDaVariavel2;

    // Leitura das strings
    printf("\nDigite a String1: ");
    gets(string1);
    printf("\nDigite a String2: ");
    gets(string2);

    // Comparação das strings
    retorno = strcmp(string1, string2);

    if (retorno < 0) {
        printf("\nA String1 (%s) fica ANTES da String2 (%s)", string1, string2);
    } else if (retorno > 0) {
        printf("\nA String1 (%s) fica DEPOIS da String2 (%s)", string1, string2);
    } else {
        printf("\nA String1 (%s) e a String2 (%s) são IGUAIS", string1, string2);
    }

    printf("\nRetorno da comparação: %d", retorno);

    // Medindo tamanhos e capacidades
    tamanhoDaString1 = strlen(string1);
    tamanhoDaString2 = strlen(string2);
    capacidadeDaVariavel1 = sizeof(string1);
    capacidadeDaVariavel2 = sizeof(string2);

    printf("\nTamanho da String1: %d", tamanhoDaString1);
    printf("\nCapacidade da Variável1: %d", capacidadeDaVariavel1);
    printf("\nTamanho da String2: %d", tamanhoDaString2);
    printf("\nCapacidade da Variável2: %d", capacidadeDaVariavel2);

    // Verificação antes da concatenação
    if (tamanhoDaString1 + tamanhoDaString2 + 1 <= capacidadeDaVariavel1) { //poderia ser somente < q
        strcat(string1, string2); //com espaço, antes concatena com espaço +1
        printf("\nStrings concatenadas: %s", string1);
    } else {
        printf("\nErro! Capacidade da Variável1 não suporta concatenar a Variável2!");
    }

    return 0;
}
