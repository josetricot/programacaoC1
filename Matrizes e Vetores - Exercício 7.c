/******************************************************************************
Matrizes e Vetores - Exercícior
7 - Faça um programa que carregue uma matriz 3x3 de nC:meros inteiros. Calcule:

a - o maior nC:mero
b - o menor nC:mero
c - a média dos nC:meros
d - a soma da primeira linha
e - o produto (multiplicacção) da diagonal principal

*******************************************************************************/
#include <stdio.h>

int main() {
	int matriz[3][3];
	int i,j;
	int maior, menor, soma=0, somaPri=0, prodDiagPrinc=1;
	float media;

	//lê 9 entradas
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			printf("Digite um nC:mero para posição [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
			// Inicializa maior e menor com o primeiro elemento
			if (i == 0 && j == 0) {
				maior = matriz[i][j];
				menor = matriz[i][j];
			}
			else {
				if (matriz[i][j] > maior) {
					maior = matriz[i][j];
				}
				if (matriz[i][j] < menor) {
					menor = matriz[i][j];
				}
			}
			soma=soma+matriz[i][j];
		}
	}

	media=soma/9.0f;

    for(j = 0; j < 3; j++) {
        somaPri=somaPri+matriz[0][j];  // Somar apenas linha 0 (primeira linha)
    }
    
    for(i = 0; i < 3; i++) {
    prodDiagPrinc=prodDiagPrinc*matriz[i][i];  // Elementos onde i == j
    }
    
	printf("O a soma da primeira linha é : %d\n",somaPri);
	printf("O produto da diagonal principal é %d\n",prodDiagPrinc);
	printf("Média de todos os elementos: %f\n", media);
	printf("Maior elemento: %d\n",maior);
	printf("Menor elemento: %d\n",menor);

	return 0;
}