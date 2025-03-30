/******************************************************************************
3 - O cardápio de uma lancheria é o seguinte:

Código	Especificação	Preço Unitário
100	Cachorro Quente	R$10,00
101	Bauru Simples	R$13,00
102	Bauru c/ ovo	R$16,00
103	Hambuguer	R$14,00
104	Cheeseburguer	R$16,00
105	Refrigerante	R$4,00
Escrever um programa que leia o código do item pedido, 
a quantidade e calcule o valor a ser pago por aquele pedido. 
Considere que a cada execução somente será calculado um item.
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int opcao, quantidade;
    float totalPagar, preco;
    
    printf("\n Cardápio  : ");
    printf("\n Código |  Especificação   | Preço Unitário  : ");
    printf("\n  100   |  Cachorro-Quente |	R$10,00");
    printf("\n  101   |  Bauru Simples   |	R$13,00");
    printf("\n  102   |  Bauru c/ ovo    |	R$16,00");
    printf("\n  103   |  Hambuguer       |	R$14,00");
    printf("\n  104   |  Refrigerante    |	R$4,00");
    
    printf("\n Escola a opção desejada: ");
    scanf("%d",&opcao);
    printf("\n Digite a quantidade desejada: ");
    scanf("%d",&quantidade);
    
    switch (opcao) {
        case 100:
        preco=10;
        totalPagar = quantidade*preco;
        printf ("\n Você escolheu %dx Cachorro-Quente e o total a pagar é R$: %.2f", quantidade,totalPagar);
        break;
        
        case 101:
        preco=13;
        totalPagar = quantidade*preco;
        printf ("\n Você escolheu %dx Baurú Simples e o total a pagar é R$: %.2f", quantidade,totalPagar);
        break;
        
        case 102:
        preco=16;
        totalPagar = quantidade*preco;
        printf ("\n Você escolheu %dx Baurú c/ ovo e o total a pagar é R$: %.2f", quantidade,totalPagar);
        break;
        
        case 103:
        preco=14;
        totalPagar = quantidade*preco;
        printf ("\n Você escolheu %dx Hambuguer e o total a pagar é R$: %.2f", quantidade,totalPagar);
        break;
        
        case 104:
        preco=4;
        totalPagar = quantidade*preco;
        printf ("\n Você escolheu %dx Refrigerante e o total a pagar é R$: %.2f", quantidade,totalPagar);
        break;
        
        default:
        printf ("\n Opção inválida!");
    }
    
}
