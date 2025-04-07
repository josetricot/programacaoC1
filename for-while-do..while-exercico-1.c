/******************************************************************************

Pares com FOR
1.Escreva um programa que imprima os números pares de 1 a 20, em ordem crescente, utilizando o comando for.

*******************************************************************************/
#include <stdio.h>

int main()
{

	int contador;
	
		for(contador = 1; contador <= 20; contador++){
		    if(contador%2==0){
			printf("\nValor do Contador: %d", contador);
		}
	}
}
