#include <stdio.h>

int main(){
    int faltas;
    float media;
    printf("Digite o numero de faltas: ");
    scanf("%d",&faltas);
    printf("Digite a media: ");
    scanf("%f",&media);
    
    if(faltas>4){
        printf("Reprovado Faltas");
    }else if(media<7){
        printf("reprovado media.")
    } else prinf("Aprovado");
}
