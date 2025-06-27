/*Exercício 3.  Faça um programa que leia a média do aluno e seu numero de faltas.
se as faltas forem maior ou igual a 5, escreva 'reprovado por faltas'.
Se a média for menor que 7, foi reprovado por média. Senão, escreva 'Parabéns! você foi aprovado*/

#include <stdio.h>

int main()

{

    float average;
    int absences;
    
    printf("\nDigite a sua média: ");
    scanf("%f",&average);
    printf("\nDigite o seu número de faltas: ");
    scanf("%d",&absences);

    if (absences >=5) {
        printf("\nVocê foi reprovado por faltas!"); 
    }
    
    else if (average <7) {
        printf("\nVocê foi reprovado por média!"); 
    }
    
    else {
        printf("\nVocê foi aprovado!"); 
    }
    
    return 0;
}
