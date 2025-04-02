/*Desafio 7: Pedra, Papel e Tesoura 
Descrição: O programa deve permitir que dois jogadores escolham entre "pedra", 
"papel" ou "tesoura" e determinar o vencedor. 
Dica: Compare as escolhas dos jogadores e determine o resultado com if. 
Exemplo de Entrada: 
Jogador 1: pedra 
Jogador 2: tesoura 
Saída Esperada: 
Jogador 1 venceu!*/

#include <stdio.h>

int main() {

    char escolha1[8], escolha2[8];

    printf("Jogador 1 - Escreva uma opção (pedra, papel ou tesoura): ");
    scanf(" %s", &escolha1);

    printf("Jogador 2 - Escreva uma opção (pedra, papel ou tesoura): ");
    scanf(" %s", &escolha2);

    if (escolha1 == escolha2) {
        printf("Empate!");}     
    else if ((escolha1 == "pedra" && escolha2 == "tesoura") || (escolha1 == "tesoura" && escolha2 == "papel") || (escolha1 == "papel" && escolha2 == "pedra")) {
        printf("Jogador 1 venceu!");}    
    else {
        printf("Jogador 2 venceu!");
    }        

    return 0;}
    
/*O erro no seu código ocorre porque você está comparando strings usando o operador ==, o que não funciona em C. Em C, strings são arrays de caracteres, e o operador == compara os endereços de memória das strings, não seu conteúdo.

Correção Necessária:
Para comparar strings em C, você deve usar a função strcmp() da biblioteca <string.h>. Ela retorna:

0 se as strings são iguais.

Valor negativo se a primeira string for "menor" (ordem lexicográfica).

Valor positivo se a primeira string for "maior".*/

#include <stdio.h>
#include <string.h> // Necessário para strcmp()

int main() {
    char escolha1[8], escolha2[8]; // "tesoura" precisa de 8 caracteres (7 + '\0')

    printf("Jogador 1 - Escreva uma opção (pedra, papel ou tesoura): ");
    scanf("%7s", escolha1); // %7s evita overflow (limita a 7 caracteres + '\0')

    printf("Jogador 2 - Escreva uma opção (pedra, papel ou tesoura): ");
    scanf("%7s", escolha2);

    if (strcmp(escolha1, escolha2) == 0) {
        printf("Empate!\n");
    }
    else if ((strcmp(escolha1, "pedra") == 0 && strcmp(escolha2, "tesoura") == 0) ||
             (strcmp(escolha1, "tesoura") == 0 && strcmp(escolha2, "papel") == 0) ||
             (strcmp(escolha1, "papel") == 0 && strcmp(escolha2, "pedra") == 0)) {
        printf("Jogador 1 venceu!\n");
    }
    else {
        printf("Jogador 2 venceu!\n");
    }

    return 0;
}
