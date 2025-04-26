/******************************************************************************

Simulado - Questão 3 (PROFESSOR)
Programador: José Athaulpa Kolesny Tricot

Em uma eleição existem 4 candidatos à vereador e 3 candidatos à
prefeitura. O programa deve realizar a leitura do voto para vereador e para
prefeito.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
Para vereador os códigos são: 66666 para candidato A; 77777 para candidato B;
88888 para candidato C; 99999 para candidato D
Para prefeito os códigos são: 99 para candidato X , 88 para Candidato Y; 77 para
candidato Z;
111 = voto em branco (para ambas as votações);
-Outro valor: Voto Nulo;
Elabore um algoritmo que realize a leitura de ambos os votos (vereador e depois
para prefeito) leia os códigos do candidato que receberá o voto. O programa
deverá ler 7 votos (7 para vereador e 7 para prefeito) alternadamente.
Calcule e escreva:
-total de votos para cada candidato e seu respectivo percentual de votos sobre os
votos válidos*; (em cada uma das duas eleições)
-total de votos nulos; (em cada uma das duas eleições)
-total de votos em branco; (em cada uma das duas eleições)
Votos válidos são todos os votos - nulos.
Lembre-se: os votos em branco e nulos podem ser diferentes nas duas
eleições.
a - Leitura correta dos dados;
b - Estrutura de repetição ;
c - Cálculo correto da Contagem de Votos ;
Nota: o Programa deve conter comentários e o nome do autor.
Ao FINAL deve ser exibido o nome do programador.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cont, brancoV=0, brancoP=0, nuloP=0, nuloV=0;
    int cA=0, cB=0, cC=0, cD=0, cX=0, cY=0, cZ=0;
    int votoP, votoV, validosP, validosV;
    for(cont=0;cont<7;cont++){
        printf("Digite seu voto para Vereador: ");
        scanf("%d",&votoV);
        printf("Digite seu voto para Prefeito: ");
        scanf("%d",&votoP);
        
        switch(votoV){
            case 66666: cA++;break;
            case 77777: cB++;break;
            case 88888: cC++;break;
            case 99999: cD++;break;
            case 111: brancoV++;break;
            default: nuloV++;
            
        }
        switch(votoP){
            case 99: cX++;break;
            case 88: cY++;break;
            case 77: cZ++;break;
            case 111: brancoP++;break;
            default: nuloP++;
        }
    }
    
    validosP=cX+cY+cZ+brancoP;
    validosV=cA+cB+cC+cD+brancoV;
    printf("Total de votos candidato A: %d (%.2f)\n", cA, cA*100.0/validosV);
    printf("Total de votos candidato B: %d (%.2f)\n", cB, cB*100.0/validosV);
    printf("Total de votos candidato C: %d (%.2f)\n", cC, cC*100.0/validosV);
    printf("Total de votos candidato D: %d (%.2f)\n", cD, cD*100.0/validosV);
    printf("Total de votos brancos (Vereador): %d\n", brancoV);
    printf("Total de votos nulo (Vereador): %d\n", nuloV);
    
    printf("Total de votos candidato X: %d (%.2f)\n", cX, cX*100.0/validosV);
    printf("Total de votos candidato Y: %d (%.2f)\n", cY, cY*100.0/validosV);
    printf("Total de votos candidato Z: %d (%.2f)\n", cZ, cZ*100.0/validosV);
    printf("Total de votos brancos (Prefeito): %d\n", brancoP);
    printf("Total de votos nulo (Prefeito): %d\n", nuloP);
    
}

