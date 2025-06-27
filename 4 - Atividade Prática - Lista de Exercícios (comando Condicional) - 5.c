/*Exercício 5. Escreva um algoritmo que leia 3 números inteiros e mostre o maior deles.*/

#include <stdio.h>

int main() {
    int first_number, second_number, third_number;
    
    printf("\nDigite o primeiro número inteiro: ");
    scanf("%d", &first_number);
    
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &second_number);
    
    printf("\nDigite o terceiro número inteiro: ");
    scanf("%d", &third_number);
    
    if (first_number > second_number && first_number > third_number) {
        printf("\nO primeiro número informado é o maior.");
        
    } else if (second_number > first_number && second_number > third_number) {
        printf("\nO segundo número informado é o maior.");
        
    } else {
        printf("\nO terceiro número informado é o maior.");
    }
    
    return 0;
}
