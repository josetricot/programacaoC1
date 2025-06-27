/* 5 - O cardápio de uma lancheria é o seguinte:
Código do lanche | Especificação   | Preço unitário
100              | Cachorro quente | 5.00
101              | Bauru simples   | 6.00
102              | Bauru c/ovo     | 8.00
103              | Hamburger       | 5.00
104              | Cheeseburger    | 7.50
105              | Refrigerante    | 2.00
Escrever um programa que leia o código do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche.

Considere que a cada execução somente será calculado um item.

Ao final escreva um resumo do pedido:
Ex
" Pedido: 5 unidade(s) de Cachorro Quente"
"Total R$25,00" */

#include <stdio.h>

int main() {
    int codigo, quantidade;
    float valorApagar;

    printf("Digite o código do lanche:\n");
    printf("100 - Cachorro quente (R$ 5.00)\n");
    printf("101 - Bauru simples (R$ 6.00)\n");
    printf("102 - Bauru c/ ovo (R$ 8.00)\n");
    printf("103 - Hamburger (R$ 5.00)\n");
    printf("104 - Cheeseburger (R$ 7.50)\n");
    printf("105 - Refrigerante (R$ 2.00)\n");
    printf("Digite o código: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch(codigo) {
        case 100:
            valorApagar = 5.00 * quantidade;
            printf("Pedido: %d unidade(s) de Cachorro Quente\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        case 101:
            valorApagar = 6.00 * quantidade;
            printf("Pedido: %d unidade(s) de Bauru Simples\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        case 102:
            valorApagar = 8.00 * quantidade;
            printf("Pedido: %d unidade(s) de Bauru c/ Ovo\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        case 103:
            valorApagar = 5.00 * quantidade;
            printf("Pedido: %d unidade(s) de Hamburger\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        case 104:
            valorApagar = 7.50 * quantidade;
            printf("Pedido: %d unidade(s) de Cheeseburger\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        case 105:
            valorApagar = 2.00 * quantidade;
            printf("Pedido: %d unidade(s) de Refrigerante\n", quantidade);
            printf("Total: R$ %.2f\n", valorApagar);
            break;

        default:
            printf("Código inválido!\n");
    }

    return 0;
