/******************************************************************************

Simulado - Questão 3
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

    int escolhaVer, escolhaPref; //variáveis das escolhas dos candidatos
    int votNuloVer=0, votBrancoVer=0; //variáveis votos nulos e brancos para Vereador
    int votNuloPref=0, votBrancoPref=0; //variáveis votos nulos e brancos para Prefeito
    int totRodadas=0; //informa 0 para número incial de rodadas de votação
    int votCandA=0, votCandB=0, votCandC=0, votCandD=0; //coloca valor inicial para votos
    int votCandX=0, votCandY=0, votCandZ=0;
    float percentVotCandA, percentVotCandB, percentVotCandC, percentVotCandD; //variáveis dos percentuais de votos
    float percentVotCandX, percentVotCandY, percentVotCandZ;
    float percentVotBrancoVer, percentVotNuloVer;
    float percentVotBrancoPref, percentVotNuloPref;
    int totVotVer, totVotPref; //totais de votos

    do { //começo do laço faça enquanto
        
        printf ("\nRegistre seu voto para Vereador: ");
        printf ("\nPara Candidato A digite 6666");
        printf ("\nPara Candidato B digite 7777");
        printf ("\nPara Candidato C digite 8888");
        printf ("\nPara Candidato D digite 9999");
        printf ("\nPara Branco digite 111\n");
        scanf ("%d",&escolhaVer);
        
        switch (escolhaVer){ //escolha para Vereador
            case 6666:
                printf("\nVocê votou no Candidato A para Vereador.\n");
                votCandA = votCandA + 1;
                break;
            case 7777:
                printf("\nVocê votou no Candidato B para Vereador.\n");
                votCandB = votCandB + 1;
                break;
            case 8888:
                printf("\nVocê votou no Candidato C para Vereador.\n");
                votCandC = votCandC + 1;
                break;
            case 9999:
                printf("\nVocê votou no Candidato D para Vereador.\n");
                votCandD = votCandD + 1;
                break;
            case 111:
                printf("\nVoto em Branco para Vereador.\n");
                votBrancoVer = votBrancoVer + 1;
                break;
            default:
                printf("\nVoto Nulo para Vereador.\n"); //se colocar numero diferente soma como nulo
                votNuloVer = votNuloVer + 1;
                break;
        }
                
        printf ("\nRegistre seu voto para Prefeito: ");
        printf ("\nPara Candidato X digite 99");
        printf ("\nPara Candidato Y digite 88");
        printf ("\nPara Candidato Z digite 77");
        printf ("\nPara Branco digite 111\n");
        scanf ("%d",&escolhaPref);
        
        switch (escolhaPref){ // semelhante anterios, agora para prefeito
            case 99:
                printf("\nVocê votou no Candidato X para Prefeito.\n");
                votCandX = votCandX + 1;
                break;
            case 88:
                printf("\nVocê votou no Candidato Y para Prefeito.\n");
                votCandY = votCandY + 1;
                break;
            case 77:
                printf("\nVocê votou no Candidato Z para Prefeito.\n");
                votCandZ = votCandZ + 1;
                break;
            case 111:
                printf("\nVoto em Branco para Prefeito.\n");
                votBrancoPref = votBrancoPref + 1;
                break;
            default:
                printf("\nVoto Nulo para Prefeito.\n");
                votNuloPref = votNuloPref + 1;
                break;  
        }
        
        totRodadas=totRodadas+1; //acumula as rodadas de votação (Vereador+Prefeito)
        
    } while (totRodadas<7); //condicional do laço faça enquanto
    
    totVotVer=votCandA+votCandB+votCandC+votCandD+votBrancoVer+votNuloVer; //total de votos
    totVotPref=votCandX+votCandY+votCandZ+votBrancoPref+votNuloPref;
    
    if (totVotVer > 0) { //condicional importante para evitar erros
    percentVotCandA = (votCandA * 100) / totVotVer; //calculo para porcentagem por candidato
    percentVotCandB = (votCandB * 100) / totVotVer;
    percentVotCandC = (votCandC * 100) / totVotVer;
    percentVotCandD = (votCandD * 100) / totVotVer;
    percentVotBrancoVer = (votBrancoVer * 100) / totVotVer;
    percentVotNuloVer = (votNuloVer * 100) / totVotVer;
    
    } else { //condicional importante para evitar erros
    percentVotCandA = 0;
    percentVotCandB = 0;
    percentVotCandC = 0;
    percentVotCandD = 0;
    percentVotBrancoVer = 0;
    percentVotNuloVer=0;
    }
    
    if (totVotPref > 0) { //semelhante anterior, para Prefeito
    percentVotCandX = (votCandX * 100) / totVotPref;
    percentVotCandY = (votCandY * 100) / totVotPref;
    percentVotCandZ = (votCandZ * 100) / totVotPref;;
    percentVotBrancoPref = (votBrancoPref * 100) / totVotPref;
    percentVotNuloPref = (votNuloPref * 100) / totVotPref;
    
    } else {
    percentVotCandX = 0;
    percentVotCandY = 0;
    percentVotCandZ = 0;
    percentVotBrancoPref = 0;
    percentVotNuloPref=0;
    }
    
    //resultados para Vereador
	   
    printf("\nO total de votos para Vereador: %d",totVotVer);
    printf("\nO total de votos para candidato A para Vereador: %d totalizando %.2f%%",votCandA,percentVotCandA);
    printf("\nO total de votos para candidato B para Vereador: %d totalizando %.2f%%",votCandB,percentVotCandB);
    printf("\nO total de votos para candidato C para Vereador: %d totalizando %.2f%%",votCandC,percentVotCandC);
    printf("\nO total de votos para candidato D para Vereador: %d totalizando %.2f%%",votCandD,percentVotCandD);
    printf("\nO total de votos em Branco para Vereador: %d totalizando %.2f%%",votBrancoVer,percentVotBrancoVer);
    printf("\nO total de votos Nulos para Vereador: %d totalizando %.2f%%",votNuloVer,percentVotNuloVer);
    
    printf("\n");
    
     //resultados para Prefeito
    
    printf("\nO total de votos para Prefeito: %d",totVotPref);
    printf("\nO total de votos para candidato X para Prefeito: %d totalizando %.2f%%",votCandX,percentVotCandX);
    printf("\nO total de votos para candidato Y para Prefeito: %d totalizando %.2f%%",votCandY,percentVotCandY);
    printf("\nO total de votos para candidato Z para Prefeito: %d totalizando %.2f%%",votCandZ,percentVotCandZ);
    printf("\nO total de votos em Branco para Prefeito: %d totalizando %.2f%%",votBrancoPref,percentVotBrancoPref);
    printf("\nO total de votos Nulos para Prefeito: %d totalizando %.2f%%",votNuloPref,percentVotNuloPref);
  
    
    printf("\n\nProgramador: José Athaulpa Kolesny Tricot.");

    return 0;
}