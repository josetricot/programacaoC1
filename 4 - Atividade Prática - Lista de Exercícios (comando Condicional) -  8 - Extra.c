#include <stdio.h>

int main(){ 
	char a; 
	printf ("Digite um caractere e veja-o em decimal, octal e hexadecimal: "); 
	scanf ("%c",&a); 
	printf ("\n %c = %d em decimal, %o em octal e %x em hexadecimal.\n",a,a,a,a); 
}


Extra: Função sizeof

Utilizado para descobrir quantos bytes certa variável ocupa;
Essa função recebe uma variável como argumento;
Exemplo:
int x,a,b;
x =sizeof(int);
a=sizeof(b);

Leia, teste, tente descobrir o que o código faz

https://drive.google.com/file/d/1wp1RBUHGapW8jPBcSSJ380Z1K69OkTdD/view?usp=sharing

Ver código do arquivo typetest.c (slide anterior)
Alterar o código para conferir os dados da tabela do slide 09 do material sobre variáveis
Pesquisar como calcular a faixa de valores que podem ser armazenados em X bits
Como calcular para valores com sinal e sem sinal?
Dica: A função sizeof, serve para identificar a quantidade de bytes usados por uma variável ou tipo de variável.

Como imprimir em tela as informações sobre a plataforma em que você está trabalhando

Nos compiladores existem algumas constantes de sistemas que podem auxiliar descobrir que tipo de ambiente  você está trabalhando.
Neste código existem comandos mais avançados, que ainda não vimos, mas disponibilizo aqui, a título de curiosidade.
Link (código feito com auxílio do chatgpt)

https://drive.google.com/file/d/1wARpkQlQm2r7P5DCL0iDnCfek94gswnO/view?usp=sharing
