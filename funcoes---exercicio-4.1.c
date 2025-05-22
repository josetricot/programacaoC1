/******************************************************************************

4.1 - Calculadora2: Escreva um programa onde o usuário poderá escolher uma das opções:
a - Soma (ler operador 1 e operador 2)
b - Subtração (ler operador 1 e operador 2)
c - Divisão (ler base e divisor)
d - Multiplicação (ler base e multiplicador)
e - Fatorial
f - Potencia (ler base e potencia)
g - SAIR

*******************************************************************************/
#include <stdio.h>

int a,b;

float som(float x, float y){
    return x+y;
}
float sub(float x, float y){
    return x-y;
}
float divi(float x, float y){
    return x/y;
}
float mult(float x, float y){
    return x*y;
}
int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}
int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
void lerDoisNumeros() {
    printf("\nDigite dois números, separados com espaço: ");
    scanf("%f %f", &a, &b);
}


int main()
{
    float a, b;
    int c,d;
    char escolha;
    printf("CALCULADORA 2");
    printf("Escolha uma opção: ");
    printf("\na - Soma");
    printf("\nb - Subtração;");
    printf("\nc - Divisão");
    printf("\nd - Multiplicação");
    printf("\ne - Fatorial");
    printf("\nf - Potencia");
    printf("\ng - SAIR\n");
    scanf(" %c", &escolha);
    switch (escolha) {
    case 'a':
        lerDoisNumeros();
        printf("\nA soma dos números é: %f",som(a,b));
        break;
    case 'b':
        lerDoisNumeros();
        printf("\nA subtração dos números é: %f",sub(a,b));
        break;
    case 'c':
        lerDoisNumeros();
        printf("\nA divisão dos números é: %f",divi(a,b));
        break;
    case 'd':
        lerDoisNumeros();
        printf("\nA multiplicação dos números é: %f",mult(a,b));
        break;
    case 'e':
        printf("\nDigite um número inteiro positivo: ");
        scanf("%d", &c);
        printf("\nO fatorial do número é: %d",fatorial(c));
        break;
    case 'f':
        printf("\nDigite dois números inteiros positivos, separados com espaço, sendo um base e outro potência: ");
        scanf("%d %d", &c, &d);
        printf("\nA potência dos números é: %d",potencia(c,d));
        break;
    case 'g':
        printf("\nAté logo!");
        break;
    default:
        printf("\nDigite apenas a, b, c, d, e, f ou g");
    }
}