/******************************************************************************

Simulado - Questão 1 
Programador: José Athaulpa Kolesny Tricot

 Questão  1: Faça um programa em linguagem C que execute as seguintes tarefas:
 a) Peça ao usuário números inteiros positivos, deve parar de pedir números
 quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
 uma estrutura de repetição (for, while ou do.. while);b) Para cada número inteiro
 positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
 ímpares e a tabuada dos valores pares;
 c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
 o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
 e oMaior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
 todos os itens

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero, contador, divisor, resultado;
    int somaImpares = 0, quantidadeImpares = 0;
    int maiorPar = 0;
    int mediaValoresImpares;

    do {
        printf("Digite um número inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; // encerra o laço antes de processar o 0
        }
        
        //verifica se o número é ímpar
        if (numero % 2 != 0) {
            contador = 1; //iniciar o contador para encontrar divisores
            while (contador <= numero) {
                if (numero % contador == 0) {
                    printf("Divisor é: %d\n", contador);//mostra divisores
                }
                contador = contador + 1; //incrementa contador
            }
            
            //acumula os valores impares e conta quantos foram digitados
            somaImpares = somaImpares + numero;
            quantidadeImpares = quantidadeImpares + 1;
            
            //se o número for par
        } else {
            contador = 1;
            while (contador <= 10) {
                resultado = numero * contador;
                printf("%d x %d = %d\n", numero, contador, resultado);//mostra a tabulada
                contador = contador + 1;
            }
            //atualiza maior número par
            if (numero > maiorPar) {
                maiorPar = numero;
            }
        }

    } while (numero != 0); //continua pedindo para digitar número até 0 ser digitado

    //verifica se ouve impares, importante para evitar divisaão por 0 que pode quebrar código
    if (quantidadeImpares > 0) {
        mediaValoresImpares = somaImpares / quantidadeImpares;
        printf("A média dos valores ímpares é: %d\n", mediaValoresImpares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }
    // resultado do maior número par
    if (maiorPar>0) {printf("O maior número par é: %d\n", maiorPar);}
    else {printf("Não foi digitado nenhum número par.\n");}

    printf("\nProgramador: José Athaulpa Kolesny Tricot.\n");

    return 0;
    
}