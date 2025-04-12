/******************************************************************************

6.Simulador de poupança
Um valor de R$100,00 é depositado todo mês em uma poupança que rende 0,5% ao mês.
Escreva um programa que calcule e mostre o valor acumulado mês a mês durante 24 meses (2 anos).
Use um laço de repetição. Não é necessário arredondar ou decompor o valor.

Quando os depósitos são feitos no final do mês, isso significa que o rendimento só é aplicado sobre o valor que já estava na conta antes do novo depósito. Ou seja:

Primeiro, aplica-se o rendimento sobre o saldo existente;

Só depois é feito o depósito do mês.

Diferença de lógica:

Depósito no final do mês:
Rende → Deposita

Depósito no início do mês:
Deposita → Rende

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mes;
    float valor = 0.0;
    float deposito = 100.0;
    float rendimento_mensal = 0.005;
    float rendimento_do_mes;

    for (mes = 1; mes <= 24; mes++) {
        rendimento_do_mes = valor * rendimento_mensal; // Rendimento antes do depósito
        valor = valor + rendimento_do_mes;             // Atualiza valor com o rendimento
        valor = valor + deposito;                      // Faz o depósito no final do mês

        printf("Mês %2d: R$ %.2f\n", mes, valor);
    }

    return 0;
}

/******************************************************************************
//depóstio início do mês
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

*******************************************************************************/
