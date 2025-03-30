/*9 - Considerando que o aumento dos funcionários é de 75% do INPC
e mais um percentual de produtividade discutido com a empresa.

Construir um programa que lê
o número do funcionário,
seu salário atual,
o valor do INPC e
o índice de produtividade e

escreve o número do funcionário,
seu aumento e
o valor de seu novo salário.

Aumento=Salario*0.75*INPC/100  +Salario*IndiceProdutividade/100

Salario Novo = Salario + Aumento*/

#include <stdio.h>

int main()

{
    int numerodofuncionario;
    float salarioatual, valordoinpc, indicedeprodutividade, aumentodesalario, novosalario; 
    
    printf("\nDigite o número do funcionário: ");
    scanf("%d",&numerodofuncionario);
    
    printf("\nDigite o salário atual do funciário em R$: ");
    scanf("%f",&salarioatual);
    
    printf("\nDigite o valor do INPC (em %%): ");
    scanf("%f",&valordoinpc);
    
    printf("\nDigite o índice de produtividade (em %%): ");
    scanf("%f",&indicedeprodutividade);
    
    aumentodesalario = (salarioatual*0.75*valordoinpc/100) + (salarioatual*indicedeprodutividade/100);
    
    novosalario = salarioatual+aumentodesalario;
    
    printf("\nO número do funcionário é: %d", numerodofuncionario);
    printf("\nO aumento de salário é: R$%.2f", aumentodesalario);
    printf("\nO valor do novo salário é: R$%.2f", novosalario);
    
}
