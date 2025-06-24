/******************************************************************************

Exemplo função strlen
com scanf lê somente até primeiro espaço

*******************************************************************************/
#include <stdio.h>

// Implementação da função strlen feita por você
int strlen( char str[] ) {
    int comprimento = 0;

    while ( str[comprimento] != '\0' )
        ++comprimento;

    return comprimento;
}

int main() {
    char nome[100];
    int comprimento;

    printf("Entre seu nome: ");
    scanf("%s", nome);  // Lê até o primeiro espaço

    comprimento = strlen(nome);  // Chamada da sua função
    printf("Seu nome tem %d caracteres.\n", comprimento);

    return 0;
}