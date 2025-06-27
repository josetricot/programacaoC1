/*Desafio 5: Classificação de Notas 
Descrição: O programa deve receber a nota de um aluno (0 a 10) e classificar seu 
desempenho. 
Dica: Use if para definir faixas de notas (exemplo: Aprovado, Reprovado). 
Exemplo de Entrada: 
Digite a nota: 7.5 
Saída Esperada: 
Aprovado */

#include <stdio.h>

int main() {
    
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (nota >= 7.0) {
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }

    return 0;
}
