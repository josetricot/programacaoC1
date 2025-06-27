/******************************************************************************
DESAFIO 11 - CONVERSÃO DE MOEDA

Descrição: O programa deve converter um valor em reais (BRL) para dólares (USD), 
considerando uma taxa fixa de câmbio. 
Dica: Multiplique o valor em BRL pela cotação informada. 
Exemplo de Entrada: 
Digite o valor em BRL: 100 
Digite a cotação do dólar: 5.10 
Saída Esperada: 
100 BRL equivalem a 19.61 USD
*******************************************************************************/
#include <stdio.h>

int main() {
    
    float valorReais, valorDolar, cotacaoDolar;
   
    printf("Digite um valor em Reais: ");
    scanf("%f", &valorReais);
    printf("Digite a cotação do Dólar: ");
    scanf("%f", &cotacaoDolar);
    valorDolar=valorReais/cotacaoDolar;
    printf("%.2f BRL equivalem a %.2f USD", valorReais, valorDolar);
    
    return 0;
}
