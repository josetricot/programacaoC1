/*Desafio 4: Calculadora Simples 
Descrição: O programa deve pedir dois números e um operador (+, -, *, /) e calcular o 
resultado. 
Dica: Use if para verificar qual operação foi escolhida. 
Exemplo de Entrada: 
Digite dois números: 10 5 
Digite a operação (+, -, *, /): * 
Saída Esperada: 
Resultado: 50*/

#include <stdio.h>

int main() {

    int num1, num2;
    char operacao;

    printf("Digite dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("Resultado: %d", num1 + num2);
    } else if (operacao == '-') {
        printf("Resultado: %d", num1 - num2);
    } else if (operacao == '*') {
        printf("Resultado: %d", num1 * num2);
    } else if (operacao == '/') {
        printf("Resultado: %d", num1 / num2);
    } else {
        printf("Operação inválida!");
    }

    return 0;
}
