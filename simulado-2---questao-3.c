/******************************************************************************

Simulado 2
Questão 3
Programador: José Athaulpa Kolesny Tricot
Questão 3 (3.0 pt): - Em uma eleição municipal, existem:
- 3 candidatos a prefeito: 91, 92 e 93
- 5 candidatos a vereador: 91111, 91112, 91113, 91114 e 91115
Os votos são informados através dos códigos acima.
77 - voto em branco para prefeito;
77777 - voto em branco para vereador
-Outro valor que não seja 12345: Voto Nulo;
Elabore um programa que leia para cada eleitor, o voto para vereador e o voto
para prefeito (nesta ordem). Repetir até que seja inserido o voto 12345 para
vereador, encerrando a votação. Os votos nulos e brancos devem ser
distintos para cada uma das eleições.
Calcule e escreva:
-total de votos para cada candidato em cada uma das eleições;
-total de votos nulos em cada uma das eleições;
-total de votos em branco em cada uma das eleições;
3.1 - Leitura correta dos dados (0,5pts);
3.2 - Estrutura de repetição (1,0pts);
3.3 - Cálculo correto e apresentação da Contagem de Votos para prefeito e para
Vereador (1,0pts);
3.4 - Informe o vencedor da eleição de prefeito (0,5pts)
Considere que não haverá empates na eleição para prefeito.

Nota: o Programa deve conter comentários e o nome do autor.
Deve ser exibido o nome do programador.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int escolhaVer, escolhaPref; //variáveis das escolhas dos candidatos
    int votNuloVer=0, votBrancoVer=0; //variáveis votos nulos e brancos para Vereador
    int votNuloPref=0, votBrancoPref=0; //variáveis votos nulos e brancos para Prefeito
    int votCandA=0, votCandB=0, votCandC=0, votCandD=0, votCandE=0; //coloca valor inicial para votos
    int votCandX=0, votCandY=0, votCandZ=0;
    int i, j;
    
    do { //começo do laço faça enquanto
        
        printf ("\nRegistre seu voto para Vereador: ");
        printf ("\nPara Candidato A digite 91111");
        printf ("\nPara Candidato B digite 91112");
        printf ("\nPara Candidato C digite 91113");
        printf ("\nPara Candidato D digite 91114");
        printf ("\nPara Candidato E digite 91115");
        printf ("\nPara Branco digite 111\n");
        // 12345 encerra a votação - Não mostrar para cidadão!
        scanf ("%d",&escolhaVer);
        
        if (escolhaVer != 12345) {
            
            switch (escolhaVer) { //escolha para Vereador
                case 91111:
                    printf("\nVocê votou no Candidato A para Vereador.\n");
                    votCandA = votCandA + 1;
                    break;
                case 91112:
                    printf("\nVocê votou no Candidato B para Vereador.\n");
                    votCandB = votCandB + 1;
                    break;
                case 91113:
                    printf("\nVocê votou no Candidato C para Vereador.\n");
                    votCandC = votCandC + 1;
                    break;
                case 91114:
                    printf("\nVocê votou no Candidato D para Vereador.\n");
                    votCandD = votCandD + 1;
                    break;
                case 91115:
                    printf("\nVocê votou no Candidato E para Vereador.\n");
                    votCandE = votCandE + 1;
                    break;    
                case 77777:
                    printf("\nVoto em Branco para Vereador.\n");
                    votBrancoVer = votBrancoVer + 1;
                    break;
                default:
                    printf("\nVoto Nulo para Vereador.\n"); //se colocar numero diferente soma como nulo
                    votNuloVer = votNuloVer + 1;
                    break;
            }    
            
            printf ("\nRegistre seu voto para Prefeito: ");
            printf ("\nPara Candidato X digite 91");
            printf ("\nPara Candidato Y digite 92");
            printf ("\nPara Candidato Z digite 93");
            printf ("\nPara Branco digite 77\n");
            scanf ("%d",&escolhaPref);
      
                switch (escolhaPref) { // semelhante anterios, agora para prefeito
                    case 91:
                        printf("\nVocê votou no Candidato X para Prefeito.\n");
                        votCandX = votCandX + 1;
                        break;
                    case 92:
                        printf("\nVocê votou no Candidato Y para Prefeito.\n");
                        votCandY = votCandY + 1;
                        break;
                    case 93:
                        printf("\nVocê votou no Candidato Z para Prefeito.\n");
                        votCandZ = votCandZ + 1;
                        break;
                    case 77:
                        printf("\nVoto em Branco para Prefeito.\n");
                        votBrancoPref = votBrancoPref + 1;
                        break;
                    default:
                        printf("\nVoto Nulo para Prefeito.\n");
                        votNuloPref = votNuloPref + 1;
                    break;  
                }
            // Exibe mensagem de finalização
            printf("\nFIM!");
            fflush(stdout);

            for (int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                    for (volatile int j = 0; j < 700000000; j++) {
            // Pequeno delay (simulado com laço vazio)
                    }
            }
            printf("\n");
            
        } else {
            printf("\nEncerrando a votação...\n"); //encerra se votar 12345 para verador
        }
        
    } while (escolhaVer != 12345); //condicional laço enquanto
    
        //resultados para Vereador
	   
    printf("\nO total de votos para candidato A para Vereador: %d",votCandA);
    printf("\nO total de votos para candidato B para Vereador: %d",votCandB);
    printf("\nO total de votos para candidato C para Vereador: %d",votCandC);
    printf("\nO total de votos para candidato D para Vereador: %d",votCandD);
    printf("\nO total de votos para candidato E para Vereador: %d",votCandE);
    printf("\nO total de votos em Branco para Vereador: %d",votBrancoVer);
    printf("\nO total de votos Nulos para Vereador: %d",votNuloVer);
    
    printf("\n");
    
     //resultados para Prefeito
    
    printf("\nO total de votos para candidato X para Prefeito: %d",votCandX);
    printf("\nO total de votos para candidato Y para Prefeito: %d",votCandY);
    printf("\nO total de votos para candidato Z para Prefeito: %d",votCandZ);
    printf("\nO total de votos em Branco para Prefeito: %d",votBrancoPref);
    printf("\nO total de votos Nulos para Prefeito: %d",votNuloPref);
    
    if ((votCandX>votCandY) && (votCandX>votCandZ))  {
        printf("\nO candidato X venceu para Prefeito!");
    }
    else if ((votCandY>votCandX) && (votCandY>votCandZ)) {
        printf("\nO candidato Y venceu para Prefeito!");    
    }
    else {
        printf("\nO candidato Z venceu para Prefeito!");
    }
    printf("\n");
    printf("\nProgramador: José Athaulpa Kolesny Tricot.\n");
}
