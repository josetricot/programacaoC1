#include <stdio.h>

int main(){
    float sal1, sal2, conta, prop1, prop2, valor1, valor2;
    printf("Digite o valor do Salario 1: ");
    scanf("%f",&sal1);
    printf("Digite o valor do Salario 2: ");
    scanf("%f",&sal2);
    printf("Digite o valor da Conta: ");
    scanf("%f",&conta);
    prop1=sal1/(sal1+sal2);
    prop2=sal2/(sal1+sal2);
    valor1=conta*prop1;
    valor2=conta*prop2;
    printf("O valor a ser pago por 1: R$%.2f\n",valor1);
    printf("O valor a ser pago por 2: R$%.2f",valor2);
}
