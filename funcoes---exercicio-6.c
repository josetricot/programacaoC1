/******************************************************************************

6 - Escreva programa que Leia turno e língua.
Esse programa deve ter uma função receba como parâmetros: Língua e Turno e imprima na tela a saudação correta.
os parâmetros para língua são: 1 português, 2 inglês, 3 espanhol, 4 italiano, 5 alemão. (pesquisar as saudações no google :)
Para o turno o parâmetro é dado pelos caracteres 'm', 't' e 'n'.
O programa deve repetir o processo até que a língua informada seja '0' (zero); 

Exemplo incompleto:

Língua | Turno | Resposta

Português (1) | manhã (m) | BOM DIA

Português (1) | tarde (t) | BOA TARDE

Português (1) | noite (n) | BOA NOITE

Inglês (2) | manhã (m) | GOOD MORNING

Inglês (2) | tarde (t) | GOOD AFTERNOON

Inglês (2) | noite (n) | GOOD EVENING

 sugestão: escreva uma função para cada língua, que receba como parâmetro o turno: ex:

void ingles(char turno){
    switch(turno){     
        .....
    }
}

*******************************************************************************/
#include <stdio.h>

void saudacao(int lingua, char turno);

int main() {
    int lingua;
    char turno;
    
    do {
        printf("\nDigite o turno (m/t/n): ");
        scanf(" %c", &turno);
        printf("Digite a Lingua (1:Pt/2:En/3:Es/4:It/5:Al /0:Sair): ");
        scanf("%d", &lingua);
        
        if(lingua != 0) {
            saudacao(lingua, turno);
        }
    } while(lingua != 0);
    
    return 0;
}

void saudacao(int lingua, char turno) {
    if(lingua == 1) { // Português
        switch(turno) {
            case 'm': printf("BOM DIA!\n"); break;
            case 't': printf("BOA TARDE!\n"); break;
            case 'n': printf("BOA NOITE!\n"); break;
            default: printf("Turno invalido!\n");
        }
    } 
    else if(lingua == 2) { // Inglês
        switch(turno) {
            case 'm': printf("GOOD MORNING!\n"); break;
            case 't': printf("GOOD AFTERNOON!\n"); break;
            case 'n': printf("GOOD EVENING!\n"); break;
            default: printf("Invalid shift!\n");
        }
    }
    else if(lingua == 3) { // Espanhol
        switch(turno) {
            case 'm': printf("BUENOS DÍAS!\n"); break;
            case 't': printf("BUENAS TARDES!\n"); break;
            case 'n': printf("BUENAS NOCHES!\n"); break;
            default: printf("Turno inválido!\n");
        }
    }
    else if(lingua == 4) { // Italiano
        switch(turno) {
            case 'm': printf("BUONGIORNO!\n"); break;
            case 't': printf("BUON POMERIGGIO!\n"); break;
            case 'n': printf("BUONASERA!\n"); break;
            default: printf("Turno invalido!\n");
        }
    }
    else if(lingua == 5) { // Alemão
        switch(turno) {
            case 'm': printf("GUTEN MORGEN!\n"); break;
            case 't': printf("GUTEN TAG!\n"); break;
            case 'n': printf("GUTEN ABEND!\n"); break;
            default: printf("Ungültige Schicht!\n");
        }
    }
    else {
        printf("Lingua invalida!\n");
    }
}