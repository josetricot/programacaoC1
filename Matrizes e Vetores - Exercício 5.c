/******************************************************************************
Matrizes e Vetores - Exercícios
5 - Faça um programa que recebe a nota de 10 alunos e armazene as notas em um
vetor. Calcule:

a - a média da classe

b - a quantidade de alunos aprovados (média para aprovação:7)

c - a quantidade de alunos reprovados.



*******************************************************************************/
#include <stdio.h>

int main() {
    int i,contApro=0,contRepro=0;
    float vetA[10];
    float soma=0.0, media=0.0;
    
    //lê 10 notas
    for(i=0; i<10; i++){
        printf("Digite uma nota posição %d: ",i);
        scanf("%f",&vetA[i]);
    }

    for(i=0; i<10; i++){
        soma=soma+vetA[i];
        if (vetA[i]>=7) {
            contApro++;
        }
        else {
            contRepro++;
        }
        
    }
    media=soma/10;
    printf("\nA média da classse é %.1f, com %d aluno(s) aprovados e %d aluno(s) reprovados.",media, contApro, contRepro);
    return 0;
}