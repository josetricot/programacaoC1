/******************************************************************************
4 - Leia o salário atual do funcionário e código da função. De acordo com a tabela abaixo, indique o novo salário.

Código	Cargo	Aumento
1	Escriturário	30%
2	Secretário	25%
3	Caixa	20%
4	Gerente	10%
5	Diretor	0
Indique uma mensagem de erro se o código não existir.
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char opcao;
    float salarioAtual, novoSalario, aumento;
    
    printf("\n Código |      Cargo     | Aumento");
    printf("\n    1   |  Escriturário  |   30%%");
    printf("\n    2   |  Secretário    |   25%%");
    printf("\n    3   |  Caixa         |   20%%");
    printf("\n    4   |  Gerente       |   10%%");
    printf("\n    5   |  Diretor       |	0");
    
    printf("\n Digite o salário atual do funcionário R$: ");
    scanf("%f",&salarioAtual); getchar();
    printf("\n Digite o código da função: ");
    opcao = getchar ();
    
    
    switch (opcao) {
        case '1':
        aumento=1.3;
        novoSalario = salarioAtual*aumento;
        printf ("\n O novo salário é R$: %.2f", novoSalario);
        break;
        
        case '2':
        aumento=1.25;
        novoSalario = salarioAtual*aumento;
        printf ("\n O novo salário é R$: %.2f", novoSalario);
        break;
        
        case '3':
        aumento=1.2;
        novoSalario = salarioAtual*aumento;
        printf ("\n O novo salário é R$: %.2f", novoSalario);
        break;
        
         case '4':
        aumento=1.1;
        novoSalario = salarioAtual*aumento;
        printf ("\n O novo salário é R$: %.2f", novoSalario);
        break;
        
        case '5':
        aumento=1;
        novoSalario = salarioAtual*aumento;
        printf ("\n O novo salário é R$: %.2f", novoSalario);
        break;
        
        default:
        printf ("\n Opção inválida!");
    }
    
}
