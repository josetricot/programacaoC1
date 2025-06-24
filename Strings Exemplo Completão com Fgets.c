/******************************************************************************
Strings Exemplo Completão com Fgets
*******************************************************************************/
#include <stdio.h>   // Biblioteca para entrada e saída (printf, fgets, etc.)
#include <string.h>  // Biblioteca para manipulação de strings (strlen, strcmp, strcat, etc.)

int main() {
    char string1[100];  // Vetor para armazenar a primeira string (capacidade de 100 caracteres)
    char string2[100];  // Vetor para armazenar a segunda string (capacidade de 100 caracteres)

    int tamanhoString1, tamanhoString2;          // Armazena o tamanho do conteúdo das strings
    int capacidadeString1, capacidadeString2;    // Armazena a capacidade dos vetores (em bytes)
    int retornoComparacao;                       // Armazena o resultado da comparação das strings

    // 🔸 Entrada de dados usando fgets (mais seguro que gets)
    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    // Remove o '\n' do final, se existir
    string1[strcspn(string1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    // Remove o '\n' do final, se existir
    string2[strcspn(string2, "\n")] = '\0';

    // 🔸 Cálculo dos tamanhos das strings e das capacidades dos vetores
    tamanhoString1 = strlen(string1);              // Conta quantos caracteres a string1 possui
    tamanhoString2 = strlen(string2);              // Conta quantos caracteres a string2 possui

    capacidadeString1 = sizeof(string1);           // Verifica quantos bytes o vetor string1 ocupa na memória
    capacidadeString2 = sizeof(string2);           // Verifica quantos bytes o vetor string2 ocupa na memória

    // 🔸 Exibir tamanhos e capacidades
    printf("\n📏 Tamanho da String1: %d caracteres", tamanhoString1);
    printf("\n📦 Capacidade da String1: %d bytes", capacidadeString1);

    printf("\n📏 Tamanho da String2: %d caracteres", tamanhoString2);
    printf("\n📦 Capacidade da String2: %d bytes\n", capacidadeString2);

    // 🔸 Comparação das strings (strcmp)
    retornoComparacao = strcmp(string1, string2);

    if (retornoComparacao == 0) {
        printf("\n✅ As strings são IGUAIS.");
    } else {
        printf("\n❌ As strings são DIFERENTES.");
        if (retornoComparacao < 0) {
            printf("\nA string1 (%s) vem ANTES da string2 (%s) na ordem alfabética.", string1, string2);
        } else {
            printf("\nA string1 (%s) vem DEPOIS da string2 (%s) na ordem alfabética.", string1, string2);
        }
    }

    // 🔸 Verificar se cabe concatenar string2 dentro de string1
    // Fórmula: tamanhoString1 + tamanhoString2 + 1 (para o \0 no final) <= capacidadeString1
    if (tamanhoString1 + tamanhoString2 + 1 <= capacidadeString1) {
        strcat(string1, string2);  // Faz a concatenação de string2 no final de string1
        printf("\n\n🔗 Strings concatenadas: %s", string1);
    } else {
        printf("\n\n⚠️ ERRO: Não há espaço suficiente em string1 para concatenar string2.");
    }

    return 0;   // Fim do programa
}