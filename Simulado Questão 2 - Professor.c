/******************************************************************************

Simulado Questão 2 - Professor

*******************************************************************************/
#include <stdio.h>

int main(){
    float rendimento, deposito, meta, saldo=0;
    int mes=1;
    printf("Qual o rendimento mensal? (em %%): ");
    scanf("%f",&rendimento);
    printf("Qual o deposito mensal? (em R$): ");
    scanf("%f",&deposito);
    printf("Qual a meta? em (R$): ");
    scanf("%f",&meta);
    while(saldo<meta){
        saldo=saldo+saldo*rendimento/100+deposito;
        printf("Mês %d : R$%.2f\n",mes,saldo);
        mes++;
    }
    
}