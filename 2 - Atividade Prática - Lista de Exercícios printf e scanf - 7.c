/*7 - A Joalheria Silva está fazendo aniversário 
e resolveu premiar o primeiro cliente do dia devolvendo a ele o valor da compra em dobro.

Faça um programa que leia o preço unitário do produto adquirido pelo cliente,
a quantidade e calcule o total gasto pelo cliente. Mostre o total e calcule o prêmio.
Mostre o valor do prêmio (total da compra multiplicado por 2).*/

#include <stdio.h>

int main()

{
    int amount;
    float priceperunit, fullprice, fullreward;
    
    printf("\nDigite o valor unitário do produto (R$): ");
    scanf("%f",&priceperunit);
    printf("\nDigite a quantidade do protudo: ");
    scanf("%d",&amount);
    
    fullprice = priceperunit*amount;
    
    printf("\nO total gasto pelo cliente foi: R$%.2f", fullprice);
    
    fullreward = fullprice*2;

    printf("\nO valor do prêmio é: R$%.2f", fullreward);
}
