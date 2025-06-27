/*
Valores de entrada: Código do item (int); Quantidade;(int)
Valor de saída: total do pedido (float);
processamento: pegar o código e descobrir o preço unitário
multiplicar o preço unitário pela quantidade; 

Caso de teste: 
código 100 /  quantidade 5 / resposta: 25; 

código 104 / quantidade 10 / resposta 75
*/
#include <stdio.h>

int main(){
    int codigoItem, qtde;                   
    float total,valorUnid; 
    
    printf("Digite o codigo do item: ");    
    scanf("%d",&codigoItem);
    printf("Digite a quantidade: ");        
    scanf("%d",&qtde);
    
    if(codigoItem==100){
        printf("Pedido: %d unidade(s) de Cachorro quente.\n",qtde); 
        valorUnid=5;
    }
    if(codigoItem==101){
        printf("Pedido: %d unidade(s) de Bauru Simples.\n",qtde);   
        valorUnid=6;
    }
    if(codigoItem==102){
        printf("Pedido: %d unidade(s) de Bauru com Ovo.\n",qtde);   
        valorUnid=8;
    }
    if(codigoItem==103){
        printf("Pedido: %d unidade(s) de Hamburger.\n",qtde);       
        valorUnid=5;
    }
    if(codigoItem==104){
        printf("Pedido: %d unidade(s) de Cheese Burguer.\n",qtde);  
        valorUnid=7.5;
    }
    if(codigoItem==105){
        printf("Pedido: %d unidade(s) de Refrigerante.\n",qtde);    
        valorUnid=2;
    }
    total = valorUnid * qtde;
    printf("Total: R$%.2f",total);
}
