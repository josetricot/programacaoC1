/******************************************************************************

8.Apuração de votos
Em uma eleição presidencial há três candidatos. Os votos são registrados por meio de códigos:
Código  Candidato
1       Zezinho
2       Huguinho
3       Luizinho
4       Voto em Branco
5       Voto Nulo
    
Escreva um programa que:
Leia votos (códigos) até que seja digitado o valor 0, o que encerra a votação;
Desconsidere votos com códigos inválidos (diferentes de 0 a 5);
Ao final, exiba:
Total de votos para cada candidato;
Total de votos nulos e em branco;
Nome do candidato vencedor (em caso de empate, indique que houve empate).

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main()
{
    int escolha;
    int votos_zezinho = 0;
    int votos_huguinho = 0;
    int votos_luizinho = 0;
    int votos_branco = 0;
    int votos_nulo = 0;
    
    printf("\nCódigo | Candidato");
    printf("\n  1    |  Zezinho");
    printf("\n  2    |  Huguinho");
    printf("\n  3    |  Luizinho");
    printf("\n  4    |  Voto em Branco");
    printf("\n  5    |  Voto Nulo");

    do {
        printf("\nEscolha seu candidato (0 para encerrar): ");
        scanf("%d", &escolha);
        
        switch (escolha) {
            case 1:
                printf("\nVocê votou no Zezinho.");
                votos_zezinho = votos_zezinho + 1;
                break;
            case 2:
                printf("\nVocê votou no Huguinho.");
                votos_huguinho = votos_huguinho + 1;
                break;
            case 3:
                printf("\nVocê votou no Luizinho.");
                votos_luizinho = votos_luizinho + 1;
                break;
            case 4:
                printf("\nVoto em Branco.");
                votos_branco = votos_branco + 1;
                break;
            case 5:
                printf("\nVoto Nulo.");
                votos_nulo = votos_nulo + 1;
                break;
            case 0:
                // Encerra a votação
                break;
            default:
                printf("\nVoto invalidado!");
        }

    } while (escolha != 0);

    printf("\n\n--- Resultado da Votação ---");
    printf("\nTotal de votos do Zezinho: %d", votos_zezinho);
    printf("\nTotal de votos do Huguinho: %d", votos_huguinho);
    printf("\nTotal de votos do Luizinho: %d", votos_luizinho);
    printf("\nTotal de votos em Branco: %d", votos_branco);
    printf("\nTotal de votos Nulos: %d", votos_nulo);

    // Verificação do vencedor (caso explícito e passo a passo)
    if (votos_zezinho > votos_huguinho && votos_zezinho > votos_luizinho) {
        printf("\n\nZezinho foi eleito!");
    } else if (votos_huguinho > votos_zezinho && votos_huguinho > votos_luizinho) {
        printf("\n\nHuguinho foi eleito!");
    } else if (votos_luizinho > votos_zezinho && votos_luizinho > votos_huguinho) {
        printf("\n\nLuizinho foi eleito!");
    } else if (votos_zezinho == votos_huguinho && votos_zezinho > votos_luizinho) {
        printf("\n\nEmpate entre Zezinho e Huguinho!");
    } else if (votos_zezinho == votos_luizinho && votos_zezinho > votos_huguinho) {
        printf("\n\nEmpate entre Zezinho e Luizinho!");
    } else if (votos_huguinho == votos_luizinho && votos_huguinho > votos_zezinho) {
        printf("\n\nEmpate entre Huguinho e Luizinho!");
    } else {
        printf("\n\nEmpate geral ou nenhum voto computado.");
    }

    return 0;
}

