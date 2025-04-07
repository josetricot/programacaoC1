/******************************************************************************

2.Ímpares com FOR em ordem decrescente
Escreva um programa que imprima os números ímpares entre 1 e 20, em ordem decrescente, utilizando o comando for.

*******************************************************************************/
#include <stdio.h>

int main()
{

	int contador;
	
		for(contador = 20; contador > 1; contador--){
		    if(contador%2==1){
			printf("\nValor do Contador: %d", contador);
		}
	}
}
