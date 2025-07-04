/******************************************************************************

Avaliação C 27/06/2025
Questão 2
Programador: José Athaualpa Kolesny Tricot

Prova de Linguagem de Programação I - Fabio Okuyama 27/06/2025
Envie os fontes .C em um único arquivo .ZIP
Após o envio final, baixe os arquivos e verifique se os arquivos enviados são os corretos.
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

2 - Escreva um programa que leia do usuário 7 valores int a,b,c,d,e,f,g. (2,0pts)
a- Leitura dos valores (0,5pts) e apresentar em tela os valores lidos em cada variável.
b- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
quantidade de números primos. (0,5 pts)
c- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e retorne a
quantidade de pares. (0,5 pts)
d- Escreva uma função que recebe como parâmetro os valores do tipo int A,B,C,D,E,F,G e escreve na
tela a tabuada da soma dos números (0,5pts)
Apresentar os resultados, fazendo uso das funções definidas nos itens b/c/d.

*******************************************************************************/
#include <stdio.h>

int divisores(int n){
    int resp=0, i;
    for(i=1;i<=n;i++){
        if(n%i==0) resp++;
    }
    return resp;
}

int primos(int a, int b, int c, int d, int e, int f, int g){
    int resp=0;
    if(divisores(a)==2)resp++;
    if(divisores(b)==2)resp++;
    if(divisores(c)==2)resp++;
    if(divisores(d)==2)resp++;
    if(divisores(e)==2)resp++;
    if(divisores(f)==2)resp++;
    if(divisores(g)==2)resp++;
    return resp;
}

int pares(int a, int b, int c, int d, int e, int f, int g){
    int resp=0;
    if(a%2==0)resp++;
    if(b%2==0)resp++;
    if(c%2==0)resp++;
    if(d%2==0)resp++;
    if(e%2==0)resp++;
    if(f%2==0)resp++;
    if(g%2==0)resp++;
    return resp;
}

int tabuada(int a, int b, int c, int d, int e, int f, int g){
    int soma=a+b+c+d+e+f+g;
    int i;
    for(i=1;i<11;i++){
        printf("%d x %d = %d\n",soma,i,soma*i);
    }
}

int main(){
    int a,b,c,d,e,f,g;
    printf("Digite o valor a:");
    scanf("%d",&a);
    printf("Digite o valor b:");
    scanf("%d",&b);
    printf("Digite o valor c:");
    scanf("%d",&c);
    printf("Digite o valor d:");
    scanf("%d",&d);
    printf("Digite o valor e:");
    scanf("%d",&e);
    printf("Digite o valor f:");
    scanf("%d",&f);
    printf("Digite o valor g:");
    scanf("%d",&g);
    printf("valor em a: %d\n",a);
    printf("valor em b: %d\n",b);
    printf("valor em c: %d\n",c);
    printf("valor em d: %d\n",d);
    printf("valor em e: %d\n",e);
    printf("valor em f: %d\n",f);
    printf("valor em g: %d\n",g);
    printf("Primos: %d\n",primos(a,b,c,d,e,f,g));
    printf("Pares: %d\n",pares(a,b,c,d,e,f,g));
    tabuada(a,b,c,d,e,f,g);
}
