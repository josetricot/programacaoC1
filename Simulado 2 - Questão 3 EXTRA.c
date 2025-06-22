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

// Função que retorna o maior valor de votos de um vetor
int calculaMaiorValor(int votos[], int tamanho) {
    int maior = votos[0];
    for (int i = 1; i < tamanho; i++) {
        if (votos[i] > maior) {
            maior = votos[i];
        }
    }
    return maior;
}

// Função que retorna a posição do maior valor (para saber o vencedor)
int retornaPosicaoMaior(int votos[], int tamanho) {
    int maior = votos[0];
    int posicao = 0;
    for (int i = 1; i < tamanho; i++) {
        if (votos[i] > maior) {
            maior = votos[i];
            posicao = i;
        }
    }
    return posicao;
}

// Função que calcula o total de votos (incluindo brancos e nulos)
int calculaTotalVotos(int votos[], int tamanho, int branco, int nulo) {
    int total = branco + nulo;
    for (int i = 0; i < tamanho; i++) {
        total += votos[i];
    }
    return total;
}

int main() {
    // Prefeito
    int codigosPrefeito[3] = {91, 92, 93};
    int votosPrefeito[3] = {0, 0, 0};
    int votosBrancoPrefeito = 0;
    int votosNuloPrefeito = 0;

    // Vereador
    int codigosVereador[5] = {91111, 91112, 91113, 91114, 91115};
    int votosVereador[5] = {0, 0, 0, 0, 0};
    int votosBrancoVereador = 0;
    int votosNuloVereador = 0;

    int votoPrefeito, votoVereador;

    do {
        // Votação para vereador
        printf("\n------ VOTAÇÃO VEREADOR ------\n");
        printf("Digite o código do candidato a vereador:\n");
        for (int i = 0; i < 5; i++) {
            printf("Candidato %c - %d\n", 'A' + i, codigosVereador[i]);
        }
        printf("Branco - 77777\n");
        printf("(Digite 12345 para ENCERRAR a votação)\n");
        scanf("%d", &votoVereador);

        if (votoVereador == 12345) {
            printf("\nEncerrando a votação...\n");
            break;
        }

        // Processa voto para vereador
        int encontrado = 0;
        for (int i = 0; i < 5; i++) {
            if (votoVereador == codigosVereador[i]) {
                votosVereador[i]++;
                printf("Voto registrado para Candidato %c (Vereador)\n", 'A' + i);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0) {
            if (votoVereador == 77777) {
                votosBrancoVereador++;
                printf("Voto em BRANCO para Vereador.\n");
            } else {
                votosNuloVereador++;
                printf("Voto NULO para Vereador.\n");
            }
        }

        // Votação para prefeito
        printf("\n------ VOTAÇÃO PREFEITO ------\n");
        printf("Digite o código do candidato a prefeito:\n");
        for (int i = 0; i < 3; i++) {
            printf("Candidato %c - %d\n", 'X' + i, codigosPrefeito[i]);
        }
        printf("Branco - 77\n");
        scanf("%d", &votoPrefeito);

        encontrado = 0;
        for (int i = 0; i < 3; i++) {
            if (votoPrefeito == codigosPrefeito[i]) {
                votosPrefeito[i]++;
                printf("Voto registrado para Candidato %c (Prefeito)\n", 'X' + i);
                encontrado = 1;
                break;
            }
        }
        if (encontrado == 0) {
            if (votoPrefeito == 77) {
                votosBrancoPrefeito++;
                printf("Voto em BRANCO para Prefeito.\n");
            } else {
                votosNuloPrefeito++;
                printf("Voto NULO para Prefeito.\n");
            }
        }

        // Animação simples
        printf("\nFIM!");
        fflush(stdout);
        for (int i = 0; i < 3; i++) {
            printf(".");
            fflush(stdout);
            for (volatile int j = 0; j < 500000000; j++) {
                // Delay
            }
        }
        printf("\n");

    } while (1);

    // Totais
    int totalVotosVereador = calculaTotalVotos(votosVereador, 5, votosBrancoVereador, votosNuloVereador);
    int totalVotosPrefeito = calculaTotalVotos(votosPrefeito, 3, votosBrancoPrefeito, votosNuloPrefeito);

    // Resultados para Vereador
    printf("\n====== RESULTADOS VEREADOR ======\n");
    for (int i = 0; i < 5; i++) {
        float percentual = 0;
        if (totalVotosVereador > 0) {
            percentual = (votosVereador[i] * 100.0) / totalVotosVereador;
        }
        printf("Candidato %c (%d) recebeu %d votos (%.2f%%)\n",
               'A' + i, codigosVereador[i], votosVereador[i], percentual);
    }
    float percBrancoVer = 0;
    float percNuloVer = 0;
    if (totalVotosVereador > 0) {
        percBrancoVer = (votosBrancoVereador * 100.0) / totalVotosVereador;
        percNuloVer = (votosNuloVereador * 100.0) / totalVotosVereador;
    }
    printf("Votos em BRANCO para Vereador: %d (%.2f%%)\n", votosBrancoVereador, percBrancoVer);
    printf("Votos NULOS para Vereador: %d (%.2f%%)\n", votosNuloVereador, percNuloVer);
    printf("Total de votos para Vereador: %d\n", totalVotosVereador);

    // Resultados para Prefeito
    printf("\n====== RESULTADOS PREFEITO ======\n");
    for (int i = 0; i < 3; i++) {
        float percentual = 0;
        if (totalVotosPrefeito > 0) {
            percentual = (votosPrefeito[i] * 100.0) / totalVotosPrefeito;
        }
        printf("Candidato %c (%d) recebeu %d votos (%.2f%%)\n",
               'X' + i, codigosPrefeito[i], votosPrefeito[i], percentual);
    }
    float percBrancoPref = 0;
    float percNuloPref = 0;
    if (totalVotosPrefeito > 0) {
        percBrancoPref = (votosBrancoPrefeito * 100.0) / totalVotosPrefeito;
        percNuloPref = (votosNuloPrefeito * 100.0) / totalVotosPrefeito;
    }
    printf("Votos em BRANCO para Prefeito: %d (%.2f%%)\n", votosBrancoPrefeito, percBrancoPref);
    printf("Votos NULOS para Prefeito: %d (%.2f%%)\n", votosNuloPrefeito, percNuloPref);
    printf("Total de votos para Prefeito: %d\n", totalVotosPrefeito);

    // Determinar vencedor para prefeito
    int posicaoVencedorPrefeito = retornaPosicaoMaior(votosPrefeito, 3);
    printf("\nO candidato vencedor para PREFEITO é: Candidato %c com %d votos!\n",
           'X' + posicaoVencedorPrefeito,
           votosPrefeito[posicaoVencedorPrefeito]);

    printf("\nProgramador: José Athaualpa Kolesny Tricot\n");
    return 0;
}
