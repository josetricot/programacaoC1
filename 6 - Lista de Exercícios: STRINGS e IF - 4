/* 4 - Faça um programa que leia as notas de 2 provas e um trabalho e o numero de faltas.
Calcule a média aritmética. E indique o conceito: 

A para (8.0 a 10),
B para (7.0 a 7.9),
C para (6.0 a 6.9),
D para (0.0 a 5.9)
E para reprovado por faltas. Maior ou igual a 5.
Escreva "Reprovado" ou "Aprovado".*/

#include <stdio.h>

int main() {
    float notaProva1, notaProva2, notaTrabalho1, media;
    int faltas;

    // Leitura das notas e faltas
    printf("\nDigite a nota da Primeira Prova: ");
    scanf("%f", &notaProva1);
    
    printf("\nDigite a nota da Segunda Prova: ");
    scanf("%f", &notaProva2);
    
    printf("\nDigite a nota do Trabalho: ");
    scanf("%f", &notaTrabalho1);
    
    printf("\nDigite o número de faltas: ");
    scanf("%d", &faltas);

    // Cálculo da média
    media = (notaProva1 + notaProva2 + notaTrabalho1) / 3;

    // Verificação do conceito
    if (faltas >= 5) {
        printf("\nConceito E (Reprovado por faltas)");
    } else if (media >= 8.0) {
        printf("\nConceito A (Aprovado)");
    } else if (media >= 7.0 && media < 8.0) {
        printf("\nConceito B (Aprovado)");
    } else if (media >= 6.0 && media < 7.0) {
        printf("\nConceito C (Aprovado)");
    } else {
        printf("\nConceito D (Reprovado)");
    }

    return 0;
}
