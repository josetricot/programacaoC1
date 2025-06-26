#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int num_func;
	float salario, inpc, indice_prod, aumento, salario_novo;
	printf("Digite o numero do Funcionario: ");
	scanf("%d",&num_func);
	printf("Digite o salario atual: ");
	scanf("%f",&salario);
	printf("Digite o INPC (em %%): ");
	scanf("%f",&inpc);
	printf("Digite o Indice de Produtividade (em %%): ");
	scanf("%f",&indice_prod);
	aumento=(salario*0.75*inpc/100)+salario*indice_prod/100;
	salario_novo=salario+aumento;
	printf("Numero do Funcionario: %d\n",num_func);
	printf("Aumento: %.2f\nSalario Novo: R$%.2f",aumento,salario_novo);
}
