/******************************************************************************

6.Simulador de poupança
Um valor de R$100,00 é depositado todo mês em uma poupança que rende 0,5% ao mês.
Escreva um programa que calcule e mostre o valor acumulado mês a mês durante 24 meses (2 anos).
Use um laço de repetição. Não é necessário arredondar ou decompor o valor.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mes;
    float valor = 0.0;
    float deposito = 100.0;
    float rendimento_mensal = 0.005;
    float rendimento_do_mes; // variável intermediária para armazenar o rendimento de cada mês

    for (mes = 1; mes <= 24; mes++) {
        valor = valor + deposito;  // Faz o depósito
        rendimento_do_mes = valor * rendimento_mensal; // Calcula o rendimento sobre o total
        valor = valor + rendimento_do_mes; // Adiciona o rendimento ao valor total

        printf("Mês %2d: R$ %.2f\n", mes, valor);
    }

    return 0;
}
 /*
 Mês  1: R$ 100.50
Mês  2: R$ 201.50
Mês  3: R$ 303.01
Mês  4: R$ 405.03
Mês  5: R$ 507.55
Mês  6: R$ 610.59
Mês  7: R$ 714.14
Mês  8: R$ 818.21
Mês  9: R$ 922.80
Mês 10: R$ 1027.92
Mês 11: R$ 1133.56
Mês 12: R$ 1239.72
Mês 13: R$ 1346.42
Mês 14: R$ 1453.65
Mês 15: R$ 1561.42
Mês 16: R$ 1669.73
Mês 17: R$ 1778.58
Mês 18: R$ 1887.97
Mês 19: R$ 1997.91
Mês 20: R$ 2108.40
Mês 21: R$ 2219.44
Mês 22: R$ 2331.04
Mês 23: R$ 2443.20
Mês 24: R$ 2555.91


Teste na HP 12C:

g → BEG *considerando os pagamentos no início do mês (Begin mode)

24 → n

0.5 → i

100 → PMT

0 → PV (Opcional) 

FV = 2.555.9  f → 2 = 2.555.91
*/