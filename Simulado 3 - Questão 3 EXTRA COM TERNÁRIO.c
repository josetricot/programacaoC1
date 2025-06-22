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

// Função que retorna o maior número de votos
int calculaMaiorValor(int votos[], int tamanho) {
    int maior = votos[0];
    for (int i = 1; i < tamanho; i++) {
        if (votos[i] > maior) {
            maior = votos[i];
        }
    }
    return maior;
}

// Função que exibe as vencedoras (tratando empates)
void exibeVencedoras(int votos[], int tamanho) {
    int maior = calculaMaiorValor(votos, tamanho);

    printf("\nA(s) candidata(s) vencedora(s) com %d voto(s): ", maior);
    for (int i = 0; i < tamanho; i++) {
        if (votos[i] == maior) {
            printf("Candidata %d ", i + 1);
        }
    }
    printf("\n");
}

// Função que calcula o total de votos
int calculaTotalVotos(int votos[], int tamanho, int votosBranco, int votosNulo) {
    int total = votosBranco + votosNulo;
    for (int i = 0; i < tamanho; i++) {
        total += votos[i];
    }
    return total;
}

int main() {
    int votosCandidatas[5] = {0, 0, 0, 0, 0}; // Vetor para candidatas 1 a 5
    int votosBranco = 0;
    int votosNulo = 0;
    int escolha;

    do {
        printf("\nRegistre seu voto para Miss:");
        printf("\nPara Candidata 1 digite 1");
        printf("\nPara Candidata 2 digite 2");
        printf("\nPara Candidata 3 digite 3");
        printf("\nPara Candidata 4 digite 4");
        printf("\nPara Candidata 5 digite 5");
        printf("\nPara voto em Branco digite 7\n");

        scanf("%d", &escolha);

        if (escolha != 0) {
            if (escolha >= 1 && escolha <= 5) {
                votosCandidatas[escolha - 1]++;
                printf("\nVocê votou na Candidata %d.\n", escolha);
            } else if (escolha == 7) {
                votosBranco++;
                printf("\nVoto em Branco.\n");
            } else {
                votosNulo++;
                printf("\nVoto Nulo.\n");
            }

            // Animação simples
            printf("\nFIM!");
            fflush(stdout);
            for (int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                for (volatile int j = 0; j < 500000000; j++) {
                    // Delay simulado
                }
            }
            printf("\n");

        } else {
            printf("\nEncerrando a votação...\n");
        }

    } while (escolha != 0);

    // Calcular total de votos
    int totalVotos = calculaTotalVotos(votosCandidatas, 5, votosBranco, votosNulo);

    // Resultados
    printf("\nRESULTADOS DA ELEIÇÃO PARA MISS:\n");
    for (int i = 0; i < 5; i++) {
        float percentual = (totalVotos > 0) ? (votosCandidatas[i] * 100.0) / totalVotos : 0;
        printf("Votos da Candidata %d: %d (%.2f%%)\n", i + 1, votosCandidatas[i], percentual);
    }

    float percentualBranco = (totalVotos > 0) ? (votosBranco * 100.0) / totalVotos : 0;
    float percentualNulo = (totalVotos > 0) ? (votosNulo * 100.0) / totalVotos : 0;

    printf("Votos em Branco: %d (%.2f%%)\n", votosBranco, percentualBranco);
    printf("Votos Nulos: %d (%.2f%%)\n", votosNulo, percentualNulo);
    printf("Total de votos: %d\n", totalVotos);

    // Exibir vencedora(s)
    exibeVencedoras(votosCandidatas, 5);

    printf("\nProgramador: José Athaualpa Kolesny Tricot\n");
    return 0;
}