/* 2 - escreva um programa que cria uma string, peça para o usuário digitar uma palavra.
se a palavra digitada for "senha secreta", escreva a mensagem: "senha correta",
senão escreva "senha incorreta". 
usar strcmp para comparar. combinar com sentença if/else  */

#include <stdio.h>
#include <string.h>

int main() {
    char string1[100];

    printf("\nDigite uma palavra: ");
    gets(string1);
    
    if (strcmp(string1, "senha secreta")==0) {
        printf("\nsenha correta");
    }
    
    else {
        printf("\nsenha incorreta");
    }

    return 0;
}
