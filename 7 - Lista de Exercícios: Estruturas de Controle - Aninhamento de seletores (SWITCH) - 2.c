/******************************************************************************
2 - Calculadora: Ler a operação de acordo com o código abaixo, depois Ler dois números e imprimir o resultado.

código
(símbolo)	Operação
+	soma
-	subtração
/	divisão
*	multiplicação
Dica: use '+', '-', '/', '*'
Exemplo:
Digite a operação: +
Digite o primeiro Numero: 2
Digite o segundo Número: 3
Resultado: 5
*******************************************************************************/
#include <stdio.h>

int main()
{
    
    char opcao;
    float a,b;
    
    printf("\n Digite a operação \n + para soma, \n - para subtração, \n / para divisão, \n * para multiplicação  : ");
    opcao = getchar ();
    printf("\n Digite o primeiro número: ");   // ou peça os dois printf("Escreva dois números: "); scanf("%f %f", &a, &b);
    scanf("%f",&a);
    printf("\n Digite o segundo número: ");
    scanf("%f",&b);
    
    switch (opcao) {
        case '+':
        printf ("\n A resposta para %f + %f é: %f", a,b,a+b);
        break;
        
        case '-':
        printf ("\n A resposta para %f - %f é: %f", a,b,a-b);
        break;
        
        case '/':
        printf ("\n A resposta para %f / %f é: %f", a,b,a/b);
        break;
        
        case '*':
        printf ("\n A resposta para %f * %f é: %f", a,b,a*b);
        break;
        
        default:
        printf ("\n Opção inválida!");
    }
    
}
