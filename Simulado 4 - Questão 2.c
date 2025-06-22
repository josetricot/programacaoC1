/******************************************************************************

Simulado 4 Questão 2
Programador: José Athualpa Kolesny Tricot
CPF: 009.400.920-18
Ano de Nascimento: 1986

Em uma eleição existem 4 candidatos:
Candidatos:
1 - Seu Primeiro Nome (código são os 3 primeiros dígitos do seu CPF)
2 - Seu Sobrenome (código é o segundo bloco do seu CPF)
3 - Seu Primeiro Nome ao Contrário (código é o terceiro bloco do seu CPF)
4 - Seu Sobrenome ao contrário (código é o ano do seu nascimento, com 4 dígitos)
4 - Voto em Branco (código é os últimos 2 dígitos do CPF)
Faça um programa que leia um número indefinido de votos.
O programa deve parar de ler votos quando for inserido o voto 9999 (este não deve ser considerado na
contagem).
O programa deve apresentar para cada eleitor as opções de voto (nomes e números).
O programa deve imprimir seu nome, seu CPF, ano do seu nascimento.
Faça, pelo menos, 2 casos de teste.
Ao final, seu programa deve apresentar:
a - total de votos Nulos;
b - total de votos em Branco;
c - total de votos de cada Candidato;
d - vencedor da eleição (suponha que não haverá empate);
Exemplo:
Fabio Yoshimitsu Okuyama - Nascimento 1979
CPF 123.456.789-07
Neste caso, os candidatos e respectivos números seriam:
Candidato 1: Fabio - Número 123
Candidato 2: Okuyama - Número 456
Candidato 3 : Oibaf - Número 789
Candidato 4: Amayuko - Número 1979
Voto Branco: Numero 07
Caso você tenha partes repetidas no seu CPF: use o de trás para frente. 320 -> 023
Se algum número de candidato iniciar com zero, o dígito zero pode ser ignorado.

Exemplo de caso de teste:
Voto 1 123
Voto 2 456
Voto 3 789
Voto 4 123
Voto 5 456
Voto 6 789
Voto 7 666
Voto 8 7
Voto 9 123
Voto 10 1234

Total de Votos do Candidato
Fabio: 03
Total de Votos do Candidato
Okuyama: 02
Total de Votos do Candidato
Oibaf: 02
Total de Votos do Candidato
Amayuko: 00
Total de Votos em Branco: 1
Total de Votos Nulos: 1
Vencedor: Fabio

Obs: o voto que contém o código de saída 9999 não deve ser considerado.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int escolha; //variável da escolha dos candidatos
    int votNulo=0, votBranco=0; //variáveis votos nulos e brancos
    int votCandJose=0, votCandTricot=0, votCandEsoj=0, votCandTocirt=0; //coloca valor inicial para votos
    int i, j;
    
    do { //começo do laço faça enquanto
        
        printf ("\nRegistre seu voto: ");
        printf ("\nPara Candidato Jose digite 9");
        printf ("\nPara Candidato Tricot digite 400");
        printf ("\nPara Candidato Esoj digite 920");
        printf ("\nPara Candidato Tocirt digite 1986");
        printf ("\nPara Branco digite 18\n");
        // 12345 encerra a votação - Não mostrar para cidadão!
        scanf ("%d",&escolha);
        
        if (escolha != 9999) {
            
            switch (escolha) { //escolha para Vereador
                case 9:
                    printf("\nVocê votou no Candidato Jose.\n");
                    votCandJose = votCandJose + 1;
                    break;
                case 400:
                    printf("\nVocê votou no Candidato Tricot.\n");
                    votCandTricot = votCandTricot + 1;
                    break;
                case 920:
                    printf("\nVocê votou no Candidato Esoj.\n");
                    votCandEsoj = votCandEsoj + 1;
                    break;
                case 1986:
                    printf("\nVocê votou no Candidato Tocirt.\n");
                    votCandTocirt = votCandTocirt + 1;
                    break;
                case 18:
                    printf("\nVoto em Branco.\n");
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
        
    } while (escolha != 9999); //condicional laço enquanto
    
        //resultados para Vereador
	   
    printf("\nO total de votos para candidato Jose: %d",votCandJose);
    printf("\nO total de votos para candidato Tricot: %d",votCandTricot);
    printf("\nO total de votos para candidato Esoj: %d",votCandEsoj);
    printf("\nO total de votos para candidato Tocirt: %d",votCandTocirt);
    printf("\nO total de votos em Branco: %d",votBranco);
    printf("\nO total de votos Nulos: %d",votNulo);
    
    printf("\n");
    
    if ((votCandJose>votCandTricot) && (votCandJose>votCandEsoj) && (votCandJose>votCandTocirt)) {
        printf("\nO candidato Jose venceu!");
    }
    else if ((votCandTricot>votCandJose) && (votCandTricot>votCandEsoj) && (votCandTricot>votCandTocirt)) {
        printf("\nO candidato Tricot venceu!");
    }
    else if ((votCandEsoj>votCandJose) && (votCandEsoj>votCandTricot) && (votCandEsoj>votCandTocirt)) {
        printf("\nO candidato Esoj venceu!");
    }   
    else {
        printf("\nO candidato Tocirt venceu!");
    }
    
    printf("\n");
    printf("\nProgramador: José Athualpa Kolesny Tricot");
    printf("\nCPF: 009.400.920-18");
    printf("\nAno de Nascimento: 1986");

    return 0;
}

/*
TESTE 1
9 → (Jose)  
400 → (Tricot)  
920 → (Esoj)  
9 → (Jose)  
400 → (Tricot)  
9 → (Jose)  
1986 → (Tocirt)  
18 → (Branco)  
123 → (Nulo)  
9999 → (Encerra)

Resultado:
Jose: 3 votos
Tricot: 2 votos
Esoj: 1 voto
Tocirt: 1 voto
Branco: 1 voto
Nulo: 1 voto

Vencedor: Jose

TESTE 2
920 → (Esoj)  
920 → (Esoj)  
1986 → (Tocirt)  
400 → (Tricot)  
400 → (Tricot)  
400 → (Tricot)  
18 → (Branco)  
18 → (Branco)  
9999 → (Encerra)  

Resultado:
Jose: 0 votos
Tricot: 3 votos
Esoj: 2 votos
Tocirt: 1 voto
Branco: 2 votos
Nulo: 0 votos

Vencedor: Tricot
*/