#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int codigo;
	printf("Digite o codigo do produto: ");
	scanf("%d",&codigo);
	
	switch (codigo){
		case 1: printf("Origem: Regiao Sul."); break;
		case 2: printf("Origem: Regiao Norte."); break;		
		case 3: printf("Origem: Regiao Leste."); break;		
		case 4: printf("Origem: Regiao Oeste."); break;		
		
		case 5:	
		case 6:
			printf("Origem: Regiao Nordeste."); break;		
		
		case 7:	case 8:	case 9:
			printf("Origem: Regiao Sudeste."); break;		

		case 10: case 11: case 12:
			printf("Origem: Regi�o Centro-Oeste."); break;

		case 21: case 22:
			printf("Origem: Regi�o Noroeste."); break;
		default:
			printf("Erro!");
	}
	return 0;
}
