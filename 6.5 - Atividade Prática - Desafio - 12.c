/******************************************************************************
DESAFIO 12 - CÁLCULO DO DESCONTO

Descrição: O programa deve calcular o preço final de um produto após um desconto 
percentual informado pelo usuário. 
Dica: Multiplique o valor pelo percentual de desconto e subtraia do valor original. 
Exemplo de Entrada: 
Digite o preço original: 200 
Digite o percentual de desconto: 10 
Saída Esperada: 
O preço com desconto é 180.00
*******************************************************************************/
#include <stdio.h>

int main() {
    
    float precoOriginal, percentualDesconto;
    float precoFinal=0.00;
    
    printf("Digite o preço original: ");
    scanf("%f", &precoOriginal);
    printf("Digite o percentual de desconto: ");
    scanf("%f", &percentualDesconto);
    
    precoFinal=precoOriginal-(precoOriginal*percentualDesconto/100);
    
    printf("O preço com desconto é R$ %.2f", precoFinal);

    return 0;
}
