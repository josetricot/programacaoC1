/******************************************************************************

Simulado - Questão 2 (PROFESSOR)
Programador: José Athaulpa Kolesny Tricot

Cálculo de Investimento: O usuário deve informar:
i) o percentual de rendimento mensal de uma aplicação;
ii) o valor mensal de depósito;
iii) Meta a ser atingida (Valor objetivo).
Calcular em quantos meses a meta será atingida
Por exemplo, se o usuário informar que o rendimento mensal é 0,5%; o valor de
depósito mensal é de R$100,00; meta a ser atingida é 1000, (1 mil reais) teremos:
Mes 1 100
Mes 2 200,5 0,50 de juros + 100 de depósito
Mes 3 301,5025 1,0025 de juros + 100 de depósito
Mes 4 403,0100125 1,5075125 de juros + 100 de depósito
Mes 5 505,0250625625 2,0150500625 de juros + 100 de depósito
Mes 6 607,550187875312 2,5251253128125 de juros + 100 de depósito
Mes 7 710,587938814689 3,03775093937656 de juros + 100 de depósito
Mes 8 814,140878508762 3,55293969407344 de juros + 100 de depósito
Mes 9 918,211582901306 4,07070439254381 de juros + 100 de depósito
Mes 10 1022,80264081581 4,59105791450653 de juros + 100 de depósito
No exemplo acima, o programa deve apresentar até o mes 10, onde será alcançado valor de 1000 reais.
Não é necessário decompor o resultado.
a - Leitura correta dos dados
b - Uso correto de estrutura de Repetição
c - Apresentar o saldo a cada mês até que o saldo seja maior que a meta.


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
