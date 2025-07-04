/******************************************************************************

Avaliação C 27/06/2025
Questão 3
Programador: José Athaualpa Kolesny Tricot

Prova de Linguagem de Programação I - Fabio Okuyama 27/06/2025
Envie os fontes .C em um único arquivo .ZIP
Após o envio final, baixe os arquivos e verifique se os arquivos enviados são os corretos.
Nota: os Programas devem conter comentários e o nome do autor.
Os programas devem escrever o nome do programador em algum momento.

Questão 3 (3.0 pt): - Em uma pesquisa os entrevistados devem responder:
- Quantos serviços de streaming eles pagam assinatura (audio e video);
- Quantas horas assistem por semana (número inteiro);
- Informe a sua a renda em salários mínimos (número inteiro)
Elabore um algoritmo que faça as 3 perguntas e leia as respostas dos entrevistados; As entrevistas
devem continuar até que seja informado o número -1 para a quantidade de serviços de streaming.

Calcule e escreva:
a-média de serviços de streaming por entrevistado;
b-Qual a renda média dos entrevistados que assinam mais do que 3 serviços de streaming?
c-Qual a renda média dos entrevistados que usam mais de 20 horas de streaming por semana?
3.1 - Leitura correta dos dados (0,5pts);
3.2 - Estrutura de repetição (1,0pts);
3.3 - Cálculo correto dos itens a/b/c; (1,5pts)
O programa deve conter comentários e o nome do autor.

*******************************************************************************/
#include <stdio.h>

int main() {

    int quantStreaming=0, horasStreaming=0, rendaInformada=0, totalRendaMais20=0;
    int totQuantStreaming=0, totEntrevistados=0, totalRendaMais3Serv=0, entrevistadosMaisDe3=0, entrevistadosMaisDe20=0;
    float mediaQuantStreaming=0.0, rendaMediaMais3=0.0, mediaRendaMais20=0.0;
    int i, j;


        do { //começo do laço faça enquanto
        
        printf ("\nResponda a pesquisa sobre Streaming");
        printf ("\nQuantos serviços de streaming você paga assinatura (audio e video)?: ");
        scanf("%d", &quantStreaming);
            if (quantStreaming==-1){
            break;
            }
        printf ("\nQuantas horas você assiste por semana (número inteiro)? ");
        scanf("%d", &horasStreaming);
        printf ("\nInforme a sua a renda em salários mínimos (número inteiro):R$ ");
        scanf("%d", &rendaInformada);
        
            if (quantStreaming != -1) {
            
                //a-média de serviços de streaming por entrevistado;
                totQuantStreaming=totQuantStreaming+quantStreaming;
                //b-Qual a renda média dos entrevistados que assinam mais do que 3 serviços de streaming?
                if (quantStreaming>3) {
                    totalRendaMais3Serv=totalRendaMais3Serv+rendaInformada;
                    entrevistadosMaisDe3++;
                }
                //c-Qual a renda média dos entrevistados que usam mais de 20 horas de streaming por semana?
                if (horasStreaming>20) {
                    totalRendaMais20=totalRendaMais20+rendaInformada;
                    entrevistadosMaisDe20++;
                }
            }    
        //acumulado total de entrevistados
        totEntrevistados++;
        
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
            

        
    } while (quantStreaming != -1); //condicional laço enquanto  

    //resultados
	
    //a-média de serviços de streaming por entrevistado;
    mediaQuantStreaming=(float)totQuantStreaming/totEntrevistados; /*⚠️ Pequeno problema aqui: divisão entre inteiros (int / int),
    atribuída a float, inserido (float) antes de totQuantStreaming para garantir a precisão no cálculo com casas decimais*/
    printf("\na) A média de serviços de streaming por entrevistado é: %.1f",mediaQuantStreaming);
    
    //b-Qual a renda média dos entrevistados que assinam mais do que 3 serviços de streaming?
    if (totalRendaMais3Serv==0) printf("\n Não existem entrevistados que assinam mais de 3 serviços.");
    else { 
        rendaMediaMais3=totalRendaMais3Serv/entrevistadosMaisDe3;
        printf("\nb) A renda média dos entrevistados que assinam mais do que 3 serviços de streaming é %.2f",rendaMediaMais3);
    }
    //c-Qual a renda média dos entrevistados que usam mais de 20 horas de streaming por semana?
    if (totalRendaMais20==0) printf("\n Não existem entrevistados que usam mais de 20 horas de streaming por semana.");
    else {
    	mediaRendaMais20=totalRendaMais20/entrevistadosMaisDe20;
    	printf("\nc) A renda média dos entrevistados que usam mais de 20 horas de streaming por semana: %.2f",mediaRendaMais20);
    }
    
    printf("\n");

    printf("\nProgramador: José Athaualpa Kolesny Tricot");

    return 0;
}
