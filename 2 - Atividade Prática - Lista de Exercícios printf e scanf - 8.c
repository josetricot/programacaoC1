/*8. Equidade: Léia e Luke são irmãos e dividem um apartamento alugado. 
O salário de Luke é R$2.000,00 o salário de Léia é de R$4.000,00. 
O valor do aluguel é de R$1.000,00. 
Para que a divisão do valor tenha equidade, Luke deve pagar 1/3 e Léia deve pagar 2/3. 
Para calcular essa proporção, basta dividir o salário de cada um pela soma dos salários.

Proporção Luke será de 2000/6000 = 1/3
Proporção Léia será de 4000/6000 = 2/3

Valor a pagar no aluguel: Luke R$333,33 Léia=R$666,67

Escreva um programa que, leia o salário de 2 pessoas e o valor da conta a ser dividida.
Apresente quanto cada um deve pagar em uma divisão com equidade.*/

#include <stdio.h>

int main()

{
    float salario1, salario2, totalsalarios, totaldaconta, pagamento1, pagamento2;
    
    printf("\nDigite o salário da primeira pessoa (RS): ");
    scanf("%f",&salario1);
    
    printf("\nDigite salário da segunda pessoa (R$): ");
    scanf("%f",&salario2);
    
    printf("\nDigite o valor da conta a ser dividida (R$): ");
    scanf("%f",&totaldaconta);
    
    totalsalarios = salario1 + salario2;
    
    pagamento1 = (salario1 / totalsalarios) * totaldaconta;
    pagamento2 = (salario2 / totalsalarios) * totaldaconta;
    
    printf("\nA primeira pessoa deve pagar: R$%.2f", pagamento1);
    printf("\nA segunda pessoa deve pagar: R$%.2f", pagamento2);
}
