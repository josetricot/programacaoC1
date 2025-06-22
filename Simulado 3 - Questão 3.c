/******************************************************************************

Simulado 3 - Questão 3
Programador: José Athaualpa Kolesny Tricot

Em uma eleição de Miss existem CINCO candidatas.
Os votos são informados através de códigos.
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
1, 2, 3, 4, 5 = Candidata 1, Candidata 2, Candidata 3, Candidata 4, Candidata 5 respectivamente;
7 = voto em branco;
-Outro valor que não seja 0: Voto Nulo;
Elabore um algoritmo que leia o código da candidata que receberá o voto. Lendo uma quantidade
indefinida de votos até a eleição ser finalizada, com o voto 0.
Calcule e escreva:
-total de votos para cada candidata;
-total de votos nulos;
-total de votos em branco;
Como finalizador do conjunto de votos, tem-se o valor 0.
3.1 - Leitura correta dos dados (0,5pts);
3.2 - Estrutura de repetição (1,0pts);
3.3 - Cálculo correto da Contagem de Votos (0,5pts);
3.4 - Defina uma função que recebe a quantidade de votos das cinco candidatas e indique qual é o
maior número; Ou seja, escreva uma função que recebe cinco números inteiros e retorne o valor do
maior número inteiro. (1pt)
Nota: o Programa deve conter comentários e o nome do autor.
Ao FINAL deve ser exibido o nome do programador.

*******************************************************************************/
#include <stdio.h>

//3.4 - Defina uma função que recebe a quantidade de votos das cinco candidatas e indique qual é o
//maior número; Ou seja, escreva uma função que recebe cinco números inteiros e retorne o valor do
//maior número inteiro. (1pt)

int calculaMaiorValor(int votCand1, int votCand2, int votCand3, int votCand4, int votCand5) {
    int vet[5] = {votCand1, votCand2, votCand3, votCand4, votCand5};
    int maior = vet[0];
    int i;
    
    for (i=0; i<5; i++) {
        if (vet[i]>maior) {
            maior=vet[i];
        }        
    }
    return maior;
}

int main() {

    int escolhaMiss; //variável das escolhas dos candidatas
    int votNulo=0, votBranco=0; //variáveis votos nulos e brancos
    int votCand1=0, votCand2=0, votCand3=0, votCand4=0, votCand5=0; //coloca valor inicial para votos
    int i, j;


        do { //começo do laço faça enquanto
        
        printf ("\nRegistre seu voto para Miss: ");
        printf ("\nPara Candidata 1 digite 1");
        printf ("\nPara Candidato 2 digite 2");
        printf ("\nPara Candidato 3 digite 3");
        printf ("\nPara Candidato 4 digite 4");
        printf ("\nPara Candidato 5 digite 5");
        printf ("\nPara Branco digite 7\n");
        // 0 encerra a votação - Não mostrar para cidadão!
        scanf ("%d",&escolhaMiss);
        
        if (escolhaMiss != 0) {
            
            switch (escolhaMiss) { //escolha para Miss
                case 1:
                    printf("\nVocê votou no Candidata 1 para Miss.\n");
                    votCand1 = votCand1 + 1;
                    break;
                case 2:
                    printf("\nVocê votou no Candidata 2 para Miss.\n");
                    votCand2 = votCand2 + 1;
                    break;
                case 3:
                    printf("\nVocê votou no Candidata 3 para Miss.\n");
                    votCand3 = votCand3 + 1;
                    break;
                case 4:
                    printf("\nVocê votou no Candidata 4 para Miss.\n");
                    votCand4 = votCand4 + 1;
                    break;
                case 5:
                    printf("\nVocê votou no Candidata 5 para Miss.\n");
                    votCand5 = votCand5 + 1;
                    break;    
                case 7:
                    printf("\nVoto em Branco para Miss.\n");
                    votBranco = votBranco + 1;
                    break;
                default:
                    printf("\nVoto Nulo.\n"); //se colocar numero diferente soma como nulo
                    votNulo = votNulo + 1;
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
        
    } while (escolhaMiss != 0); //condicional laço enquanto  

    //resultados para Miss
	   
    printf("\nO total de votos para candidata 1 para Miss: %d",votCand1);
    printf("\nO total de votos para candidata 2 para Miss: %d",votCand2);
    printf("\nO total de votos para candidata 3 para Miss: %d",votCand3);
    printf("\nO total de votos para candidata 4 para Miss: %d",votCand4);
    printf("\nO total de votos para candidata 5 para Miss: %d",votCand5);
    printf("\nO total de votos em Branco para Miss: %d",votBranco);
    printf("\nO total de votos Nulos para Miss: %d",votNulo);
    printf("\n");
    //3.4
    printf("\nA candadata que vencedora recebeu %d votos.", calculaMaiorValor(votCand1, votCand2, votCand3, votCand4, votCand5));
    printf("\n");

    printf("\nProgramador: José Athaualpa Kolesny Tricot");

    return 0;
}
