/******************************************************************************

Simulado - Questão 1 PROFESSOR
Programador: José Athaulpa Kolesny Tricot

 Questão  1: Faça um programa em linguagem C que execute as seguintes tarefas:
 a) Peça ao usuário números inteiros positivos, deve parar de pedir números
 quando o usuário digitar ‘0’ (zero) Nesta tarefa é obrigatório o uso correto de
 uma estrutura de repetição (for, while ou do.. while);b) Para cada número inteiro
 positivo digitado pelo usuário, o programa deve mostrar os divisores dos valores
 ímpares e a tabuada dos valores pares;
 c) Quando o laço de repetição terminar (isso ocorrerá quando o usuário digitar ‘0’),
 o programa deverá mostrar ao usuário a Média de todos dos valores ímpares
 e oMaior valor par digitado pelo usuário: Desconsiderar o valor ‘0’ (zero) para
 todos os itens


*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, cont_impares=0, maior_par=0, soma_impares;
    int i, mult;
    float media_impares;
    
    do{
        
        printf("\nDigite um número: ");
        scanf("%d",&num);
        
        if(num!=0){
            if(num%2==0){
                
                for(mult=1;mult<11;mult++){
                    printf("%d x %d = %d\n",num, mult, num*mult);
                }
            
            if(num>maior_par) maior_par=num;
            
            }else{
                printf("Divisores de %d: ",num);
                for(i=1;i<=num;i++){
                    if(num%i==0) printf(" %d",i);
                }
                cont_impares++;
                soma_impares=soma_impares+num;
            }
        }
     
    }while (num!=0);
        media_impares=soma_impares*1.0/cont_impares;
        printf("Maior Par: %d\n", maior_par);
        printf("media_impares: %.2f", media_impares);

}
