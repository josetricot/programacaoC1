/******************************************************************************

5.Contagem com decremento
Escreva um programa que imprima os números de 1 a 10 na tela, em ordem crescente, utilizando um comando for com decremento (ou seja, for(i = 10; i > 0; i--)).
Dica: use a imaginação para inverter a lógica do laço e fazer a contagem correta.

*******************************************************************************/
#include <stdio.h>

int main()
{
		int contador;
		for(contador = 10; contador >= 1; contador--){
			printf("\nValor do Contador: %d", contador);
		}
}
