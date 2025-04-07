/******************************************************************************

3.Múltiplos de 3 com WHILE
Escreva um programa que imprima os múltiplos de 3 entre 1 e 20, em ordem crescente, utilizando o laço while.
Dica: o primeiro múltiplo de 3 dentro do intervalo é o número 3.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int contador = 3;
	while(contador <= 20){
		printf("\nValor do Contador: %d", contador);
		 contador = contador + 3; // ou contador += 3;
	}
}