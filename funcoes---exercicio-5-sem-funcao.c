/******************************************************************************

5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 11,00
101              | Bauru simples   | 13,00
102              | Bauru c/ovo     | 15,00
103              | Hamburger       | 11,00
104              | Cheeseburger    | 13,00
105              | Refrigerante    | 3,00

O programa deverá apresentar as seguintes opções:
A - Novo pedido (Zerar Valor total do pedido)
B - Incluir Item e quantidade
C - Fechar pedido e Imprimir total (Apenas valor, somar total ao total do dia)
D - Total do Dia (apenas valor)
E - SAIR do programa
O Programa deverá ter uma função que receba como parâmetros o código do item e a quantidade,
esta função deverá retornar o valor daquela quantidade de items.

*******************************************************************************/
#include <stdio.h>

int main() {
    char escolha;
    int opcao, quantidade;
    float totalPedido = 0, totalDia = 0, preco;
    
    do {
        printf("\n========================================");
        printf("\nCódigo do lanche | Especificação   | Preço unitário");
        printf("\n100              | Cachorro quente | 11,00");
        printf("\n101              | Bauru simples   | 13,00");
        printf("\n102              | Bauru c/ovo     | 15,00");
        printf("\n103              | Hamburger       | 11,00");
        printf("\n104              | Cheeseburger    | 13,00");
        printf("\n105              | Refrigerante    | 3,00");
        printf("\n========================================");
        printf("\nA - Novo pedido (Zerar pedido atual)");
        printf("\nB - Incluir Item e quantidade");
        printf("\nC - Fechar pedido e Imprimir total");
        printf("\nD - Total do Dia");
        printf("\nE - SAIR do programa");
        printf("\n========================================");
        printf("\nEscolha uma opção: ");
        scanf(" %c", &escolha);
        
        switch (escolha) {
            case 'A':
            case 'a':
                totalPedido = 0;
                printf("\nPedido reiniciado!");
                break;
                
            case 'B':
            case 'b':
                printf("\nDigite o código do item: ");
                scanf("%d", &opcao);
                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                
                switch (opcao) {
                    case 100:
                        preco = 11.00;
                        printf("\n%d Cachorro(s)-Quente adicionado(s)", quantidade);
                        break;
                    case 101:
                        preco = 13.00;
                        printf("\n%d Bauru(s) Simples adicionado(s)", quantidade);
                        break;
                    case 102:
                        preco = 15.00;
                        printf("\n%d Bauru(s) c/ovo adicionado(s)", quantidade);
                        break;
                    case 103:
                        preco = 11.00;
                        printf("\n%d Hamburger(s) adicionado(s)", quantidade);
                        break;
                    case 104:
                        preco = 13.00;
                        printf("\n%d Cheeseburger(s) adicionado(s)", quantidade);
                        break;
                    case 105:
                        preco = 3.00;
                        printf("\n%d Refrigerante(s) adicionado(s)", quantidade);
                        break;
                    default:
                        printf("\nCódigo inválido!");
                        preco = 0;
                }
                
                totalPedido += quantidade * preco;
                break;
                
            case 'C':
            case 'c':
                printf("\nTotal do pedido: R$ %.2f", totalPedido);
                totalDia += totalPedido;
                totalPedido = 0;
                break;
                
            case 'D':
            case 'd':
                printf("\nTotal do dia: R$ %.2f", totalDia);
                break;
                
            case 'E':
            case 'e':
                printf("\nEncerrando o programa...");
                break;
                
            default:
                printf("\nOpção inválida!");
        }
    } while (escolha != 'E' && escolha != 'e');
}