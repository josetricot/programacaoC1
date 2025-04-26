/******************************************************************************

Simulado Questão 3 - Professor

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

