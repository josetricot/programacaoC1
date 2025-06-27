/*Desafio 2: Par ou Ímpar 
Descrição: O programa deve solicitar um número inteiro e imprimir se ele é par ou 
ímpar. 
Dica: Use o operador % (módulo) para verificar se o número é divisível por 2. 
Exemplo de Entrada: 
Digite um número: 7 
Saída Esperada: 
O número é ímpar */

#include <stdio.h>

int main() {

    int num;

    printf("Digite um número (inteiro): \n");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número é par");
    } else {
        printf("O número é ímpar");
    }

    return 0;
}
