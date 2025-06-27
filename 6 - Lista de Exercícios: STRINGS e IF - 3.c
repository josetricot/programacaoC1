/* 3 - Escreva um programa que leia o nome e a idade do usuário
e retorne uma mensagem indicando se o usuário é maior de idade ou não.
Vamos considerar 18 anos completos.
Ex: "FULANO é maior de idade" ou "FULANO é Menor de idade". */

#include <stdio.h>

int main() {
    char string1[100];
    int idade;

    printf("\nDigite seu nome: ");
    gets(string1);
    printf("\nDigite a sua idade: ");
    scanf("%d", &idade);

    if (idade > 18) {
        printf("\n%s é maior de idade", string1);
    } 
    
    else {
        printf("\n%s é menor de idade", string1);
    }

    return 0;
}
