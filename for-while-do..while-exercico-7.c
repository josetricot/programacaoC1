/******************************************************************************

7.Sistema de lancheria
Uma lancheria possui o seguinte cardápio:
Código   Produto             Preço
100      Cachorro Quente     11,00
101      Bauru Simples       13,00
102      Bauru com Ovo       15,00
103      Hamburger           11,00
104      Cheeseburger        13,00
105      Refrigerante         3,00
    
Escreva um programa que:
Leia repetidamente o código do item e a quantidade desejada;
Calcule o valor parcial do item e acumule o total a pagar;
Encerre a leitura quando for digitado um código fora do intervalo entre 100 e 105;
Ao final, mostre o valor total do pedido.

*******************************************************************************/
#include <stdio.h>

int main() {
    int opcao, quantidade;
    float preco = 0, totalPagar = 0;

    printf("\nCardápio:");
    printf("\nCódigo | Especificação     | Preço Unitário");
    printf("\n 100   | Cachorro-Quente   | R$11,00");
    printf("\n 101   | Bauru Simples     | R$13,00");
    printf("\n 102   | Bauru com Ovo     | R$15,00");
    printf("\n 103   | Hambúrguer        | R$11,00");
    printf("\n 104   | Cheeseburger      | R$13,00");
    printf("\n 105   | Refrigerante      | R$3,00");

    do {
        printf("\n\nDigite o código do produto (ou outro valor para sair): ");
        scanf("%d", &opcao);

        if (opcao >= 100 && opcao <= 105) {
            printf("Digite a quantidade desejada: ");
            scanf("%d", &quantidade);

            switch (opcao) {
                case 100:
                    preco = 11.0;
                    printf("Você escolheu %dx Cachorro-Quente\n", quantidade);
                    break;
                case 101:
                    preco = 13.0;
                    printf("Você escolheu %dx Bauru Simples\n", quantidade);
                    break;
                case 102:
                    preco = 15.0;
                    printf("Você escolheu %dx Bauru com Ovo\n", quantidade);
                    break;
                case 103:
                    preco = 11.0;
                    printf("Você escolheu %dx Hambúrguer\n", quantidade);
                    break;
                case 104:
                    preco = 13.0;
                    printf("Você escolheu %dx Cheeseburger\n", quantidade);
                    break;
                case 105:
                    preco = 3.0;
                    printf("Você escolheu %dx Refrigerante\n", quantidade);
                    break;
            }

            totalPagar = totalPagar + (quantidade * preco);
        }

    } while (opcao >= 100 && opcao <= 105);

    printf("\nO total a pagar é: R$%.2f\n", totalPagar);
    return 0;
}